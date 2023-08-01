/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miguelro <miguelro@students.42lisboa.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 09:30:28 by mblank            #+#    #+#             */
/*   Updated: 2023/08/01 18:25:29 by miguelro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pipex.h"

void	child(char **argv, int *pipe_fd, char **envp, int fd)
{
	char	**cmds;

	dup2(fd, 0);
	dup2(pipe_fd[1], 1);
	close(pipe_fd[1]);
	close(pipe_fd[0]);
	close(fd);
	cmds = ft_split(argv[2], ' ');
	execve(path_finder(cmds, envp), cmds, NULL);
	if (execvp(argv[2], &argv[2]) == -1)
		ft_error("Error executing command\n");
}

void	parent(char **argv, int *pipe_fd, char **envp, int fd)
{
	char	**cmds;

	dup2(fd, 1);
	dup2(pipe_fd[0], 0);
	close(pipe_fd[0]);
	close(fd);
	cmds = ft_split(argv[3], ' ');
	execve(path_finder(cmds, envp), cmds, NULL);
	if (execvp(argv[2], &argv[2]) == -1)
		ft_error("Error executing command\n");
}

void	close_pipes(int i, int f1, int f2, int *pipe_fd)
{
	if (i == 0)
	{
		close(f1);
		close(pipe_fd[1]);
	}
	else
	{
		close(pipe_fd[0]);
		close(f2);
	}
}

void	pipex(pid_t pid, char **av, char **envp)
{
	int	i;
	int	f1;
	int	f2;
	int	pipe_fd[2];

	i = -1;
	f1 = open(av[1], O_RDWR);
	f2 = open(av[4], O_CREAT | O_RDWR | O_TRUNC, 0644);
	if (f1 < 0 || f2 < 0)
		ft_error("Error opening infile/outfile\n");
	if (pipe(pipe_fd) == -1)
		ft_error("Error creating pipe");
	while (++i < 2)
	{
		pid = fork();
		if (pid == -1)
			ft_error("Error creating fork");
		if (pid == 0 && i == 0)
			child(av, pipe_fd, envp, f1);
		if (pid == 0 && i == 1)
			parent(av, pipe_fd, envp, f2);
		close_pipes(i, f1, f2, pipe_fd);
	}
	i = 0;
}

int	main(int ac, char **av, char **envp)
{
	pid_t	pid;
	int		i;

	i = -1;
	if (ac != 5)
		ft_error("Invalid parameters. Enter valid number of parameters\n");
	while (av && av[++i])
	{
		if (!av[i][0])
			ft_error ("Invalid parameters. Empty parameters\n");
	}
	pid = 0;
	pipex(pid, av, envp);
	i = 0;
	while (i++ < 2)
		waitpid(-1, NULL, 0);
	return (0);
}

/* int	main(int ac, char **av, char **envp)
{
	int		f1;
	int		f2;
	int		pipe_fd[2];
	pid_t	pid;
	int		i;

	i = -1;
	if (ac != 5)
		ft_error("Invalid parameters. Enter valid number of parameters\n");
	while (av && av[++i])
	{
		if (!av[i][0])
			ft_error ("Invalid parameters. Empty parameters\n");
	}
	i = -1;
	f1 = open(av[1], O_RDWR);
	f2 = open(av[4], O_CREAT | O_RDWR | O_TRUNC, 0644);
	if (f1 < 0 || f2 < 0)
		ft_error("Error opening infile/outfile\n");
	if (pipe(pipe_fd) == -1)
		ft_error("Error creating pipe");
	while (++i < 2)
	{
		pid = fork();
		if (pid == -1)
			ft_error("Error creating fork");
		if (pid == 0 && i == 0)
			child(av, pipe_fd, envp, f1);
		if (pid == 0 && i == 1)
			parent(av, pipe_fd, envp, f2);
		if (i == 0)
		{
			close(f1);
			close(pipe_fd[1]);
		}
		else
		{
			close(pipe_fd[0]);
			close(f2);
		}
	}
	i = 0;
	while (i++ < 2)
		waitpid(-1, NULL, 0);
	return (0);
} */

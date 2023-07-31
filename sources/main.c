/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mblank <mblank@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 09:30:28 by mblank            #+#    #+#             */
/*   Updated: 2023/07/30 14:45:36 by mblank           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pipex.h"

void	child(char **argv, int *pipe_fd, char **envp, int fd)
{
	char	**cmds;

	dup2(fd, 0);
	dup2(pipe_fd[1], 1);
	close(pipe_fd[0]);
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
	close(pipe_fd[1]);
	cmds = ft_split(argv[3], ' ');
	execve(path_finder(cmds, envp), cmds, NULL);
	if (execvp(argv[2], &argv[2]) == -1)
		ft_error("Error executing command\n");
}

int	main(int ac, char **av, char **envp)
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
	i = 0;
	f1 = open(av[1], O_CREAT | O_RDWR);
	f2 = open(av[4], O_CREAT | O_RDWR | O_TRUNC, 0644);
	if (f1 < 0 || f2 < 0)
		perror("Error opening infile/outfile\n");
	if (pipe(pipe_fd) == -1)
		ft_error("Error creating pipe");
	pid = fork();
	if (pid == -1)
		ft_error("Error creating fork");
	if (pid == 0)
		child(av, pipe_fd, envp, f1);
	parent(av, pipe_fd, envp, f2);
	while (i++ < ac - 3)
		waitpid(-1, NULL, -1);
	return (0);
}

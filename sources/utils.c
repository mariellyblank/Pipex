/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mblank <mblank@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 11:30:43 by mblank            #+#    #+#             */
/*   Updated: 2023/07/18 18:54:29 by mblank           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pipex.h"

void	ft_error(char *str)
{
	ft_putstr_fd(str, 2);
	exit(1);
}

char	*find_path(char **envp)
{
	int	i;

	i = 0;
	while (envp[i] && ft_strncmp(envp[i], "PATH=", 5))
		i++;
	if (!envp[i])
		return (NULL);
	return (envp[i] + 5);
}

char	*find_executable(char *cmd, char *path)
{
	char	*dir;
	char	*bin;

	while (path && str_ichr(path, ':') > -1)
	{
		dir = ft_substr(path, 0, str_ichr(path, ':'));
		bin = ft_strjoin(ft_strjoin(dir, "/"), cmd);
		free(dir);
		if (access(bin, F_OK) == 0)
			return (bin);
		free(bin);
		path += str_ichr(path, ':') + 1;
	}
	return (NULL);
}

char	*path_finder(char **cmds, char **envp)
{
	char	*cmd;
	char	*path;
	char	*bin;

	cmd = cmds[0];
	path = find_path(envp);
	if (!path)
		return (cmd);
	bin = find_executable(cmd, path);
	if (!bin)
		return (cmd);
	return (bin);
}

int	str_ichr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i])
	{
		if (s[i] == (char)c)
			return (i);
		i++;
	}
	if (s[i] == (char)c)
		return (i);
	return (-1);
}

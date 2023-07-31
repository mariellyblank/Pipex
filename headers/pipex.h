/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pipex.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mblank <mblank@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 09:47:57 by mblank            #+#    #+#             */
/*   Updated: 2023/07/18 18:32:34 by mblank           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PIPEX_H
# define PIPEX_H

# include "pipex.h"
# include "libft.h"
# include <errno.h>
# include <fcntl.h>
# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include <sys/wait.h>
# include <unistd.h>

void	ft_error(char *str);
char	*find_path(char **envp);
char	*find_executable(char *cmd, char *path);
char	*path_finder(char **cmds, char **envp);
void	child(char **argv, int *pipe_fd, char **envp, int fd);
int		str_ichr(const char *s, int c);

#endif
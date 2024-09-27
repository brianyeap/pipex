/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pipex.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bryeap <bryeap@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/09 18:27:07 by bryeap            #+#    #+#             */
/*   Updated: 2024/09/27 22:37:47 by bryeap           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PIPEX_H
# define PIPEX_H

# include <stdlib.h>
# include <unistd.h>
# include <string.h>
# include <stdio.h>
# include <sys/wait.h>
# include <sys/types.h>
# include <fcntl.h>

void	ft_putchar_fd(char c, int fd);
void	ft_putstr_fd(char *s, int fd);

char	*ft_strnstr(const char *str, const char *c, size_t n);
char	**ft_split(char const *s, char c);
char	*ft_strjoin(char const *s1, char const *s2);

void	error(void);
char	*find_path(char *cmd, char **envp);
void	execute(char *argv, char **envp);

#endif

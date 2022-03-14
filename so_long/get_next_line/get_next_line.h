/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccalas <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/02 10:01:11 by ccalas            #+#    #+#             */
/*   Updated: 2021/12/07 14:08:49 by ccalas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE (42)
# endif

# include <unistd.h>
# include <stdlib.h>
# include <fcntl.h>

size_t	ft_strlen_gnl(char *s);
char	*ft_strchr_gnl(char *str, int c);
char	*ft_strjoin_gnl(char *line_wip, char *buff);
char	*ft_strjoin_part2(char *line_wip, char *buff, char *dest);
char	*ft_line(char *line_wip);
char	*ft_new_start(char	*line_wip);
char	*ft_read_fd(int fd, char *line_wip);
char	*get_next_line(int fd);

#endif

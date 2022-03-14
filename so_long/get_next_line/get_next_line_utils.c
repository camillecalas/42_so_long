/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccalas <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 14:08:12 by ccalas            #+#    #+#             */
/*   Updated: 2021/12/07 14:08:15 by ccalas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
//#include "../so_long.h"

size_t	ft_strlen_gnl(char *s)
{
	size_t	i;

	i = 0;
	if (!s)
		return (0);
	while (s[i] != '\0')
		i++;
	return (i);
}

char	*ft_strchr_gnl(char *str, int c)
{
	int	i;

	i = 0;
	if (!str)
		return (NULL);
	while (str[i] != '\0')
	{
		if (str[i] == (char) c)
			return ((char *) str);
		i++;
	}
	return (NULL);
}

char	*ft_strjoin_gnl(char *line_wip, char *buff)
{
	char		*dest;

	if (!line_wip)
	{
		line_wip = malloc(sizeof(char) * 1);
		line_wip[0] = '\0';
	}
	if (!line_wip || !buff)
		return (NULL);
	dest = malloc(sizeof(char) * (ft_strlen_gnl(line_wip)
				+ ft_strlen_gnl(buff) + 1));
	if (!dest)
		return (NULL);
	dest = ft_strjoin_part2(line_wip, buff, dest);
	return (dest);
}

char	*ft_strjoin_part2(char *line_wip, char *buff, char *dest)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (line_wip[i] != '\0')
	{
		dest[i] = line_wip[i];
		i++;
	}
	while (buff[j] != '\0')
	{
		dest[i] = buff[j];
		i++;
		j++;
	}
	dest[ft_strlen_gnl(line_wip) + ft_strlen_gnl(buff)] = '\0';
	free (line_wip);
	return (dest);
}

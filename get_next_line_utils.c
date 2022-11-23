/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbelleng <tbelleng@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 09:37:51 by tbelleng          #+#    #+#             */
/*   Updated: 2022/11/23 18:22:06 by tbelleng         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int	ft_strlen_classic(char *str)
{
	int	i;

	i = 0;
	if (!str)
		return (0);
	while (str[i])
		i++;
	return (i);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	if (!str)
		return (0);
	while (str[i] && str[i] != '\n')
		i++;
	if (str[i])
		i++;
	return (i);
}

char	*ft_strjoin(char *readed, char *buff)
{
	char	*str;	
	int		i;
	int		j;

	i = 0;
	j = 0;
	if (!readed && !buff)
		return (0);
	str = malloc(sizeof(char) * (ft_strlen_classic(readed)
				+ ft_strlen_classic(buff)) + 1);
	if (!str)
		return (0);
	if (buff)
	{
		while (buff[i])
			str[j++] = buff[i++];
	}
	j = 0;
	while (readed[j])
		str[i++] = readed[j++];
	str[i] = 0;
	if (buff)
		free(buff);
	return (str);
}

int	check(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\n' && str[i])
		i++;
	if (str[i] == '\n')
		return (1);
	return (0);
}

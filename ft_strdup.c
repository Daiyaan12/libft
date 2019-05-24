/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbadat <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/24 10:55:21 by dbadat            #+#    #+#             */
/*   Updated: 2019/05/24 11:30:08 by dbadat           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strdup(const char *s1)
{
	size_t len;
	int i;
	i = 0;
	char *s2;
	len = 0;
	while(s1[len] != '\0')
	{
		len++;
	}
	s2 = (char*)malloc(len*sizeof(char) + 1);

	if (s2 == NULL)
		return (NULL);
	while (s1[i] != '\0')
	{
		s2[i] = s1[i];
		i++;
	}
	s2[i] = '\0'
	return (s2);
}

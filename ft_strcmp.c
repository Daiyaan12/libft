/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbadat <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/04 09:21:03 by dbadat            #+#    #+#             */
/*   Updated: 2019/06/04 11:56:50 by dbadat           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
int ft_strcmp(const char *s1, const char *s2)
{
	int i;
	int j;


	while(s1[i] != '\0')
	{
		write(1, "string 1 ", 9);

		if (s1[i] > s2[j])
		{
			return('>');
		}
		if (s1[i] == s2[j])
		{
			return ('=');
		}
		if (s1[i] < s2[j])
		{
			return ('<');
		}
		else 
		{
			return (0);
		}
	}

}	

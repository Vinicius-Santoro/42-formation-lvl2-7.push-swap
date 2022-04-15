/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vnazioze <vnazioze@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/15 09:44:19 by vnazioze          #+#    #+#             */
/*   Updated: 2021/09/15 09:50:11 by vnazioze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*new_string;
	int		i;
	int		j;

	i = 0;
	j = 0;
	new_string = (char *)malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
	if (s1 == NULL || s2 == NULL || new_string == NULL)
		return (NULL);
	else
	{
		while (s1[i] != '\0')
		{
			new_string[i] = s1[i];
			i++;
		}
		while (s2[j] != '\0')
		{
			new_string[i] = s2[j];
			i++;
			j++;
		}
		new_string[i] = '\0';
	}
	return (new_string);
}

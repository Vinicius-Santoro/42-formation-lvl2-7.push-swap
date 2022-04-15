/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vnazioze <vnazioze@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/09 14:38:16 by vnazioze          #+#    #+#             */
/*   Updated: 2021/09/15 11:30:51 by vnazioze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *string, int character)
{
	const char		*aux;
	unsigned char	character_aux;

	aux = string;
	character_aux = (unsigned char) character;
	while (*aux != '\0')
		aux++;
	if (character_aux == '\0')
		return ((char *)aux);
	while (aux >= string)
	{
		aux--;
		if (character_aux == *aux)
			return ((char *)aux);
	}
	return (NULL);
}

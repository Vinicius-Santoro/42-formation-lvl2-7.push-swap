/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vnazioze <vnazioze@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/08 13:03:05 by vnazioze          #+#    #+#             */
/*   Updated: 2021/09/14 16:24:20 by vnazioze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *destiny, const void *source, size_t lengh)
{
	size_t	index;
	char	*destiny_aux;
	char	*source_aux;

	index = 0;
	destiny_aux = (char *)destiny;
	source_aux = (char *)source;
	if (destiny_aux > source_aux)
	{
		while (lengh > 0)
		{
			destiny_aux[lengh - 1] = source_aux[lengh - 1];
			lengh--;
		}
	}
	else
		ft_memcpy(destiny, source, lengh);
	return (destiny);
}

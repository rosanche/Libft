/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rosanche <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/28 18:40:55 by rosanche          #+#    #+#             */
/*   Updated: 2017/12/09 20:20:36 by rosanche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *foin, const char *aiguille, size_t len)
{
	size_t		i;
	size_t		n;
	char		*ptr;

	i = 0;
	while (foin[i] && i < len)
	{
		n = 0;
		while (aiguille[n] == foin[i])
		{
<<<<<<< HEAD
			ptr = &foin[i];
			while (aiguille[n] && aiguille[n] == foin[i + n])
=======
			ptr = (char *)&foin[i];
			while (aiguille[n])
			{
				i++;
>>>>>>> 7135655e3ea47981033926a62d57a7918a021271
				n++;
			if (!(aiguille[n]))
				return (ptr);
		}
		i++;
	}
	return (NULL);
}

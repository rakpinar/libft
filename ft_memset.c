/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rakpinar <rakpinar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/19 17:17:45 by rakpinar          #+#    #+#             */
/*   Updated: 2022/12/19 17:17:45 by rakpinar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*arr;
	size_t			i;

	i = 0;
	arr = (unsigned char *)b;
	while (i < len)
	{
		arr[i++] = c;
	}
	return (arr);
}

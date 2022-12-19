/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rakpinar <rakpinar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/19 17:19:08 by rakpinar          #+#    #+#             */
/*   Updated: 2022/12/19 17:19:08 by rakpinar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;

	if (!dst && !dstsize)
		return (0);
	i = ft_strlen(dst);
	if (i >= dstsize)
		return (ft_strlen(src) + dstsize);
	ft_strlcpy((dst + i), src, dstsize - i);
	return (i + ft_strlen(src));
}

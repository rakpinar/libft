/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rakpinar <rakpinar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/19 17:14:49 by rakpinar          #+#    #+#             */
/*   Updated: 2022/12/19 17:14:49 by rakpinar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"libft.h"

int	ft_atoi(const char *str)
{
	long int	num;
	int			sign;

	sign = 1;
	num = 0;
	while ((*str >= 9 && *str <= 13) || (*str == 32))
		str++;
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			sign = -1;
		str++;
	}
	while (*str != 0 && *str >= '0' && *str <= '9')
	{
		num = (num * 10) + (*str - '0') * sign;
		if (num > 2147483647)
			return (-1);
		if (num < -2147483648)
			return (0);
		str++;
	}
	return (num);
}

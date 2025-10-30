/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nelhansa <nelhansa@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 20:59:25 by nelhansa          #+#    #+#             */
/*   Updated: 2025/10/29 14:16:46 by nelhansa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_atoi(const char *nptr)
{
	int (numbre), (positive);
	numbre = 0;
	positive = 1;
	while ((*nptr >= '\t' && *nptr <= '\r') || *nptr == ' ')
		nptr++;
	if (*nptr == '-' || *nptr == '+')
	{
		if (*nptr == '-')
			positive = -positive;
		nptr++;
	}
	while (*nptr >= '0' && *nptr <= '9')
	{
		numbre = (numbre * 10) + (*nptr - 48);
		nptr++;
	}
	return (numbre * positive);
}

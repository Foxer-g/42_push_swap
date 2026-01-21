/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing_utils.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toespino <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/19 00:23:13 by toespino          #+#    #+#             */
/*   Updated: 2026/01/21 14:44:43 by toespino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int64_t	ft_atol(char *str)
{
	int64_t	res;
	int32_t	i;
	int8_t	sign;

	i = 0;
	res = 0;
	sign = 1;
	while (str[i] == ' ' )
		i++;
	if (str[i] == '-')
	{
		sign = -1;
		i++;
	}
	else if (str[i] == '+')
		i++;
	while (ft_isdigit(str[i]))
	{
		res = res * 10 + str[i] - 48;
		i++;
	}
	if (str[i] && (str[i] == '+' || str[i] == '-'))
		return (2147483648);
	return (res * sign);
}

uint64_t	array_len(char **array)
{
	uint64_t	i;

	i = 0;
	while (array[i])
		i++;
	return (i);
}

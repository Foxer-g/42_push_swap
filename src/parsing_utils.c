/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing_utils.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toespino <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/19 00:23:13 by toespino          #+#    #+#             */
/*   Updated: 2026/01/24 11:52:05 by toespino         ###   ########.fr       */
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
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign = -1;
		i++;
	}
	if (!ft_isdigit(str[i]))
		return (2147483649);
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

bool	verify(int32_t *num_lst, int32_t len_lst)
{
	int32_t	i;
	int32_t	j;

	i = 0;
	while (i < len_lst)
	{
		j = i + 1;
		while (j < len_lst)
		{
			if (num_lst[i] == num_lst[j])
				return (false);
			j++;
		}
		i++;
	}
	return (true);
}

void	free_array(char **array)
{
	uint64_t	i;

	i = 0;
	while (array[i])
	{
		free(array[i]);
		i++;
	}
	free(array);
	return ;
}

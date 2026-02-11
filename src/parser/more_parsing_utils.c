/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   more_parsing_utils.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toespino <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/11 05:29:49 by toespino          #+#    #+#             */
/*   Updated: 2026/02/11 07:07:10 by toespino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

bool	ft_is_full_space(char **input)
{
	bool	res;
	int32_t	i;
	int32_t	j;

	i = 0;
	while (input[i])
	{
		res = true;
		j = 0;
		while (input[i][j])
		{
			if (input[i][j] != ' ')
				res = false;
			j++;
		}
		if (res)
			break ;
		i++;
	}
	return (res);
}

void	zero_truncator(char **input)
{
	char	*sign;
	char	*res;
	char	*truncated;
	int32_t	i;

	if (ft_strlen(*input) >= 11)
	{
		i = 0;
		sign = "+";
		if ((*input)[i] == '-')
		{
			sign = "-";
			i++;
		}
		if ((*input)[i] == '+')
			i++;
		while ((*input)[i] == '0')
			i++;
		truncated = ft_substr(*input, i, ft_strlen(*input));
		free(*input);
		res = ft_strjoin(sign, truncated);
		free(truncated);
		*input = res;
	}
}

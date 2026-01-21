/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toespino <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/08 22:00:05 by toespino          #+#    #+#             */
/*   Updated: 2026/01/21 14:37:00 by toespino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

bool	have_alpha(char **input)
{
	bool	res;
	int32_t	i;
	int32_t	j;

	i = 0;
	res = false;
	while (input[i])
	{
		j = 0;
		while (input[i][j])
		{
			if (ft_isalpha(input[i][j]))
				res |= true;
			j++;
		}
		i++;
	}
	return (res);
}

char	*join_util(char *res, char *input)
{
	char	*temp;
	char	*join;

	join = ft_strjoin((const char *)res, (const char *)input);
	temp = res;
	free(temp);
	res = join;
	return (res);
}

char	*joinning(char **input)
{
	int32_t	i;
	char	*res;

	i = 0;
	if (input[i])
	{
		if (!input[i + 1])
			return (input[i]);
	}
	else
		return (NULL);
	res = ft_strjoin((const char *)input[i], (const char *)" ");
	i++;
	while (input[i])
	{
		res = join_util(res, input[i]);
		res = join_util(res, " ");
		i++;
	}
	return (res);
}

int32_t	*type_convertor(char **splited)
{
	uint64_t	len_array;
	int32_t		*res;
	int64_t		temp;
	int32_t		i;

	len_array = array_len(splited);
	res = malloc(len_array * sizeof(int32_t));
	i = 0;
	while (splited[i])
	{
		if (ft_strlen(splited[i]) > 11)
		{
			free(res);
			return (0);
		}
		temp = ft_atol(splited[i]);
		if (temp > 2147483647 || temp < -2147483648)
		{
			free(res);
			return (0);
		}
		res[i] = temp;
		i++;
	}
	return (res);
}

int32_t	*parsing(char **input)
{
	char	*joined;
	char	**splited;
	int32_t	*converted;

	if (have_alpha(input))
		return (0);
	joined = joinning(input);
	if (!joined)
		return (0);
	splited = ft_split((const char *)joined, ' ');
	if (!splited)
		return (0);
	converted = type_convertor(splited);
	if (!converted)
		return (0);
	return (converted);
}

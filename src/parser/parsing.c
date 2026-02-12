/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toespino <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/08 22:00:05 by toespino          #+#    #+#             */
/*   Updated: 2026/02/12 12:19:12 by toespino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

bool	input_check(char **input)
{
	bool	res;
	int32_t	i;
	int32_t	j;

	i = 0;
	res = false;
	while (input[i])
	{
		j = 0;
		if (!input[i][j])
			res |= true;
		while (input[i][j])
		{
			if (ft_isalpha(input[i][j]))
				res |= true;
			j++;
		}
		i++;
	}
	res |= ft_is_full_space(input);
	return (res);
}

char	*join_util(char *res, char *input)
{
	char	*join;

	join = ft_strjoin(res, input);
	free(res);
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
			return (ft_strdup(input[i]));
	}
	else
		return (NULL);
	res = ft_strjoin(input[i], " ");
	i++;
	while (input[i])
	{
		res = join_util(res, input[i]);
		res = join_util(res, " ");
		i++;
	}
	return (res);
}

int32_t	*type_convertor(char **splited, uint64_t *len_stack)
{
	int32_t		*res;
	int64_t		temp;
	int32_t		i;

	*len_stack = array_len(splited);
	res = malloc((*len_stack + 1) * sizeof(int32_t));
	i = 0;
	while (splited[i])
	{
		zero_truncator(&splited[i]);
		if (ft_strlen(splited[i]) >= 20)
		{
			free(res);
			return (NULL);
		}
		temp = ft_atol(splited[i]);
		if (temp > INT32_MAX || temp < INT32_MIN)
		{
			free(res);
			return (NULL);
		}
		res[i] = temp;
		i++;
	}
	return (res);
}

int32_t	*parsing(char **input, uint64_t *len_stack)
{
	char	*joined;
	char	**splited;
	int32_t	*converted;

	if (input_check(input))
		return (NULL);
	joined = joinning(input);
	if (!joined)
		return (NULL);
	splited = ft_split(joined, ' ');
	free(joined);
	if (!splited)
		return (NULL);
	converted = type_convertor(splited, len_stack);
	free_array(splited);
	if (!converted)
		return (NULL);
	if (!verify(converted, *len_stack))
	{
		free(converted);
		return (NULL);
	}
	return (converted);
}

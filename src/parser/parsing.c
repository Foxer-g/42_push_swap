/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toespino <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/08 22:00:05 by toespino          #+#    #+#             */
/*   Updated: 2026/02/14 04:50:20 by toespino         ###   ########.fr       */
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
			if (!(ft_issignednum(input[i][j]) || ft_isspace(input[i][j])))
				res |= true;
			j++;
		}
		i++;
	}
	res |= ft_is_full_space(input);
	return (res);
}

char	*joinning(char **input)
{
	int32_t	i;
	char	*res;
	char	*join;

	i = 0;
	if (input[i])
	{
		if (!input[i + 1])
			return (ft_strdup(input[i]));
	}
	else
		return (NULL);
	res = ft_strjoin(input[i], " ");
	while (input[++i])
	{
		join = ft_strjoin(res, input[i]);
		free(res);
		res = ft_strjoin(join, " ");
		free(join);
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
		sign = "+0";
		if ((*input)[i] == '-' || (*input)[i] == '+')
		{
			if ((*input)[i] == '-')
				sign = "-0";
			i++;
		}
		while ((*input)[i] == '0')
			i++;
		truncated = ft_substr(*input, i, ft_strlen(*input));
		free(*input);
		res = ft_strjoin(sign, truncated);
		free(truncated);
		*input = res;
	}
}

int32_t	*type_convertor(char **splited, uint64_t *len_stack)
{
	int32_t		*res;
	int64_t		temp;
	int32_t		i;

	*len_stack = array_len(splited);
	res = malloc((*len_stack + 1) * sizeof(int32_t));
	i = -1;
	while (splited[++i])
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

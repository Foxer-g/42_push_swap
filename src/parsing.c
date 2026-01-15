/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toespino <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/08 22:00:05 by toespino          #+#    #+#             */
/*   Updated: 2026/01/15 23:12:19 by toespino         ###   ########.fr       */
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

char	*joinning(char **input)
{
	int32_t	i;
	char	*res;
	char	*temp;
	char	*join;

	i = 0;
	if (input[i])
	{
		if (!input[i + 1])
			return (input[i]);
	}
	else
		return (NULL);
	res = ft_strjoin((const char *)input[i], (const char *)input[i + 1]);
	i += 2;
	while (input[i])
	{
		join = ft_strjoin((const char *)res, (const char *)input[i]);
		temp = res;
		free(temp);
		res = join;
		i++;
	}
	return (res);
}

uint64_t	array_len(char **array)
{
	uint64_t	i;

	i = 0;
	while (array[i])
		i++;
	return (i);
}

int32_t	*type_convertor(char **splited)
{
	int32_t	len;
	int32_t	*res;
	int32_t	i;

	len = array_len(splited);
	res = malloc(len * sizeof(int32_t));
	i = 0;
	while (splited[i])
	{
		res[i] = ft_atoi(splited[i]);
		i++;
	}
	return (0);
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

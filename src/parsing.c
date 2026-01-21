/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toespino <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/08 22:00:05 by toespino          #+#    #+#             */
/*   Updated: 2026/01/21 19:59:13 by toespino         ###   ########.fr       */
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

	join = ft_strjoin(res, input);
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

int32_t	*type_convertor(char **splited, int32_t *len_lst)
{
	int32_t		*res;
	int64_t		temp;
	int32_t		i;

	*len_lst = array_len(splited);
	res = malloc(*len_lst * sizeof(int32_t));
	i = 0;
	while (splited[i])
	{
		if (ft_strlen(splited[i]) > 11)
		{
			free(res);
			return (0);
		}
		temp = ft_atol(splited[i]);
		if (temp > INT32_MAX || temp < INT32_MIN)
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
	int32_t	len_lst;

	if (have_alpha(input))
		return (0);
	joined = joinning(input);
	if (!joined)
		return (0);
	splited = ft_split(joined, ' ');
	if (!splited)
		return (0);
	len_lst = 0;
	converted = type_convertor(splited, &len_lst);
	if (!converted)
		return (0);
	if (!verify(converted, len_lst))
		return (0);
	return (converted);
}

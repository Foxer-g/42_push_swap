/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toespino <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/04 21:03:41 by toespino          #+#    #+#             */
/*   Updated: 2026/01/22 19:37:08 by toespino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int32_t	main(int32_t ac, char **av)
{
	int32_t		*parsed;
	uint64_t	i;
	uint64_t	len_lst;

	if (ac <= 1)
		return (0);
	av++;
	len_lst = 0;
	parsed = parsing(av, &len_lst);
	i = 0;
	if (!parsed)
	{
		write(2, "Error\n", 6);
		free(parsed);
		return (0);
	}
	while (i < len_lst)
	{
		printf("%d\n", parsed[i]);
		i++;
	}
	free(parsed);
	return (0);
}

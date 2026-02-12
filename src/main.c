/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toespino <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/04 21:03:41 by toespino          #+#    #+#             */
/*   Updated: 2026/02/12 12:55:30 by toespino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int32_t	main(int32_t ac, char **av)
{
	int32_t		*parsed;
	uint64_t	len_stack;

	if (ac <= 1)
		return (0);
	av++;
	len_stack = 0;
	parsed = parsing(av, &len_stack);
	if (!parsed)
	{
		write (2, "Error\n", 6);
		free(parsed);
		return (1);
	}
	if (len_stack == 1)
	{
		free(parsed);
		return (0);
	}
	sorting(parsed, len_stack);
	return (0);
}

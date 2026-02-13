/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toespino <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/04 21:03:41 by toespino          #+#    #+#             */
/*   Updated: 2026/02/13 05:45:03 by f0xer            ###   ########.fr       */
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
	sorting(parsed, len_stack);
	return (0);
}

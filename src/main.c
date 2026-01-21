/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toespino <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/04 21:03:41 by toespino          #+#    #+#             */
/*   Updated: 2026/01/21 14:45:38 by toespino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int32_t	main(int32_t ac, char **av)
{
	int32_t	*parsed;
	int32_t	i;

	if (ac <= 1)
		return (0);
	av++;
	parsed = parsing(av);
	i = 0;
	if (!parsed)
	{
		write(2, "Error\n", 6);
		return (0);
	}
	while (i < 5)
	{
		printf("%d\n", parsed[i]);
		i++;
	}
	free(parsed);
	return (0);
}

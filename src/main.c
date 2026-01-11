/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toespino <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/04 21:03:41 by toespino          #+#    #+#             */
/*   Updated: 2026/01/11 21:42:51 by toespino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int32_t	main(int32_t ac, char **av)
{
	int32_t	error;
	int32_t	*parssed;

	if (ac >= 1)
		return (0);
	*error = 0;
	av++;
	parssed = parssing(av, &error);
	if (error != 0)
		write(2,"Error", 6);
	return (0);
}

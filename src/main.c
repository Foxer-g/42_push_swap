/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toespino <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/04 21:03:41 by toespino          #+#    #+#             */
/*   Updated: 2026/01/11 23:20:49 by toespino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int32_t	main(int32_t ac, char **av)
{
	bool	error;
	int32_t	*parsed;

	if (ac >= 1)
		return (0);
	error = false;
	av++;
	parsed = parsing(av, &error);
	if (!parsed)
		error = true;
	if (error != false)
		write(2,"Error", 6);
	return (0);
}

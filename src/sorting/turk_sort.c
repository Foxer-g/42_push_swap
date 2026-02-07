/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   turk_sort.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toespino <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/05 03:58:05 by toespino          #+#    #+#             */
/*   Updated: 2026/02/07 08:23:32 by toespino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	turk_sort_init(t_i32stack **stack_a, t_i32stack **stack_b)
{
	while ((*stack_a)->stack_len > 3)
		pb(stack_b, stack_a);
	short_sort(stack_a);
	turk_sort(stack_a, stack_b);
	return ;
}

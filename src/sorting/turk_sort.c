/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   turk_sort.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toespino <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/05 03:58:05 by toespino          #+#    #+#             */
/*   Updated: 2026/02/08 06:45:41 by toespino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rotate_sort(t_i32stack **stack)
{
	t_i32stack	*min;
	int32_t		nb_action;
	char		part;

	min = min_finder(*stack);
	nb_action = get_cost(min, *stack);
	part = part_finder(*stack, min);
	if (part == 'b')
		while (nb_action-- >= 0)
			rra(stack);
	while (nb_action-- >= 0)
		ra(stack);
}

void	turk_sort_init(t_i32stack **stack_a, t_i32stack **stack_b)
{
	while ((*stack_a)->stack_len > 3)
		pb(stack_a, stack_b);
	short_sort(stack_a);
	turk_sort(stack_a, stack_b);
	rotate_sort(stack_a);
}

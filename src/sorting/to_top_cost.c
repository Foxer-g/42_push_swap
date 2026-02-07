/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   to_top_cost.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toespino <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/05 03:12:24 by toespino          #+#    #+#             */
/*   Updated: 2026/02/07 04:16:41 by toespino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int32_t	get_cost(t_i32stack *stack_a, t_i32stack *target)
{
	uint64_t	index;
	t_i32stack	*cursor;

	cursor = stack_a;
	index = 0;
	while (cursor && cursor != target)
	{
		cursor = cursor->previous;
		index++;
	}
	if (index > stack_a->stack_len / 2)
		return (stack_a->stack_len - index);
	return (index);
}

int32_t	get_total_cost(t_i32stack *stk_a, t_i32stack *stk_b, t_i32stack *node)
{
	t_i32stack	*target_node;
	int32_t		cost_a;
	int32_t		cost_b;

	target_node = target_finder(stk_a, node);
	cost_a = get_cost(stk_a, target_node);
	cost_b = get_cost(stk_b, node);
	return (cost_a + cost_b);
}

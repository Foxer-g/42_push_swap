/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   exe_operation.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toespino <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/07 04:12:21 by toespino          #+#    #+#             */
/*   Updated: 2026/02/07 08:25:21 by toespino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

char	part_finder(t_i32stack *stack, t_i32stack *node)
{
	uint64_t	index;
	t_i32stack	*cursor;
	char		res;

	res = 't';
	cursor = stack;
	index = 0;
	while (cursor && cursor != node)
	{
		cursor = cursor->previous;
		index++;
	}
	if (index > stack->stack_len / 2)
		res = 'b';
	return (res);
}

void	to_the_top(t_i32stack **stack_a, t_i32stack **stack_b, t_i32stack *node)
{
	t_i32stack	*target_node;
	int32_t		costs[2];
	char		parts[2];

	target_node = target_finder(*stack_a, node);
	parts[0] = part_finder(*stack_a, node);
	parts[1] = part_finder(*stack_b, target_node);
	costs[0] = get_cost(*stack_a, target_node);
	costs[1] = get_cost(*stack_b, node);
	if (parts[0] == parts[1])
	{
		while (costs[0]-- && costs[1]--)
		{
			if (parts[0] == 'b')
				rrr(stack_a, stack_b);
			else
				rr(stack_a, stack_b);
		}
	}
	while (costs[0]--)
		if (parts[0] == 'b')
			rra(stack_a);
	while (costs[1]--)
		if (parts[1] == 'b')
			rrb(stack_b);
}

void	turk_sort(t_i32stack **stack_a, t_i32stack **stack_b)
{
	t_i32stack	*temp;
	t_i32stack	*node;
	int32_t		min_value;
	int32_t		cost;

	while (*stack_b)
	{
		temp = *stack_b;
		min_value = INT32_MAX;
		while (temp)
		{
			cost = get_total_cost(*stack_a, *stack_b, temp);
			if (cost < min_value)
			{
				min_value = cost;
				node = temp;
			}
			temp = temp->previous;
		}
		to_the_top(stack_a, stack_b, node);
		pa(stack_a, stack_b);
		*stack_b = (*stack_b)->previous;
	}
}

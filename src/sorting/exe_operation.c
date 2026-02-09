/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   exe_operation.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toespino <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/07 04:12:21 by toespino          #+#    #+#             */
/*   Updated: 2026/02/09 05:17:05 by toespino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

char	part_finder(t_i32stack *stack, t_i32stack *node)
{
	uint64_t	index;
	t_i32stack	*cursor;

	cursor = stack;
	index = 0;
	while (cursor && cursor != node)
	{
		cursor = cursor->previous;
		++index;
	}
	if (index > stack->stack_len / 2)
		return ('b');
	return ('t');
}

void	solo_rotate(t_i32stack **stack, uint64_t cost, char part)
{
	if (cost > 0)
	{
		if (part == 't')
			while (cost--)
				ra(stack);
		else
			while (cost--)
				rra(stack);
	}
}

void	to_the_top(t_i32stack **stack_a, t_i32stack **stack_b, t_i32stack *node)
{
	t_i32stack	*target_node;
	uint64_t	cost[3];
	char		part[2];

	target_node = target_finder(*stack_a, node);
	cost[0] = get_cost(*stack_a, target_node);
	cost[1] = get_cost(*stack_b, node);
	part[0] = part_finder(*stack_a, target_node);
	part[1] = part_finder(*stack_b, node);
	while (cost[0])
	{
		if (part[0] == 't')
			ra(stack_a);
		else
			rra(stack_a);
		cost[0]--;
	}
	while (cost[1])
	{
		if (part[1] == 't')
			rb(stack_b);
		else
			rrb(stack_b);
		cost[1]--;
	}
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
		node = temp;
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
	}
}

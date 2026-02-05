/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   target_node.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toespino <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/05 02:38:51 by toespino          #+#    #+#             */
/*   Updated: 2026/02/05 05:23:13 by toespino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_i32stack	*min_finder(t_i32stack *a)
{
	int32_t		value;
	t_i32stack	*min;
	t_i32stack	*cursor;

	value = INT32_MAX;
	min = NULL;
	cursor = a;
	while (cursor)
	{
		if (cursor->content < value)
		{
			min = cursor;
			value = cursor->content;
		}
		cursor = cursor->previous;
	}
	return (min);
}

t_i32stack	*target_finder(t_i32stack *stack_a, t_i32stack *stack_b)
{
	int32_t		value;
	t_i32stack	*target;
	t_i32stack	*cursor;

	value = INT32_MAX;
	target = NULL;
	cursor = stack_a;
	while (cursor)
	{
		if (cursor->content > stack_b->content && cursor->content < value)
		{
			target = cursor;
			value = cursor->content;
		}
		cursor = cursor->previous;
	}
	if (!target)
		target = min_finder(stack_a);
	return (target);
}

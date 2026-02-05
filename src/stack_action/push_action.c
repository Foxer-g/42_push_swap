/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_action.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toespino <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/01 21:56:26 by toespino          #+#    #+#             */
/*   Updated: 2026/02/05 04:12:05 by toespino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stack_action.h"

void	push(t_i32stack **stack_i, t_i32stack **stack_o)
{
	int32_t	temp;

	if (!*stack_i)
		return ;
	temp = unstacking(stack_i);
	*stack_o = stacking(temp, *stack_o);
	return ;
}

void	pa(t_i32stack **stack_a, t_i32stack **stack_b)
{
	push(stack_b, stack_a);
	write (1, "pa\n", 3);
	return ;
}

void	pb(t_i32stack **stack_b, t_i32stack **stack_a)
{
	push(stack_a, stack_b);
	write(1, "pb\n", 3);
	return ;
}

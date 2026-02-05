/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_action.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: f0xer <f0xer@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/31 20:54:55 by f0xer             #+#    #+#             */
/*   Updated: 2026/02/05 04:19:42 by toespino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stack_action.h"

void	swap(t_i32stack **stack)
{
	int32_t	first;
	int32_t	second;

	first = unstacking(stack);
	second = unstacking(stack);
	*stack = stacking(first, *stack);
	*stack = stacking(second, *stack);
	return ;
}

void	sa(t_i32stack **stack)
{
	swap(stack);
	write (1, "sa\n", 3);
	return ;
}

void	sb(t_i32stack **stack)
{
	swap(stack);
	write (1, "sb\n", 3);
	return ;
}

void	ss(t_i32stack **stack_a, t_i32stack **stack_b)
{
	swap(stack_a);
	swap(stack_b);
	write (1, "ss\n", 3);
	return ;
}

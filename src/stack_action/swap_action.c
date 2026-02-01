/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_action.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: f0xer <f0xer@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/31 20:54:55 by f0xer             #+#    #+#             */
/*   Updated: 2026/02/01 02:40:50 by f0xer            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stack_action.h"

void	swap(t_i32stack **stack);
{
	int32_t	first;
	int32_t	second;

	first = unstacking(stack);
	second = unstacking(stack);
	*stack = stacking(first, *stack);
	*stack = stacking(second, *stack);
	return ;
}

char	*sa(t_i32stack **stack)
{
	swap(stack);
	return ("sa");
}

char	*sb(t_i32stack **stack)
{
	swap(stack);
	return ("sb");
}

char	*ss(t_i32stack **stack_a, t_i32stack **satck_b)
{
	swap(stack_a);
	swap(stack_b);
	return ("ss");
}

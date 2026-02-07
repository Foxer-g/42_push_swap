/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate_action.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toespino <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/01 22:23:46 by toespino          #+#    #+#             */
/*   Updated: 2026/02/07 02:27:20 by toespino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stack_action.h"

void	rotate(t_i32stack **stack)
{
	int32_t	move;
	int32_t	*temp;
	int32_t	i;

	i = 0;
	temp = ft_calloc(((*stack)->stack_len - 1), sizeof(int32_t));
	move = unstacking(stack);
	while (*stack)
	{
		temp[i] = unstacking(stack);
		i++;
	}
	*stack = stacking(move, *stack);
	while (i > 0)
	{
		i--;
		*stack = stacking(temp[i], *stack);
	}
	free(temp);
	return ;
}

void	ra(t_i32stack **stack)
{
	rotate(stack);
	write (1, "ra\n", 3);
	return ;
}

void	rb(t_i32stack	**stack)
{
	rotate(stack);
	write (1, "rb\n", 3);
	return ;
}

void	rr(t_i32stack **stack_a, t_i32stack **stack_b)
{
	rotate(stack_a);
	rotate(stack_b);
	write (1, "rr\n", 3);
	return ;
}

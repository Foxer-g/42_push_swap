/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate_action.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toespino <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/01 22:23:46 by toespino          #+#    #+#             */
/*   Updated: 2026/02/03 02:48:32 by toespino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stack_action.h"

void	reverse_rotate(t_i32stack **stack)
{
	int32_t	move;
	int32_t	*temp;
	int32_t	i;

	i = 0;
	temp = ft_calloc(((*stack)->stack_len - 1), sizeof(int32_t));
	while ((*stack)->previous)
	{
		temp[i] = unstacking(stack);
		i++;
	}
	move = unstacking(stack);
	while (i > 0)
	{
		stacking(temp[i], *stack);
		i--;
	}
	stacking(move, *stack);
	free(temp);
	return ;
}

char	*rra(t_i32stack **stack)
{
	reverse_rotate(stack);
	return ("rra");
}

char	*rrb(t_i32stack	**stack)
{
	reverse_rotate(stack);
	return ("rrb");
}

char	*rrr(t_i32stack **stack_a, t_i32stack **stack_b)
{
	reverse_rotate(stack_a);
	reverse_rotate(stack_b);
	return ("rrr");
}

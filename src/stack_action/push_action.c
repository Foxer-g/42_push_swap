/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_action.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toespino <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/01 21:56:26 by toespino          #+#    #+#             */
/*   Updated: 2026/02/01 22:18:30 by toespino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	push(t_i32stack **stack_i, t_i32stack **stack_o)
{
	int32_t	temp;

	if (!**stack_i)
		return ;
	temp = unstacking(stack_i);
	*stack_o = stacking(temp, *stack_o);
	return ;
}

char	*pa(t_i32stack **stack_a, t_i32stack **stack_b)
{
	push(stack_b, stack_a);
	return ("pa");
}

char	*pb(t_i32stack **stack_b, t_i32stack **stack_a)
{
	push(stack_a, stack_b);
	return ("pb");
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   turk_sort.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toespino <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/05 03:58:05 by toespino          #+#    #+#             */
/*   Updated: 2026/02/11 07:27:28 by toespino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rotate_sort(t_i32stack **stack)
{
	t_i32stack	*min;
	int32_t		nb_action;
	char		part;

	min = min_finder(*stack);
	nb_action = get_cost(min, *stack);
	part = part_finder(*stack, min);
	if (part == 'b')
		while (nb_action-- > 0)
			rra(stack);
	while (nb_action-- > 0)
		ra(stack);
}

bool	ft_issorted(t_i32stack **stack)
{
	bool	res;

	if ((*stack)->previous)
	{
		if ((*stack)->content < (*stack)->previous->content)
			res = ft_issorted(&((*stack)->previous));
		else
			res = false;
	}
	else
		res = true;
	return (res);
}

void	turk_sort_init(t_i32stack **stack_a, t_i32stack **stack_b)
{
	if (ft_issorted(stack_a))
		return ;
	while ((*stack_a)->stack_len > 3)
		pb(stack_a, stack_b);
	short_sort(stack_a);
	turk_sort(stack_a, stack_b);
	if (ft_issorted(stack_a))
		return ;
	rotate_sort(stack_a);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   short_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toespino <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/05 01:24:08 by toespino          #+#    #+#             */
/*   Updated: 2026/02/09 02:25:55 by toespino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_two(t_i32stack **stack)
{
	t_i32stack	*temp;

	temp = (*stack)->previous;
	if ((*stack)->content > temp->content)
		sa(stack);
}

void	sort_three(t_i32stack **stack)
{
	t_i32stack	*a;
	t_i32stack	*b;
	t_i32stack	*c;

	a = *stack;
	b = a->previous;
	c = b->previous;
	if (a->content > b->content && a->content > c->content)
		ra(stack);
	else if (b->content > a->content && b->content > c->content)
		rra(stack);
	if ((*stack)->content > (*stack)->previous->content)
		sa(stack);
}

void	short_sort(t_i32stack **stack)
{
	uint64_t	len;

	len = (*stack)->stack_len;
	if (len == 1)
		return ;
	else if (len == 2)
		sort_two(stack);
	else
		sort_three(stack);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   short_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toespino <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/05 01:24:08 by toespino          #+#    #+#             */
/*   Updated: 2026/02/05 05:21:06 by toespino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_two(t_i32stack **stack)
{
	t_i32stack	*temp;

	temp = (*stack)->previous;
	if (*stack > temp)
	{
		sa(stack);
	}
	return ;
}

void	sort_three(t_i32stack **stack)
{
	int8_t		i_biggest;
	int8_t		i;
	int32_t		value;
	t_i32stack	*temp;

	i_biggest = 0;
	temp = *stack;
	i = 0;
	value = INT32_MIN;
	while (temp)
	{
		if (temp->content > value)
		{
			i_biggest = i;
			value = temp->content;
		}
		temp = temp->previous;
		i++;
	}
	if (i_biggest == 0)
		ra(stack);
	else if (i_biggest == 1)
		rra(stack);
	sort_two(stack);
	return ;
}

void	short_sort(t_i32stack **stack)
{
	uint64_t	len;

	len = 0;
	if (len == 1)
		return ;
	else if (len == 2)
		sort_two(stack);
	else
		sort_three(stack);
	return ;
}

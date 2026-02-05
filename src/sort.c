/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toespino <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/05 04:28:51 by toespino          #+#    #+#             */
/*   Updated: 2026/02/05 05:43:17 by toespino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sorting(int32_t *parsed, uint64_t len_stack)
{
	t_i32stack	*stack_a;
	t_i32stack	*stack_b;
	uint64_t		i;

	stack_a = NULL;
	stack_b = NULL;
	i = 0;
	while (i < len_stack)
	{
		stack_a = stacking(parsed[i], stack_a);
		i++;
	}
	turk_sort(&stack_a, &stack_b);
	while (stack_a->previous)
		unstacking(&stack_a);
	while (stack_b->previous)
		unstacking(&stack_b);
	return ;
}

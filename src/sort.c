/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toespino <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/05 04:28:51 by toespino          #+#    #+#             */
/*   Updated: 2026/02/07 03:14:05 by toespino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sorting(int32_t *parsed, uint64_t len_stack)
{
	t_i32stack	*stack_a;
	t_i32stack	*stack_b;

	stack_a = NULL;
	stack_b = NULL;
	while (len_stack)
	{
		stack_a = stacking(parsed[len_stack-1], stack_a);
		len_stack--;
	}
	turk_sort(&stack_a, &stack_b);
	while (stack_a)
		unstacking(&stack_a);
	while (stack_b)
		unstacking(&stack_b);
	free(parsed);
	return ;
}

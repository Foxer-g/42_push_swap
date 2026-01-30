/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_io.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toespino <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/28 23:33:18 by toespino          #+#    #+#             */
/*   Updated: 2026/01/30 23:56:37 by toespino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stack_action.h"

void	updating_len(int32_t value, t_i32stack **top)
{
	t_i32stack	**temp;

	temp = NULL;
	*top->stack_len += value;
	if (*top->previous)
	{
		temp = &(*top->previous);
		updating_len(value, temp);
	}
	return ;
}

t_i32stack	*stack_newemt(int32_t content)
{
	t_i32stack	*emt;

	emt = ft_calloc(1, sizeof(t_i32stack));
	if (!emt)
		return (NULL);
	emt->content = content;
	emt->stack_len = 1;
	return (emt);
}

t_i32stack	*stacking(int32_t input, t_i32stack *top)
{
	t_i32stack	*new_emt;

	new_emt = stack_emt(input);
	new_emt->previous = top;
	new_emt->stack_len = top->stack_len;
	updating_len(1, &new_emt);
	return (new_emt);
}

int32_t	unstacking(t_i32stack **top)
{
	t_i32stack	*temp;
	int32_t		res;

	res = *top->content;
	temp = *top->previous;
	free(*top);
	*top = temp;
	updating_len(-1, top);
}

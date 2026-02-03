/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_action.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toespino <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/28 22:37:13 by toespino          #+#    #+#             */
/*   Updated: 2026/02/03 02:35:31 by toespino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STACK_ACTION_H
# define STACK_ACTION_H
# include "c_libs.h"

typedef struct s_i32stack
{
	int32_t				content;
	struct s_i32stack	*previous;
	uint64_t			stack_len;
}	t_i32stack;

t_i32stack	*stacking(int32_t input, t_i32stack *top);
int32_t		unstacking(t_i32stack **top);

char		*sa(t_i32stack **stack);
char		*sb(t_i32stack **stack);
char		*ss(t_i32stack **stack_a, t_i32stack **stack_b);

char		*pa(t_i32stack **stack_i, t_i32stack **stack_o);
char		*pb(t_i32stack **stack_i, t_i32stack **stack_o);

char		*ra(t_i32stack **stack);
char		*rb(t_i32stack **stack);
char		*rr(t_i32stack **stack_a, t_i32stack **stack_b);

char		*rra(t_i32stack **stack);
char		*rrb(t_i32stack **stack);
char		*rrr(t_i32stack **stack_a, t_i32stack **stack_b);

#endif

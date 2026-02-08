/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_action.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toespino <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/28 22:37:13 by toespino          #+#    #+#             */
/*   Updated: 2026/02/08 02:35:08 by toespino         ###   ########.fr       */
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

void		sa(t_i32stack **stack);
void		sb(t_i32stack **stack);
void		ss(t_i32stack **stack_a, t_i32stack **stack_b);

void		pa(t_i32stack **stack_a, t_i32stack **stack_b);
void		pb(t_i32stack **stack_a, t_i32stack **stack_b);

void		ra(t_i32stack **stack);
void		rb(t_i32stack **stack);
void		rr(t_i32stack **stack_a, t_i32stack **stack_b);

void		rra(t_i32stack **stack);
void		rrb(t_i32stack **stack);
void		rrr(t_i32stack **stack_a, t_i32stack **stack_b);

#endif

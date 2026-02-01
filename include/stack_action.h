/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_action.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toespino <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/28 22:37:13 by toespino          #+#    #+#             */
/*   Updated: 2026/02/01 02:42:50 by f0xer            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	STACK_ACTION_H
# define STACK_ACTION_H

typedef	struct	s_i32stack
{
	int32_t			content;
	struct stack	*previous;
	uint64_t		stack_len;
}	t_i32stack;

char	*sa(t_i32stack **stack);
char	*sb(t_i32stack **stack);
char	*ss(t_i32stack **stack_a, t_i32stack **stack_b);
#endif

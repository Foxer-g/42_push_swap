/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toespino <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/11 21:40:28 by toespino          #+#    #+#             */
/*   Updated: 2026/02/07 08:17:39 by toespino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdint.h>
# include <stdbool.h>
# include "libft.h"
# include "stack_action.h"

int32_t		*parsing(char **input, uint64_t *len_lst);
uint64_t	array_len(char **array);
int64_t		ft_atol(char *str);
bool		verify(int32_t *num_lst, int32_t len_lst);
void		free_array(char **array);
bool		return_error(int32_t **parsed);

void		sorting(int32_t	*parsed, uint64_t len_stack);
void		short_sort(t_i32stack **stack);
void		turk_sort_init(t_i32stack **stack_a, t_i32stack **stack_b);
t_i32stack	*target_finder(t_i32stack *stack_a, t_i32stack *stack_b);
void		turk_sort(t_i32stack **stack_a, t_i32stack **stack_b);
int32_t		get_cost(t_i32stack *stack_a, t_i32stack *target);
int32_t		get_total_cost(t_i32stack *stk_a, t_i32stack *stk_b,
	t_i32stack *node);

#endif

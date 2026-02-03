/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toespino <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/11 21:40:28 by toespino          #+#    #+#             */
/*   Updated: 2026/02/03 02:02:57 by toespino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdint.h>
# include <stdbool.h>
# include "libft.h"

int32_t		*parsing(char **input, uint64_t *len_lst);
uint64_t	array_len(char **array);
int64_t		ft_atol(char *str);
bool		verify(int32_t *num_lst, int32_t len_lst);
void		free_array(char **array);

#endif

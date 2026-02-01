/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate_action.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toespino <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/01 22:23:46 by toespino          #+#    #+#             */
/*   Updated: 2026/02/01 23:53:08 by toespino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	rotate(t_i32stack **stack)
{
	int32_t	move;
	int32_t	*temp;

	temp = ft_calloc((*stack->stack_len - 1), sizeof(int32_t));
	move = unstacking(stack);
	while (*stack)
	{
		temp[i] = unstacking(stack);
		i++;
	}
	stacking(move, *stack);
	while (i > 0)
	{
		stacking(temp[i], *stack);
		i--;
	}
	free(temp);
	return ;
}

char	*ra(t_i32stack **stack)
{
	rotate(stack);
	return ("ra");
}

char	*rb(t_i32stack	**stack)
{
	rotate(stack);
	return ("rb")
}

char	*rr(t_i32stack **stack_a, t_i32stack **stack_b)
{
	rotate(stack_a);
	rotate(stack_b);
	return ("rr");
}

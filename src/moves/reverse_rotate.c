/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhouyet <jhouyet@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/22 13:34:07 by jhouyet           #+#    #+#             */
/*   Updated: 2023/12/22 16:52:16 by jhouyet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	reverse_rotate(t_stack *stack)
{
	int	temp;
	int	i;

	if (stack->size < 2)
		return ;
	temp = stack->nb[stack->size - 1];
	i = stack->size;
	while (i > 0)
	{
		stack->nb[i] = stack->nb[i - 1];
		i--;
	}
	stack->nb[0] = temp;
}

void	ft_rra(t_stacks *stacks)
{
	reverse_rotate(&stacks->a);
	ft_printf("rra\n");
}

void	ft_rrb(t_stacks *stacks)
{
	reverse_rotate(&stacks->b);
	ft_printf("rrb\n");
}

void	ft_rrr(t_stacks *stacks)
{
	ft_rra(stacks);
	ft_rrb(stacks);
	ft_printf("rrr\n");
}
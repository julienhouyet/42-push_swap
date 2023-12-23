/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhouyet <jhouyet@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/22 13:33:54 by jhouyet           #+#    #+#             */
/*   Updated: 2023/12/22 16:51:11 by jhouyet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	rotate(t_stack *stack)
{
	int	temp;
	int	i;

	if (stack->size < 2)
		return ;
	temp = stack->nb[0];
	i = 0;
	while (i < stack->size)
	{
		stack->nb[i] = stack->nb[i + 1];
		i++;
	}
	stack->nb[stack->size - 1] = temp;
}

void	ft_ra(t_stacks *stacks)
{
	rotate(&stacks->a);
	ft_printf("ra\n");
}

void	ft_rb(t_stacks *stacks)
{
	rotate(&stacks->b);
	ft_printf("rb\n");
}

void	ft_rr(t_stacks *stacks)
{
	ft_ra(stacks);
	ft_rb(stacks);
	ft_printf("rr\n");
}
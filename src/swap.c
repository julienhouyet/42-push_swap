/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhouyet <jhouyet@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/22 13:10:02 by jhouyet           #+#    #+#             */
/*   Updated: 2023/12/22 13:24:37 by jhouyet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	swap(t_stack *stack)
{
	int	temp;

	if (stack->size < 2)
		return (0);
	temp = stack->numbers[0];
	stack->numbers[0] = stack->numbers[1];
	stack->numbers[1] = temp;
}

void	ft_sa(t_stacks *stacks)
{
	swap(&stacks->a);
	ft_printf("sa\n");
}

void	ft_sb(t_stacks *stacks)
{
	swap(&stacks->a);
	ft_printf("sb\n");
}

void	ft_ss(t_stacks *stacks)
{
	swap(&stacks->a);
	swap(&stacks->b);
	ft_printf("ss\n");
}

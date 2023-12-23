/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhouyet <jhouyet@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/22 13:33:48 by jhouyet           #+#    #+#             */
/*   Updated: 2023/12/23 05:39:00 by jhouyet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	push(t_stack *src, t_stack *dest)
{
	int	i;
	int	j;
	int	temp;

	if (src->size == 0)
		return ;
	i = dest->size;
	j = 0;
	temp = src->nb[0];
	while (i > 0)
	{
		dest->nb[i] = dest->nb[i - 1];
		i--;
	}
	while (j < src->size)
	{
		src->nb[j] = src->nb[j + 1];
		j++;
	}
	dest->nb[0] = temp;
	src->size--;
	dest->size++;
}

void	ft_pa(t_stacks *stacks)
{
	push(&stacks->b, &stacks->a);
	ft_printf("pa\n");
}

void	ft_pb(t_stacks *stacks)
{
	push(&stacks->a, &stacks->b);
	ft_printf("pb\n");
}

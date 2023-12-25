/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhouyet <jhouyet@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/22 13:33:48 by jhouyet           #+#    #+#             */
/*   Updated: 2023/12/25 10:59:53 by jhouyet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	push(t_stack *src, t_stack *dest)
{
	int	i;
	int	j;
	int	temp_nb;
	int	temp_index;

	if (src->size == 0)
		return ;
	i = dest->size + 1;
	j = -1;
	temp_nb = src->nb[0];
	temp_index = src->index[0];
	while (--i > 0)
	{
		dest->nb[i] = dest->nb[i - 1];
		dest->index[i] = dest->index[i - 1];
	}
	while (++j < src->size)
	{
		src->nb[j] = src->nb[j + 1];
		src->index[j] = src->index[j + 1];
	}
	dest->nb[0] = temp_nb;
	dest->index[0] = temp_index;
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

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   moves.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhouyet <jhouyet@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/23 07:11:38 by jhouyet           #+#    #+#             */
/*   Updated: 2023/12/23 12:15:05 by jhouyet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int	ft_index_min(int *numbers, int size)
{
	int	index_min;
	int	value_min;
	int	i;

	index_min = 0;
	value_min = numbers[0];
	i = 0;
	while (i < size)
	{
		if (numbers[i] < value_min)
		{
			value_min = numbers[i];
			index_min = i;
		}
		i++;
	}
	return (index_min);
}

int	ft_bits_max(int *numbers, int size)
{
	int	number_max;
	int	bits_max;
	int	i;

	number_max = 0;
	bits_max = 0;
	i = 0;
	while (i < size)
	{
		if (numbers[i] > number_max)
			number_max = numbers[i];
		i++;
	}
	while ((number_max >> bits_max) != 0)
		bits_max++;
	return (bits_max);
}

int	ft_move_min_to_b(t_stacks *stacks)
{
	int	index_min;

	index_min = ft_index_min(stacks->a.nb, stacks->a.size);
	while (index_min != 0)
	{
		if (index_min <= stacks->a.size / 2)
			ft_ra(stacks);
		else
			ft_rra(stacks);
		index_min = ft_index_min(stacks->a.nb, stacks->a.size);
	}
	ft_pb(stacks);
}

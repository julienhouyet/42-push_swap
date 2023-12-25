/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   moves.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhouyet <jhouyet@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/23 07:11:38 by jhouyet           #+#    #+#             */
/*   Updated: 2023/12/25 13:04:04 by jhouyet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	ft_update_index(t_stacks *stacks)
{
	int		i;
	int		j;
	int		k;
	int		*index_a;

	index_a = malloc(stacks->a.size * sizeof * index_a);
	if (index_a == NULL)
		ft_free_error("Error\n", stacks);
	i = -1;
	while (++i < stacks->a.size)
	{
		k = 0;
		j = -1;
		while (++j < stacks->a.size)
			if (stacks->a.index[i] > stacks->a.index[j])
				k++;
		index_a[i] = k;
	}
	i = stacks->a.size;
	while (i--)
		stacks->a.index[i] = index_a[i];
	free(index_a);
}

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

void	ft_move_min_to_b(t_stacks *stacks)
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

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorts.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhouyet <jhouyet@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/22 16:08:26 by jhouyet           #+#    #+#             */
/*   Updated: 2023/12/25 13:04:18 by jhouyet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	ft_sort_three(t_stacks *stacks)
{
	int	*nb;

	nb = stacks->a.nb;
	if (nb[0] > nb[1] && nb[1] < nb[2] && nb[0] < nb[2])
		ft_sa(stacks);
	else if (nb[0] > nb[1] && nb[1] < nb[2] && nb[0] > nb[2])
		ft_ra(stacks);
	else if (nb[0] < nb[1] && nb[1] > nb[2] && nb[0] > nb[2])
		ft_rra(stacks);
	else if (nb[0] > nb[1] && nb[1] > nb[2])
	{
		ft_sa(stacks);
		ft_rra(stacks);
	}
	else if (nb[0] < nb[1] && nb[1] > nb[2] && nb[0] < nb[2])
	{
		ft_sa(stacks);
		ft_ra(stacks);
	}
}

void	ft_sort_four(t_stacks *stacks)
{
	ft_move_min_to_b(stacks);
	ft_sort_three(stacks);
	ft_pa(stacks);
}

void	ft_sort_five(t_stacks *stacks)
{
	ft_move_min_to_b(stacks);
	ft_move_min_to_b(stacks);
	ft_sort_three(stacks);
	ft_pa(stacks);
	ft_pa(stacks);
}

static void	sort_radix_b(t_stacks *stacks, int b_size, int bit_max, int j)
{
	while (b_size-- && j <= bit_max && !ft_is_sorted(stacks))
	{
		if (((stacks->b.index[0] >> j) & 1) == 0)
			ft_rb(stacks);
		else
			ft_pa(stacks);
	}
	if (ft_is_sorted(stacks))
		while (stacks->b.size != 0)
			ft_pa(stacks);
}

void	ft_sort_radix(t_stacks *stacks)
{
	int	j;
	int	bit_max;
	int	size;

	ft_update_index(stacks);
	bit_max = 0;
	size = stacks->a.size;
	while (size > 1 && ++bit_max)
		size /= 2;
	j = -1;
	while (++j <= bit_max)
	{
		size = stacks->a.size;
		while (size-- && !ft_is_sorted(stacks))
		{
			if (((stacks->a.index[0] >> j) & 1) == 0)
				ft_pb(stacks);
			else
				ft_ra(stacks);
		}
		sort_radix_b(stacks, stacks->b.size, bit_max, j + 1);
	}
	while (stacks->b.size != 0)
		ft_pa(stacks);
}

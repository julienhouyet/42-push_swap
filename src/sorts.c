/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorts.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhouyet <jhouyet@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/22 16:08:26 by jhouyet           #+#    #+#             */
/*   Updated: 2023/12/24 14:35:34 by jhouyet          ###   ########.fr       */
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

void	ft_sort_radix(t_stacks *stacks)
{
	ft_printf("Radix Sort");
}

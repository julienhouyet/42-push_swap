/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorts.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhouyet <jhouyet@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/22 16:08:26 by jhouyet           #+#    #+#             */
/*   Updated: 2023/12/22 18:53:40 by jhouyet          ###   ########.fr       */
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
	ft_printf("Four sort\n");
}

void	ft_sort_five(t_stacks *stacks)
{
	ft_printf("Five sort\n");
}

void	ft_sort_radix(t_stacks *stacks)
{
	ft_printf("Radix sort\n");
}

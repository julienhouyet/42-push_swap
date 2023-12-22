/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   exit.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhouyet <jhouyet@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/22 10:03:46 by jhouyet           #+#    #+#             */
/*   Updated: 2023/12/22 15:59:32 by jhouyet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	ft_error(char *message)
{
	ft_printf(message);
	exit(1);
}

void	ft_free_error(char *message, t_stacks *stacks)
{
	if (stacks)
	{
		if (stacks->a.numbers)
			free(stacks->a.numbers);
		if (stacks->b.numbers)
			free(stacks->b.numbers);
		free(stacks);
		stacks = NULL;
	}
	ft_error(message);
}

void	ft_free_exit(t_stacks *stacks)
{
	if (stacks)
	{
		if (stacks->a.numbers)
			free(stacks->a.numbers);
		if (stacks->b.numbers)
			free(stacks->b.numbers);
		free(stacks);
		stacks = NULL;
	}
}

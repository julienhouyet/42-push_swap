/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   exit.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhouyet <jhouyet@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/22 10:03:46 by jhouyet           #+#    #+#             */
/*   Updated: 2023/12/22 18:19:44 by jhouyet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	ft_error(char *message)
{
	ft_printf(message);
	system("leaks push_swap");
	exit(1);
}

void	ft_free_error(char *message, t_stacks *stacks)
{
	if (stacks)
	{
		if (stacks->a.nb)
			free(stacks->a.nb);
		if (stacks->b.nb)
			free(stacks->b.nb);
		free(stacks);
		stacks = NULL;
	}
	ft_error(message);
}

void	ft_free_exit(t_stacks *stacks)
{
	if (stacks)
	{
		if (stacks->a.nb)
			free(stacks->a.nb);
		if (stacks->b.nb)
			free(stacks->b.nb);
		free(stacks);
		stacks = NULL;
	}
}

void	ft_free_split(char **split_args, int count_args)
{
	while (count_args >= 0)
	{
		free(split_args[count_args]);
		count_args--;
	}
	free(split_args);
	split_args = NULL;
}

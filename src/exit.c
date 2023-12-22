/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   exit.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhouyet <jhouyet@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/22 10:03:46 by jhouyet           #+#    #+#             */
/*   Updated: 2023/12/22 12:53:35 by jhouyet          ###   ########.fr       */
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
    if (stacks) {
        if (stacks->a.numbers)
            free(stacks->a.numbers);
        if (stacks->b.numbers)
            free(stacks->b.numbers);
        free(stacks);
		stacks = NULL;
    }
	ft_error(message);
}

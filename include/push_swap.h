/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhouyet <jhouyet@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 11:42:11 by jhouyet           #+#    #+#             */
/*   Updated: 2023/12/22 10:09:45 by jhouyet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include "libft/include/libft.h"
# include <stdlib.h>

typedef struct s_stack
{
	int	*numbers;
	int	size;
}				t_stack;

typedef struct s_stacks
{
	t_stack	a;
	t_stack	b;
}				t_stacks;

void	ft_error(char *message);

#endif
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhouyet <jhouyet@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 11:42:13 by jhouyet           #+#    #+#             */
/*   Updated: 2023/12/22 11:50:13 by jhouyet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	check_argv(int argc, char **argv)
{
	int	i;
	long temp;

	if (argc < 2)
		exit(1);
	i = 0;
	while (++i < argc)
	{
		if (!ft_is_number(argv[i]))
			ft_error("Error\n");
		temp = ft_atol(argv[i]);
		if (temp < INT_MIN || temp > INT_MAX)
			ft_error("Error\n");
	}
	ft_printf("OK");
}

int	main(int argc, char **argv)
{
	t_stacks *stacks;

	check_argv(argc, argv);
	stacks = ft_calloc(1, sizeof(t_stacks));
	if (!stacks)
		ft_error("Error\nMalloc t_stacks\n\n");
	ft_printf("Push Swap\n\n");
	system("leaks push_swap");
}

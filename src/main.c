/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhouyet <jhouyet@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 11:42:13 by jhouyet           #+#    #+#             */
/*   Updated: 2023/12/22 11:10:47 by jhouyet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int		is_number(char *str)
{
	int i;

	i = 0;
	if (str[i] == '-' || str[i] == '+')
		i++;
	if (!str[i])
		return 0;
	while (str[i])
	{
		if (!ft_isdigit(str[i]))
			return 0;
		i++;
	}
	return 1;
}

void	check_argv(int argc, char **argv)
{
	int	i;

	if (argc < 2)
		exit(1);
	while (i < argc)
	{
		if (!is_number(argv[i]))
			ft_error("Error\n");
		i++;
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

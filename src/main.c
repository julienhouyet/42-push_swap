/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhouyet <jhouyet@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 11:42:13 by jhouyet           #+#    #+#             */
/*   Updated: 2023/12/22 14:28:27 by jhouyet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	check_argv(int argc, char **argv, t_stacks *stacks)
{
	int		i;
	long	temp;

	if (argc < 2)
		exit(1);
	i = 0;
	stacks->a.size = 0;
	stacks->b.size = 0;
	stacks->a.numbers = ft_calloc((argc - 1), sizeof(int));
	stacks->b.numbers = ft_calloc((argc - 1), sizeof(int));
	if (!stacks->a.numbers)
		ft_free_error("Error\nMalloc stacks->a.numbers\n\n", stacks);
	while (++i < argc)
	{
		if (!ft_is_number(argv[i]))
			ft_free_error("Error\n", stacks);
		temp = ft_atol(argv[i]);
		if (temp < INT_MIN || temp > INT_MAX)
			ft_free_error("Error\n", stacks);
		if (ft_is_duplicate(temp, stacks->a))
			ft_free_error("Error\n", stacks);
		stacks->a.numbers[stacks->a.size] = (int)temp;
		stacks->a.size++;
	}
}

int	main(int argc, char **argv)
{
	t_stacks	*stacks;

	stacks = ft_calloc(1, sizeof(t_stacks));
	check_argv(argc, argv, stacks);
	if (!stacks)
		ft_free_error("Error\nMalloc t_stacks\n\n", stacks);
	/*
    int i;
    i = 0;
    while (i < stacks->a.size)
    {
        ft_printf("a : %d\n", stacks->a.numbers[i]);
        i++;
    }   
    i = 0;
    while (i < stacks->b.size)
    {
        ft_printf("b : %d\n", stacks->b.numbers[i]);
        i++;
    }
    ft_pb(stacks);
    ft_pb(stacks);
    ft_pa(stacks);
    i = 0;
    while (i < stacks->a.size)
    {
        ft_printf("a : %d\n", stacks->a.numbers[i]);
        i++;
    }
    i = 0;
    while (i < stacks->b.size)
    {
        ft_printf("b : %d\n", stacks->b.numbers[i]);
        i++;
    }
	ft_printf("\n\n");
	ft_printf("Size a :%d\n", stacks->a.size);
	ft_printf("Size b :%d\n", stacks->b.size);
	*/
}

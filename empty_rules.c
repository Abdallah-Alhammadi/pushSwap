/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   empty_rules.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abalhamm <abalhamm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/20 15:37:49 by abalhamm          #+#    #+#             */
/*   Updated: 2023/06/20 15:39:28 by abalhamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	if_free_args(t_data *data, char **args)
{
	int	i;

	i = 0;
	free (data->indexarray);
	free (data->a);
	free (data->b);
	while (args[i])
	{
		free (args[i]);
		i++;
	}
	free(args);
	write(2, "Error\n", 6);
	exit (0);
}

void	if_free(t_data *data)
{
	free(data->a);
	data->a = NULL;
	free(data->b);
	data->b = NULL;
	free(data->indexarray);
	data->indexarray = NULL;
}

void	error(t_data *data)
{
	free (data->indexarray);
	free (data->a);
	free (data->b);
	write(2, "Error\n", 6);
	exit (0);
}

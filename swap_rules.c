/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_rules.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abalhamm <abalhamm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/20 14:43:53 by abalhamm          #+#    #+#             */
/*   Updated: 2023/06/20 16:33:10 by abalhamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sa(t_data *data)//Swap the first 2 elements at the top of stack a
{
	int	temp;
   
	if (data->topa > 0)
	{
		temp = data->a[data->topa];
		data->a[data->topa] = data->a[data->topa - 1];
		data->a[data->topa - 1] = temp;
	}
	write(1, "sa\n", 3);
}

void	sb(t_data *data)//Swap the first 2 elements at the top of stack b
{
	int	temp;

	if (data->topb > 0)
	{
		temp = data->b[data->topb];
		data->b[data->topb] = data->b[data->topb - 1];
		data->b[data->topb - 1] = temp;
	}
	write(1, "sb\n", 3);
}

void	ss(t_data *data)//sa and sb at the same time
{
	sa(data);
	sb(data);
	write(1, "ss\n", 3);
}
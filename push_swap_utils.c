/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abalhamm <abalhamm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/20 16:53:24 by abalhamm          #+#    #+#             */
/*   Updated: 2023/06/20 16:53:40 by abalhamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_sign(char c, int *sign, int *i)
{
	if (c == '-' || c == '+')
	{
		if (c == '-')
		{
			*sign = -1;
			*i += 1;
		}
		else
			*i += 1;
	}
}

int	ft_atoi(t_data *data, char *str, char **args)
{
	int		i;
	long	res;
	int		sign;

	sign = 1;
	res = 0;
	i = 0;
	ft_sign(str[i], &sign, &i);
	if (!ft_isdigit(str[i]))
		free_args(data, args);
	while (ft_isdigit(str[i]))
	{
		res = (res * 10) + str[i] - '0';
		i++;
		if (((res > 2147483647) && (sign == 1)) \
		|| ((res > 2147483648) && (sign == -1)))
			free_args(data, args);
	}
	if ((!ft_isdigit(str[i]) && str[i]) || i > 12)
		free_args(data, args);
	return (res * sign);
}

int	ft_lowesta(t_data *data)
{
	int	i;
	int	lowest;
	int	lowestindex;

	i = 0;
	lowestindex = i;
	lowest = data->a[i];
	while (i <= data->topa)
	{
		if (data->a[i] < lowest)
		{
			lowest = data->a[i];
			lowestindex = i;
		}
		i++;
	}
	return (lowestindex);
}

int	get_values(t_data *data)
{
	data->bestindex = ft_ft_checkbestindex(data);
	data->bestvalue = data->b[data->bestindex];
	data->correctadd = ft_find_correct_index_on_a(data, data->bestindex);
	data->correctvalue = data->a[data->correctadd];
	return (0);
}

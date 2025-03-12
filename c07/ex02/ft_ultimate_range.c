/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Lin Liu <linliu@student.hive.fi>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/02 16:28:04 by Lin Liu           #+#    #+#             */
/*   Updated: 2025/03/08 09:44:24 by Lin Liu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	*arr;
	int	i;

	i = 0;
	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	arr = malloc(sizeof(int) * (max - min));
	if (arr != NULL)
	{
		while (min < max)
		{
			arr[i] = min;
			min++;
			i++;
		}
		*range = arr;
		return (i);
	}
	else
		return (-1);
}

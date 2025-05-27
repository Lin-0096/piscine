/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Lin Liu <linliu@student.hive.fi>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/02 14:47:42 by Lin Liu           #+#    #+#             */
/*   Updated: 2025/03/08 09:40:34 by Lin Liu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*arr;
	int	i;
	int	len;

	i = 0;
	if (min > max)
	{
		return (NULL);
	}
	len = max - min + 1;
	arr = malloc(sizeof(int) * len);
	if (arr == NULL)
		return (NULL);
	while (i < len)
	{
		arr[i] = min + i;
		i++;
	}
	return (arr);
}

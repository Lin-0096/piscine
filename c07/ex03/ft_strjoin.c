/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Lin Liu <linliu@student.hive.fi>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/03 12:29:16 by Lin Liu           #+#    #+#             */
/*   Updated: 2025/03/08 09:49:30 by Lin Liu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

int	sum_len(int size, char **strs, char *sep)
{
	int	sum;
	int	i;

	i = 0;
	sum = 0;
	if (size == 0)
		return (0);
	while (i < size)
	{
		sum += ft_strlen(strs[i]);
		i++;
	}
	sum += (size - 1) * ft_strlen(sep);
	return (sum);
}

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[i])
	{
		i++;
	}
	while (src[j])
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*arr;
	int		a;

	if (size == 0)
	{	
		arr = malloc(1);
		*arr = '\0';
		return (arr);
	}
	arr = malloc(sum_len(size, strs, sep) * sizeof(char) + 1);
	if (!arr)
		return (NULL);
	arr[0] = '\0';
	a = 0;
	while (a < size - 1)
	{
		arr = ft_strcat(arr, strs[a]);
		arr = ft_strcat(arr, sep);
		a++;
	}
	arr = ft_strcat(arr, strs[a]);
	return (arr);
}

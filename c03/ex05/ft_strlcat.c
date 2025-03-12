/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Lin Liu <linliu@student.hive.fi>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/25 11:54:45 by Lin Liu           #+#    #+#             */
/*   Updated: 2025/02/25 19:51:17 by Lin Liu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (*str)
	{
		i++;
	}
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	dest_len;
	unsigned int	src_len;

	dest_len = ft_strlen(dest);
	src_len = ft_strlen(src);
	if (size > dest_len + src_len)
	{
		while (src[i])
		{	
			dest[dest_len] = src[i];
			dest_len++;
			i++;
		}
		dest[dest_len] = '\0';
	}
	return (dest_len + src_len);
}

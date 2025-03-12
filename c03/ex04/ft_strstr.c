/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Lin Liu <linliu@student.hive.fi>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/25 10:00:40 by Lin Liu           #+#    #+#             */
/*   Updated: 2025/02/25 19:12:14 by Lin Liu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	while (str[i])
	{
		j = 0;
		while (to_find[j] && str[i] == to_find[j])
		{
			i++;
			j++;
		}
		if (!to_find[j])
			return (&str[i - j]);
		i++;
	}
	return (0);
}

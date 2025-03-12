/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Lin Liu <linliu@student.hive.fi>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/24 09:19:21 by Lin Liu           #+#    #+#             */
/*   Updated: 2025/02/24 11:55:18 by Lin Liu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	j;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] = str[i] + 32;
		i++;
	}
	if (str[0] >= 'a' && str[0] <= 'z')
		str[0] = str[0] - 32;
	j = 1;
	while (str[j])
	{	
		if (!(str[j - 1] >= '0' && str[j - 1] <= '9')
			&& !(str[j - 1] >= 'a' && str[j - 1] <= 'z')
			&& !(str[j - 1] >= 'A' && str[j - 1] <= 'Z'))
		{
			if (str[j] >= 'a' && str[j] <= 'z')
				str[j] = str[j] - 32;
		}
		j++;
	}
	return (str);
}

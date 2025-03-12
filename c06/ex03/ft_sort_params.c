/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Lin Liu <linliu@student.hive.fi>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/28 17:13:13 by Lin Liu           #+#    #+#             */
/*   Updated: 2025/03/04 16:50:39 by Lin Liu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

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

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] && s2[i])
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
		i++;
	}
	return (s1[i] - s2[i]);
}

void	ft_swap(char **s1, char **s2)
{
	char	*tmp;

	tmp = *s1;
	*s1 = *s2;
	*s2 = tmp;
}

int	main(int argc, char **argv)
{
	int	i;
	int	j;

	if (argc > 1)
	{	
		i = 0;
		while (++i < argc)
		{	
			j = 0;
			while (++j < argc - 1)
			{
				if (ft_strcmp(argv[j], argv[j + 1]) > 0)
					ft_swap(&argv[j], &argv[j + 1]);
			}
		}
		i = 1;
		while (argv[i])
		{
			write(1, argv[i], ft_strlen(argv[i]));
			write(1, "\n", 1);
			i++;
		}
	}
	return (0);
}

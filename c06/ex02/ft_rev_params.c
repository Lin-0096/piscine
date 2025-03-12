/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Lin Liu <linliu@student.hive.fi>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/28 16:40:08 by Lin Liu           #+#    #+#             */
/*   Updated: 2025/03/03 12:01:07 by Lin Liu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	size;
	int	j;

	size = argc - 1;
	while (argv[size] && size > 0)
	{
		j = 0;
		while (argv[size][j])
		{	
			write(1, &argv[size][j], 1);
			j++;
		}
		write(1, "\n", 1);
		size--;
	}
}

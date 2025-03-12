/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Lin Liu <linliu@student.hive.fi>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/22 15:37:41 by Lin Liu           #+#    #+#             */
/*   Updated: 2025/02/23 15:01:59 by Lin Liu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	rush(int width, int height)
{
	int	x;
	int	y;

	y = 0;
	while (y != height)
	{
		x = 0;
		while (x != width)
		{
			if ((x == 0 && y == 0) || (x == width - 1 && y == 0))
				ft_putchar('A');
			else if (x == 0 && y == height - 1)
				ft_putchar('C');
			else if (x == width - 1 && y == height - 1)
				ft_putchar('C');
			else if (x == 0 || x == width - 1 || y == 0 || y == height - 1)
				ft_putchar('B');
			else
				ft_putchar(' ');
			x++;
		}
		y++;
		ft_putchar('\n');
	}
}

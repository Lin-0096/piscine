/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Lin Liu <linliu@student.hive.fi>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/10 10:20:14 by Lin Liu           #+#    #+#             */
/*   Updated: 2025/03/12 14:18:21 by Lin Liu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	is_sep(char c, char *charset)
{
	while (*charset)
	{
		if (*charset == c)
			return (1);
		charset++;
	}
	return (0);
}

int	count_words(char *str, char *charset)
{
	int	count;
	int	in_word;

	count = 0;
	in_word = 0;
	while (*str)
	{
		if (!is_sep(*str, charset) && !in_word)
		{
			count++;
			in_word = 1;
		}
		else if (is_sep(*str, charset))
		{
			in_word = 0;
		}
		str++;
	}
	return (count);
}

char	*array_word(char *str, char *charset)
{
	int		i;
	int		j;
	char	*start;
	char	*word;	

	start = str;
	i = 0;
	while (!is_sep(*start, charset) && *start)
	{
		i++;
		start++;
	}
	word = malloc(sizeof(char) * (i + 1));
	if (!word)
		return (NULL);
	j = 0;
	while (j < i)
	{
		word[j] = str[j];
		j++;
	}
	word[j] = '\0';
	return (word);
}

char	**ft_split(char *str, char *charset)
{
	int		in_word;
	int		a;
	char	**arr;

	a = 0;
	in_word = 0;
	arr = malloc(sizeof(char *) * (count_words(str, charset) + 1));
	if (arr == NULL)
		return (NULL);
	while (*str)
	{
		if (!is_sep(*str, charset) && in_word == 0)
		{
			arr[a] = array_word(str, charset);
			a++;
			in_word = 1;
		}
		else if (is_sep(*str, charset))
		{
			in_word = 0;
		}
		str++;
	}
	arr[a] = NULL;
	return (arr);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: altaube <altaube@student.42heilbronn.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/13 15:53:25 by altaube           #+#    #+#             */
/*   Updated: 2025/08/13 15:55:18 by altaube          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static int	is_alnum(char c)
{
	if ((c >= '0' && c <= '9')
		|| (c >= 'a' && c <= 'z')
		|| (c >= 'A' && c <= 'Z'))
		return (1);
	return (0);
}

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	new_word;

	i = 0;
	new_word = 1;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			if (new_word)
				str[i] = (char)(str[i] - ('a' - 'A'));
		}
		else if (str[i] >= 'A' && str[i] <= 'Z')
		{
			if (!new_word)
				str[i] = (char)(str[i] + ('a' - 'A'));
		}
		new_word = !is_alnum(str[i]);
		i++;
	}
	return (str);
}

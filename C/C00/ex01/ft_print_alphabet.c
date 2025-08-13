/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: altaube <altaube@student.42heilbronn.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/13 11:22:40 by altaube           #+#    #+#             */
/*   Updated: 2025/08/13 11:24:56 by altaube          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_alphabet(void)
{
	char	letter;

	letter = 'a';

	while (letter <= 'z')
	{
		write(1, &letter, 1);
		letter++;
	}
}

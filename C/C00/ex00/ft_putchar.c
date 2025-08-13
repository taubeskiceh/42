/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: altaube <altaube@student.42heilbronn.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/13 06:01:42 by altaube           #+#    #+#             */
/*   Updated: 2025/08/13 06:03:16 by altaube          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}



// void	ft_putchar(char c);
// void	ft_print_alphabet(void)
// {
// char	letter;
//
// letter = 'a';
// while (letter <= 'z')
// ft_putchar(letter++);
// }


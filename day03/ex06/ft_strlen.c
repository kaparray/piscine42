/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hpowlows <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/20 19:03:07 by hpowlows          #+#    #+#             */
/*   Updated: 2018/09/21 10:03:08 by hpowlows         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putstr(char *str)
{
	int counter;

	counter = 0;
	while (*str != '\0')
	{
		counter++;
		str++;
	}
	return (counter);
}

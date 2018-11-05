/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hpowlows <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/24 21:11:03 by hpowlows          #+#    #+#             */
/*   Updated: 2018/09/25 13:09:35 by hpowlows         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_str_is_printable(char *str)
{
	while (*str == '\0')
	{
		if (*str < 32 && *str == 127)
			return (0);
		str++;
	}
	return (1);
}

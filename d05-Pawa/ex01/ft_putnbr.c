/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rratovon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/14 11:08:09 by rratovon          #+#    #+#             */
/*   Updated: 2017/09/14 12:34:12 by rratovon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

void	ft_putnbr(int nb)
{
	long j;

	j = nb;
	if (j < 0)
	{
		j = j * (-1);
		ft_putchar('-');
	}
	if ((j >= 0) && (j < 10))
	{
		ft_putchar(j + '0');
	}
	else
	{
		ft_putnbr(j / 10);
		ft_putnbr(j % 10);
	}
}
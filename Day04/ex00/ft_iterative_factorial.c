/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcrisp <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/23 18:06:49 by jcrisp            #+#    #+#             */
/*   Updated: 2018/06/23 18:19:24 by jcrisp           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_factorial(int nb)i
{
	int fact;

	fact = 1;
	if (nb == 0)
		fact = 1;	
	while (nb > 0)
	{
		fact = fact * nb;
		nb--;
	}
	return fact;
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_max.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcrisp <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/29 16:50:43 by jcrisp            #+#    #+#             */
/*   Updated: 2018/06/29 16:50:51 by jcrisp           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_max(int *tab, int length)
{
	int a;
	int i;

	i = 0;
	a = tab[0];

	while (i < length)
	{
		if (tab[i + 1] > a)
			a = tab[i + 1];
		i++;
	}
	return (a);
}

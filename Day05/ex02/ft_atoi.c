/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcrisp <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/22 23:33:29 by jcrisp            #+#    #+#             */
/*   Updated: 2018/06/26 20:50:18 by jcrisp           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int			ft_atoi(char *str)
{
	int		v;
	int		n;

	if (*str == '-')
	{
		str++;
		n = 1;
	}
	v = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= '0' && str[i] <= '9')
			v = (v * 10) + (str[i] - '0');
		else
			return (0);
		i++;
	}
	return ((v > 0 && n ? -v : v));
}

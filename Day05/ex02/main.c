/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcrisp <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/25 13:29:46 by jcrisp            #+#    #+#             */
/*   Updated: 2018/06/25 13:39:40 by jcrisp           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_atoi.c"
#include "ft_putnbr.c"

int main()
{

	char* str = "1234";

	int bob; 
	bob = ft_atoi(str);
	ft_putnbr(bob);
	bob = bob * 10;
	ft_putnbr(bob);
	return 0;
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   nmatch.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcrisp <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/01 18:26:53 by jcrisp            #+#    #+#             */
/*   Updated: 2018/07/01 18:36:08 by jcrisp           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		nmatch(char *s1, char *s2)
{
	if (*s1 == '\0' && *s2 == '\0')
		return (1);
	if (*s1 == '\0')
	{
		if (*s2 == '*')
			return (nmatch(s1, s2 + 1));
		else
			return (0);
	}
	if (*s2 == '*')
		return (nmatch(s1 + 1, s2) + nmatch(s1, s2 + 1));
	if (*s2 == *s1)
		return (nmatch(++s1, ++s2));
	if (*s2 != *s1)
		return (0);
	return (-1);
}

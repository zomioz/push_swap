/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pirulenc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 22:21:27 by pirulenc          #+#    #+#             */
/*   Updated: 2023/11/04 16:03:24 by pirulenc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strchr(const char *s, int c)
{
	int				x;
	unsigned char	c2;

	c2 = c;
	x = 0;
	while (s[x] != '\0')
	{
		if (s[x] == c2)
			return ((char *)s + x);
		else
			x++;
	}
	if (s[x] == '\0' && c2 == '\0')
	{
		return ((char *)s + x);
	}
	else
		return (0);
}
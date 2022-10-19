/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbilgili <bbilgili@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/03 12:18:32 by bbilgili          #+#    #+#             */
/*   Updated: 2022/09/03 13:08:05 by bbilgili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int		i;
	int		j;
	char	c;

	i = 0;
	j = 1;
	while (str[i])
	{
		c = str[i];
		if (j && (c >= 'a' && c <= 'z'))
			c -= 32;
		else if (!j && (c >= 'A' && c <= 'Z'))
			c += 32;
		if (!((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')
				|| (c >= '0' && c <= '9')))
			j = 1;
		else
			j = 0;
		str[i] = c;
		i++;
	}
	return (str);
}
/*#include <stdio.h>

int main()
{
	char k[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";

	printf("%s", ft_strcapitalize(k));
}*/

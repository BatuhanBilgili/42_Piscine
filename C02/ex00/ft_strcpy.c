/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbilgili <bbilgili@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/01 17:53:16 by bbilgili          #+#    #+#             */
/*   Updated: 2022/09/02 12:35:21 by bbilgili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *src)
{
	int		i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
/*#include <stdio.h>

int	main()
{
	char D1[] = "Deneme";
	char D2[] = "abg";

	ft_strcpy(D1, D2);

	printf("D1 içi: %s\n", D1);

	return 0;
}*/

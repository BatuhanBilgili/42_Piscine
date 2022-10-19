/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbilgili <bbilgili@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/02 10:10:56 by bbilgili          #+#    #+#             */
/*   Updated: 2022/09/02 11:44:23 by bbilgili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i++] = '\0';
	}
	return (dest);
}
/*#include <stdio.h>

int	main()
{
	char D1[] = "Batuhan";
	char D2[] = "deneme";

	ft_strncpy(D2, D1, 8);

	printf("Dizi içeriği: %s\n", D1);

	return 0;
}*/

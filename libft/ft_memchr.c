/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmeguedm <mmeguedm@student42.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/24 18:25:06 by mmeguedm          #+#    #+#             */
/*   Updated: 2022/04/24 18:25:08 by mmeguedm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	*ft_memchr(const void *memoryBlock, int searchedChar, size_t size )
{
	size_t	i;

	i = 0;
	if ((char *)memoryBlock == NULL)
		return (NULL);
	while (size--)
	{
		if (((char *)memoryBlock)[i] == searchedChar)
			return (&(((char *)memoryBlock)[i]));
		i++;
	}
	return (NULL);
}

// #include <string.h>
// #include <stdio.h>

// int main(void)
// {
// 	char	str[] = "Beautiful World";

// 	printf("%p\n", memchr(str, 'B', 14));
// 	printf("%p\n", ft_memchr(str, 'B', 14));
// }

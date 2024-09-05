/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcirpici <tcirpici@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/25 03:01:14 by tcirpici          #+#    #+#             */
/*   Updated: 2024/08/27 14:56:03 by tcirpici         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_length(char *tmp)
{
	unsigned int	size;
	unsigned int	i;

	i = 0;
	while (tmp[i] != '\0')
	{
		i++;
	}
	size = i;
	return (size);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	size_dest;
	unsigned int	size_src;
	unsigned int	i;
	unsigned int	result;

	size_src = ft_length(src);
	size_dest = ft_length(dest);
	i = 0;
	if (size <= size_dest)
	{
		result = size + size_src;
	}
	else
	{
		while (src[i] != '\0' && size_dest + 1 + i <= size)
		{
			dest[size_dest + i] = src[i];
			i++;
		}
		dest[size_dest + i] = '\0';
		result = size_dest + size_src;
	}
	return (result);
}

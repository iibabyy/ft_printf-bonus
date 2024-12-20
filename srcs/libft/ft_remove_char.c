/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_remove_char.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibaby <ibaby@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/31 07:17:02 by ibaby             #+#    #+#             */
/*   Updated: 2024/11/16 01:30:16 by ibaby            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*Return an allocated copy of the str 
without the char c in parameter
Return NULL if an error occurs*/
char	*ft_remove_char(char *str, char c)
{
	char	*new;
	int		size;
	int		i;
	int		j;

	size = ft_strlen(str) - count_char(str, c);
	if (size == 0 || c == '\0')
		return (NULL);
	new = malloc(sizeof(char) * (size + 1));
	if (new == NULL)
		return (NULL);
	i = -1;
	j = -1;
	while (str[++i])
	{
		if (str[i] != c)
			new[++j] = str[i];
	}
	new[j] = '\0';
	return (new);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   insert_str.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibaby <ibaby@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/15 17:24:56 by ibaby             #+#    #+#             */
/*   Updated: 2024/11/16 01:27:56 by ibaby            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*insert_str(char *str, char *insert, int index)
{
	char	*new_str;

	if (index == 0)
		return (ft_strjoin(insert, str));
	new_str = ft_substr(str, 0, index);
	if (new_str == NULL)
		return (NULL);
	new_str = multi_re_strjoin(3, new_str, insert, str + index);
	return (new_str);
}

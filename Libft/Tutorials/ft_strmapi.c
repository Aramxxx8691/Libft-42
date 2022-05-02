/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arakhurs <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 12:24:50 by arakhurs          #+#    #+#             */
/*   Updated: 2022/03/13 13:21:28 by arakhurs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//կիրառում է f ֆունկցիան s-ի յուրաքանչյուր char-ի համար, տեղ հատկացնելով malloc-ում, ու վերադարձնումա փոփոխված str-ը:
char	*ft_strmapi(char const *s, char (*f) (unsigned int, char))
{
	char	*str;
	int		i;//Hello
			  //01234
	str = ft_strdup(s);//saved in malloc
	if (!s || !f || !str)
		return (0);
	i = 0;
	while (str[i])
	{
		str[i] = f(i, str[i]);
		i++;
	}
	return (str);
}

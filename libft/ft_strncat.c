/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpetruse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/20 17:52:58 by mpetruse          #+#    #+#             */
/*   Updated: 2018/06/20 18:18:41 by mpetruse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *s1, const char *s2, size_t len)
{
	char *cs1;

	cs1 = s1;
	while (*cs1 != '\0')
		cs1++;
	while (len-- > 0 && *s2 != '\0')
		*cs1++ = *s2++;
	*cs1 = '\0';
	return (s1);
}

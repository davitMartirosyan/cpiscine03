/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmartiro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/27 07:44:52 by dmartiro          #+#    #+#             */
/*   Updated: 2021/10/28 22:52:03 by dmartiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char *ft_strncat(char *dest, char *src, unsigned int nb)
{
	if((dest == NULL) && (src == NULL))
		return NULL;

	char *p = dest;

	while(*p != '\0')
		p++;

	while(nb--)
	{
		if(!(*p++ = *src++))
		{
			return dest;
		}
	}

	*p = '\0';
	return dest;
}

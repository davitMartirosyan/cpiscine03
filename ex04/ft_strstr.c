/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmartiro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/28 00:23:32 by dmartiro          #+#    #+#             */
/*   Updated: 2021/10/28 06:36:02 by dmartiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int comparison(const char *str, const char *to_find)
{
	while(*str && *to_find)
	{
		if(*str != *to_find)
		{
			return (0);
		}

		str++;
		to_find++;
	}
	return (*to_find == '\0');
}

char *ft_strstr(char  *str, char  *to_find)
{
	while(*str != '\0')
	{
		if((*str == *to_find) && comparison(str, to_find))
		{
			return str;
		}
		str++;
	}
	return NULL;
}

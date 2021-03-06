/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahel-mou <ahel-mou@1337.ma>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 17:42:08 by ahel-mou          #+#    #+#             */
/*   Updated: 2022/05/29 14:26:35 by ahel-mou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*reverse_string(char *str)
{
	size_t	i;
	size_t	len;
	char	swp;

	if (!str)
		return (NULL);
	len = ft_strlen(str);
	i = 0;
	while (i < len)
	{
		swp = str[i];
		str[i] = str[len - 1];
		str[len - 1] = swp;
		len--;
		i++;
	}
	return (str);
}

int		*reverse_ints_tab(int *arr)
{
	int		i;
	int		swp;
	int		len = sizeof(arr) / sizeof(int);
	i = 0;
	while (i < len / 2)
	{
		swp = arr[i];
		arr[i] = arr[len - 1];
		arr[len - 1] = swp;
		len--;
		i++;
	}
	return (arr);
}

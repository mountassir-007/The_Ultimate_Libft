/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahel-mou <ahel-mou@student-1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/08 15:37:14 by ahel-mou          #+#    #+#             */
/*   Updated: 2021/09/10 12:53:00 by ahel-mou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_tolower(int	cara)
{
	if (cara >= 65 && cara <= 90)
		return (cara + 32);
	return (cara);
}
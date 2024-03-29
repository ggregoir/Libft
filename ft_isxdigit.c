/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isxdigit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggregoir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/19 15:58:15 by ggregoir          #+#    #+#             */
/*   Updated: 2016/11/19 15:58:16 by ggregoir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_isxdigit(int c)
{
	return ((c >= '0' && c <= '9') || (c >= 'A' && c <= 'F')\
	|| (c >= 'a' && c <= 'f'));
}

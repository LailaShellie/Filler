/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_split.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lshellie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/02 16:17:01 by lshellie          #+#    #+#             */
/*   Updated: 2020/02/02 16:17:02 by lshellie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_count_split(char **str)
{
	int		i;

	i = 0;
	while (str[i])
		++i;
	return (i);
}

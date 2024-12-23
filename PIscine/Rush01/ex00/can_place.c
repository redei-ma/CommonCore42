/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   can_place.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: redei-ma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 19:28:16 by redei-ma          #+#    #+#             */
/*   Updated: 2024/10/27 19:28:20 by redei-ma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	can_place(char to_place, int row, int col, char fin[4][4])
{
	int	i;

	i = 0;
	while (i < 4)
	{
		if (fin[row][i] == to_place || fin[i][col] == to_place)
			return (0);
		i++;
	}
	return (1);
}

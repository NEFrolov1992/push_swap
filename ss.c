/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ss.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmentat <gmentat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/29 13:27:37 by gmentat           #+#    #+#             */
/*   Updated: 2020/02/12 15:36:22 by gmentat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ss(t_intlist *arr1, t_intlist *arr2)
{
	if (arr1)
		swap_arr(arr1);
	if (arr2)
		swap_arr(arr2);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memset.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rauosori <rauosori@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/21 17:50:26 by rauosori          #+#    #+#             */
/*   Updated: 2024/04/21 18:29:47 by rauosori         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"


void *memset(void *str, int c, size_t n)
{
    unsigned char    *a;

    a = (unsigned char)str;

while(n-- > 0)
{

    *++a = (unsigned char)c;
}
return (str);
}

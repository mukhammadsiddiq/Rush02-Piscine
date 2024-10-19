/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validity.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mukibrok <mukibrok@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/19 16:42:09 by mukibrok          #+#    #+#             */
/*   Updated: 2024/10/19 19:31:01 by mukibrok         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush.h"

int if_digit(char c) 
{
    return (c >= '0' && c <= '9');
}

void print_error(int type) 
{
    if (type == 1) 
	{
        ft_putstr("Error\n");
    } 
	else 
	{
        ft_putstr("Dict Error\n");
    }
}

int check_validity(char *s, char **num) 
{
    int i = 0;

    if (s[i] == '\0' || s[i] == '-') 
	{
        return 1;
    }
    
    *num = malloc(sizeof(char) * (ft_strlen(s) + 1));
    if (*num == NULL) 
	{
        return 1;
    }

    while (s[i]) 
	{
        if (if_digit(s[i])) 
		{
            (*num)[i] = s[i];
            i++;
        } 
		else 
		{
            free(*num);
            return 1;
        }
    }
    (*num)[i] = '\0';
    return 0;
}



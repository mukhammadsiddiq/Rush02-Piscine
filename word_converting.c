/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   word_converting.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mukibrok <mukibrok@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/19 21:56:06 by mukibrok          #+#    #+#             */
/*   Updated: 2024/10/19 22:00:13 by mukibrok         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush.h"

void convert_to_words(char *num, DictEntry dictionary[], int size) {
    int i;

    i = 0;
    while (i < size)
    {
        if (ft_strcmp(num, dictionary[i].key) == 0) 
        {
            ft_putstr(dictionary[i].value);
            write(1, "\n", 1);
            return;
        }
        printf("%s\n", dictionary[i].key);
        printf("my number");
        printf("%s\n", num);
        i++;
    }
    ft_putstr("Dict Error\n");
}
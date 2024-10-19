/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mukibrok <mukibrok@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/19 16:33:58 by mukibrok          #+#    #+#             */
/*   Updated: 2024/10/19 21:59:15 by mukibrok         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RUSH_H
#define RUSH_H

#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

#define MAX_DICTIONARY_SIZE 256

typedef struct 
{
    char *key;
    char *value;
} DictEntry;

// Function declarations
void ft_putstr(char *str);
int ft_strlen(char *s);
int	ft_strcmp(char *s1, char *s2);
void print_error(int type);
int check_validity(char *s, char **num);
int parse_dictionary(const char *filename, DictEntry dictionary[], int *size);
void free_dictionary(DictEntry dictionary[], int size);
void convert_to_words(char *num, DictEntry dictionary[], int size);

#endif


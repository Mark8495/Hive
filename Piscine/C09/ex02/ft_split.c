/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbyrne <mbyrne@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 11:39:16 by mbyrne            #+#    #+#             */
/*   Updated: 2024/09/25 12:07:31 by mbyrne           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>


int is_separator(char c, char *charset) 
{
    while (*charset) {
        if (c == *charset)
            return 1;
        charset++;
    }
    return 0;
}


int str_length(char *str) 
{
    int len = 0;
    while (str[len])
        len++;
    return len;
}


int count_words(char *str, char *charset) 
{
    int count = 0;
    int in_word = 0;
    
    while (*str) {
        if (!is_separator(*str, charset) && in_word == 0) {
            in_word = 1;
            count++;
        } else if (is_separator(*str, charset)) {
            in_word = 0;
        }
        str++;
    }
    return count;
}


char *copy_word(char *start, char *end) 
{
    int length = end - start;
    char *word = (char *)malloc(sizeof(char) * (length + 1));
    if (!word)
        return NULL;
    for (int i = 0; i < length; i++) {
        word[i] = start[i];
    }
    word[length] = '\0';
    return word;
}


char **ft_split(char *str, char *charset) 
{
    int word_count = count_words(str, charset);
    char **result = (char **)malloc(sizeof(char *) * (word_count + 1));
    if (!result)
        return NULL;

    int index = 0;
    while (*str) {
        while (*str && is_separator(*str, charset))
            str++;


        char *start = str;
        while (*str && !is_separator(*str, charset))
            str++;

        if (start != str) {
            result[index] = copy_word(start, str);
            if (!result[index])
                return NULL; 
            index++;
        }
    }

    result[index] = 0;
    return result;
}
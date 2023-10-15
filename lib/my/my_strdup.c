/*
** EPITECH PROJECT, 2023
** B-CPE-100-LYN-1-1-cpoolday08-omar.joudi
** File description:
** my_strdup.c
*/

char *my_strdup(char const *src)
{
    char *str = malloc(sizeof(src));
    int size = 0;

    while (src[size] != '\0') {
        str[size] = src[size];
        size ++;
    }
    return str;
}

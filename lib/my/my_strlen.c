/*
** EPITECH PROJECT, 2023
** B-CPE-100-LYN-1-1-cpoolday04-omar.joudi
** File description:
** my_strlen.c
*/

int my_strlen(char const *str)
{
    int count = 0;

    while (*str != '\0') {
        count ++;
        *str++;
    }
    return count;
}

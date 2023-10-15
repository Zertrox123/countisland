/*
** EPITECH PROJECT, 2023
** delivery
** File description:
** my_show_word_array.c
*/

int my_show_word_array(char const *tab)
{
    for (int i = 0; tab[i] != 0; i++) {
        my_putstr(tab[i]);
    }
}

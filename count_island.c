/*
** EPITECH PROJECT, 2023
** delivery
** File description:
** count_island.c
*/

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

int preview(int x, int y, char **world)
{
    if (world[x][y] == "X"){
        return 1;
    } else {
        preview(x + 1, y, world);
    }
}

int count_island(char **world)
{
    int x = 0;
    int y = 0;
    int i = 0;
    int numbers = 0;
    int boolean = 0;

    while (world[i][y] != NULL){
        if (world[i][y + 1] != '\0')
            i++;
            x++;
        recherche(x, y, numbers, world);
        boolean = preview(x, y, world);
        if (boolean == 1)
            numbers++;
        y++;
    }
    return numbers;
}

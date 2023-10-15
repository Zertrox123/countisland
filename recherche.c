/*
** EPITECH PROJECT, 2023
** delivery
** File description:
** recherche.c
*/

int modify(int x, int y, int numbers, char **world)
{
    world[x][y] = numbers;
    modify_x(x + 1, y, numbers, **world);
    modify_xbis(x -1, y, numbers, **world);
    modify_y(x, y + 1, numbers, **world);
    modify_ybis(x, y - 1, numbers, **world);
}

int recherche(int x, int y, int numbers, char **world)
{
    if (world[x][y] == "X"){
        modify(x, y, numbers, world);
        return 0;
    } else {
        recherche(x + 1, y, numbers, world);
    }
}
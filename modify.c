/*
** EPITECH PROJECT, 2023
** delivery
** File description:
** modify.c
*/

int modify_x(int x, int y, int numbers, char **world)
{
    if (world[x + 1][y] == "X")
        modify_x(x + 1, y, numbers, **world);
    if (world[x][y + 1] == "X")
        modify_y(x, y + 1, numbers, **world);
    if (world[x][y - 1] == "X")
        modify_ybis(x, y - 1, numbers, **world);
    else
        world[x][y] = numbers;
}

int modify_y(int x, int y, int numbers, char **world)
{
    if (world[x + 1][y] == "X")
        modify_x(x + 1, y, numbers, **world);
    if (world[x - 1][y] == "X")
        modify_xbis(x - 1, y, numbers, **world);
    if (world[x][y + 1] == "X")
        modify_y(x, y + 1, numbers, **world);
    else
        world[x][y] = numbers;
}

int modify_xbis(int x, int y, int numbers, char **world)
{
    if (world[x - 1][y] == "X")
        modify_xbis(x - 1, y, numbers, **world);
    if (world[x][y + 1] == "X")
        modify_y(x, y + 1, numbers, **world);
    if (world[x][y - 1] == "X")
        modify_ybis(x, y - 1, numbers, **world);
    else
        world[x][y] = numbers;
}

int modify_ybis(int x, int y, int numbers, char **world)
{
    if (world[x + 1][y] == "X")
        modify_x(x + 1, y, numbers, **world);
    if (world[x - 1][y] == "X")
        modify_xbis(x - 1, y, numbers, **world);
    if (world[x][y - 1] == "X")
        modify_ybis(x, y - 1, numbers, **world);
    else
        world[x][y] = numbers;
}

/*
** EPITECH PROJECT, 2023
** delivery
** File description:
** concat_params.c
*/

char *concat_params(int argc, char **argv)
{
    char *str = malloc(sizeof(argv) * argc);
    int j = 0;
    int i = 0;

    while (i != argc - 1){
        for (int k = 0; argv[i][k] != '\0'; k++){
            str[j] = argv[i][k];
            j++;
        }
        str[j] = '\n';
        j++;
        i++;
    }
    for (int k = 0; argv[i][k] != '\0'; k++){
        str[j] = argv[i][k];
        j++;
    }
    str[j + 1] = '\0';
    return str;
}

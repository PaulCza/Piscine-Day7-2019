/*
** EPITECH PROJECT, 2019
** my_str_isalpha
** File description:
** sifazf
*/

int my_str_isalpha(char const *str)
{
    int i;
    i = 0;
    while (str[i] >= 'a' && str[i] <= 'z')
    {
        i = i + 1;
    }
    if (str[i] == '\0')
    {
        return (1);
    }
    if(str[i] != '\0')
    {
        return (0);
    }
}

/*
** EPITECH PROJECT, 2019
** my_strcmp
** File description:
** djzsfzs
*/

int my_strcmp(char const *s1, char const *s2)
{
    int i = 0;
    while (s1[i]== s2[i])
    {
        i = i + 1;
    }
    if (s1[i] > s2[i])
    {
        return ("> 0");
    }
    if (s1[i]==s2[i])
    {
        return ("0");
            }
    if (s1[i] < s2[i])
    {
        return ("< 0");
    }
    return (0);
}

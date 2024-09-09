/*
** EPITECH PROJECT, 2019
** my_rev_params
** File description:
** fczs
*/

void my_putchar(char c)
{
    write(1, &c, 1);
}

int my_putstr(char const *str)
{
    int i;
    i = 0;
    while (str[i]!= '\0'){
        my_putchar(str[i]);
        i = i + 1;
    }
    my_putchar ('\n');
}

int main(int argc, char *argv[])
{
    while (argc-- > 0)
    {
        my_putstr(argv[argc]);
    }
    return(0);
}


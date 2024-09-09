/*
** EPITECH PROJECT, 2019
** my_sort_params
** File description:
** dkazdz
*/

void check(int argc, char **argv)
{
    int i;

    i = 0;
    while (i < argc)
    {
        my_putstr(argv[i]);
        my_putchar('\n');
        i = i + 1;
    }
}

int my_strcmp(char *s1, char *s2)
{
    char *yolo;
    char z;

    z = 0;
    yolo = s1;
    while (*yolo != '\0')
    {
        if ((s1[z] - s2[z]) != 0)
            return s1[z] - s2[z];
        z = z + 1;
        yolo = yolo + 1;
    }
    return (0);
}
void my_putchar(char c)
{
    write(1, &c, 1);
}

int my_putstr(char const *str)
{
    int a;
    a = 0;
    while (str[a]!= '\0'){
        my_putchar(str[a]);
        a = a + 1;
    }
}

int main(int argc, char **argv)
{
    int i;
    int i2;
    char *temp;

    i = 0;
    while (i < argc)
    {
        i2 = i + 1;
        while (i2 < argc)
        {
            if (my_strcmp(argv[i], argv[i2]) > 0)
            {
                temp = argv[i2];
                argv[i2] = argv[i];
                argv[i] = temp;
            }
            i2 = i2 + 1;
        }
        i = i + 1;
    }
    check(argc, argv);
    return (0);
}

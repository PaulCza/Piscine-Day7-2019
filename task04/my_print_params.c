/*
** EPITECH PROJECT, 2019
** my_print_params
** File description:
** fdezfezf
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
    int a;
    a = 0;
    while(a <= argc){
        my_putstr(argv[a]);
        a = a + 1;
    }
    return(0);
}
            

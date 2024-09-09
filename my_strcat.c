/*
** EPITECH PROJECT, 2019
** my_strcat
** File description:
** zadzf
*/

char *my_strcat(char *dest, char const *src)
{
    int i;
    i = 0;
    while(src[i]!= '\0'){
        i = i + 1;
    }
    int a;
    a = 0;
    while(src[a]!= '\0'){
        a = a + 1;
    }
    int c;
    c = 0;
    int d;
    d = a + i;
    while(i <= d){
        dest[i] = src[c];
        i = i + 1;
        c = c + 1;
    }
    return dest;
}

    

    
    
    
    
    
    

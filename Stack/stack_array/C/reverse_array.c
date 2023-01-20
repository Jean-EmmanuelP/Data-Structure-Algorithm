#include <stdio.h>
#include <stdlib.h>

int ft_strlen(char *str)
{
    int i = 0;
    while (str[i])
        i++;
    return (i);
}

int main(int ac, char **av)
{
    int j = 0, i = 0;
    char reverse_array[ft_strlen(av[1])];

    while (av[1][j])
        j++;
    j--;
    while (i < ft_strlen(av[1]))
        reverse_array[i++] = av[1][j--];
    printf("%s", reverse_array);
}
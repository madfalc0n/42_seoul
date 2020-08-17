#include <unistd.h>
#include <stdio.h>

void ft_swap(char **str1, char **str2)
{
    char *tmp;

    tmp = *str1;
    *str1 = *str2;
    *str2 = tmp;
}

void ft_sort(char *str1, char *str2)
{
    int i;

    i = 0;
    while (str1[i] != '\0' && str2[i] != '\0')
    {
        if (str1[i] > str2[i])
            ft_swap(&str1, &str2);
            break ;
        i++;
    }
}

void ft_print(char **argv)
{
    int i;
    int j;

    i = 1;
    while (argv[i])
    {
        j = 0;
        while (argv[i][j] != '\0')
        {
            write(1, &argv[i][j], 1);
            j++;
        }
        i++;
        write(1, "\n", 1);
    }
}

int main(int args, char **argv)
{
    int i;
    int j;

    i = 1;
    printf("argv1 : %d\n", args - 1);
    while (i < args - 1)
    {
        j = i + 1;
        while (j < args)
        {
            //printf("argv1 : %s , argv2 : %s\n", argv[i], argv[j]);
            ft_sort(argv[i], argv[j]);
            j++;
        }
        printf("%s\n", argv[i]);
        i++;
    }
    printf("%s\n", argv[i]);
    //ft_print(argv);
	return (0);
}
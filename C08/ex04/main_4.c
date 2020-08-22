#include "ft_stock_str.h"
#include <stdio.h>
#include <stdlib.h>

struct s_stock_str	*ft_strs_to_tab(int ac, char **av);

int main(void)
{
    int i;
    t_stock_str	*stock;
    char **arr;
    
    arr = (char **)malloc(sizeof(char *) * 4);
    i = 0;
    while (i < 3)
    { 
        arr[i] = (char *)malloc(sizeof(char ) * 4);
        i++;
    }
    arr[0] = "HY";
    arr[1] = "MYOUNG";
    arr[2] = "ZZ";
    
    stock = ft_strs_to_tab(3, arr);
    i = 0;
	while (i < 4)
	{
		printf("%d    str : %s    size : %d    copy : %s \n", i, stock[i].str, stock[i].size, stock[i].copy);
		i++;
	}
    return (0);
}
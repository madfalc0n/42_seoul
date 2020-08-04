#include <unistd.h>
#include <string.h>

void print_combn(char c[], int num)
{
	write(1, &c, num);
}

void rest_in_peace(void)
{
	print_combn(", ", 2);
}

void comb_proc(int start, int end, char array[], int array_len, char sav_char[])
{
	int tmp;

	if (start == end)
	{
		rest_in_peace();
	}
	else
	{
		tmp = start + 1;
		while (tmp < array_len)
		{
			sav_char[tmp] = array[tmp];
			if (!(strlen(sav_char) == end))
			{
				comb_proc(start + 1, end, array, array_len, sav_char);
			}
			else
			{
				print_combn(sav_char, end);
			}
			tmp++;
		}
	}
	
}

void ft_print_combn(int n)
{
	int len;
	char array[10];
	int tmp;
	char sav_char[n];
	
	tmp = 0;
	sav_char[0] = '0';
	while (tmp < 10)
	{
		array[tmp] = tmp + 48;
		tmp++;
	}
	len = sizeof(array) / sizeof(array[0]);
	comb_proc(0, n, array, len, sav_char);
}

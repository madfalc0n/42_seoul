#include <unistd.h>

void print_combn(char c)
{
	write(1, &c, 1);
}

void while_proc(int cnt_n, int max_c, int origin_n)
{
	if (max_c == 9)
	{
		print_combn('n');
	}
	else
	{
		print_combn(48 + cnt_n);
		while_proc(cnt_n + 1, max_c + 1);
	}
} 

void ft_print_combn(int n)
{
	int cnt_n;

	cnt_n = 0;
	while_proc(cnt_n, 9 - n + 1, n);
	

}

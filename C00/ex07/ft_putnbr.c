#include <unistd.h>


void print_numb(char c)
{
	write(1, &c, 1);
}

void int_to_str(int nb)
{
	if (nb / 10 == 0)
	{
		print_numb(48 + nb);
	}
	else
	{	
		int_to_str(nb/10);
		print_numb(48 + nb % 10);
	}
}

void ft_putnbr(int nb)
{
	if (nb == 0)
	{
		print_numb('0');
	}
	else if (nb < 0)
	{
		print_numb('-');
		nb = nb * (-1);
		int_to_str(nb);
	}
	else
	{
		int_to_str(nb);
	}
}

#include <stdio.h>

void ft_div_mod(int a, int b, int *div, int *mod);

int main(void)
{
	int a;
	int b;
	int *c;
	int *d;
	int e;
	int f;

	a = 15;
	b = 7;
	e = 0;
	f = 0;
	c = &e;
	d = &f;
	printf("%d %d %d %d\n", a, b, *c, *d);

	ft_div_mod(a, b, c, d);
	printf("%d %d %d %d\n", a, b, *c, *d);
	
	return (0);
}

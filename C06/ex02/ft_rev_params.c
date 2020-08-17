#include <unistd.h>

int main(int args, char **argv)
{
    int i;
    int j;

    i = args - 1;
    while (i > 0)
    {
        j = 0;
        while (argv[i][j] != '\0')
        {
            write(1, &argv[i][j], 1);
            j++;
        }
        i--;
        write(1, "\n", 1);
    }
	return (0);
}

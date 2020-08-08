int ft_strlen(char *str)
{
	int result;
	int tmp;
	char a;
	
	tmp = 0;
	result = 0;
	while (1)
	{
		a = *str;
		if (a == '\0')
		{
			break;
		}
		str++;
		result++;
	}
	return result;
}

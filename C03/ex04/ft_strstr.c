char *ft_strstr(char *str, char *to_find)
{
    int i;
    int j;

    i = 0;
    if (*to_find == 0) return (&str[0]);
    while (str[i] != '\0')
    {
        if (str[i] == to_find[0])
        {
            j = 0;
            while (to_find[j] != '\0' && str[j] != '\0')
            {
                if (!(str[i + j] == to_find[j])) break;
                j++;
            }
            if (to_find[j] == '\0') return (&str[i]);
        }
        i++;
    }
    return (0);
}
int conv_num(int val)
{

}

int conv_a_to_num(char *str)
{
    int i;
    int mi_cnt;
    int num_cnt;
    int save_num;

    i = 0;
    mi_cnt = 0;
    num_cnt = 1;
    save_num = 1;
    while(str[i] != '\0')
    {
        if (str[i] == '-')
            mi_cnt++;
        else if (str[i] >= '0' && str[i] <= '9')
        {
            num_cnt++;
        }
        else if (!(str[i] >= '0' && str[i] <= '9') && num_cnt > 1) //숫자 쌓이고 있는데 갑자기 다른놈 튀어나온 경우
        {
            break ;
        }
        i++;
    }  
}

int ft_atoi(char *str)
{


    if (mi_cnt % 2 == 0)
        return ();
    else
        return (-1 * );


}
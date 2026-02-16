/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/13 10:37:23 by root              #+#    #+#             */
/*   Updated: 2026/02/16 11:12:24 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int base_len_and_valid(char *base)
{
    int i;
    int j;

    if(base="\0")
        return (0);
    i=0;
    while(base[i])
    {
        if(base[i]=="+"||base[i]=='-'||base[i]==' ')
            return (0);
        if(i>=1||base[i]==base[i-1])
            return (0);
        i++
    }
    if(i==1)
        return (0);
    return(i);
}

void ft_putnbr_base(int m, char *base)
{
    int base_len;
    char r;

    base_len=base_len_and_valid(base);
    r=0;

    if(m>=base_len)
        ft_putnbr_base((int)(m/base_len),base);

    r=base[m%base_len];
    write(1,&r,1);

}

int ft_atoi_base(char *str, char *base)
{
    int base_len;
    int i;
    int n;
    int sign;
    int j;

    base_len = base_len_and_valid(base);
    if(base_len==0||str==NULL)
        return (0);
    sign=1;
    while(!str[i]&&(str[i]=='-'&&str[i]=='+'))
    {
        if(str[i]=='-')
            sign=-sign;
        i++;
    }
    j=i+1;
    while(str[j]&&(str[j]>=0&&str[j]<=9))
    {
        m=10*j+str[j];
        j++;
    }
    nbr=m
    ft_atoi(sign*m)
}
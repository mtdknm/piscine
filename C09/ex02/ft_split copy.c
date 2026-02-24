/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/24 00:36:15 by root              #+#    #+#             */
/*   Updated: 2026/02/24 13:53:24 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int is_sep(char c, char *charset)
{
    int i;
    if(charset==NULL)
        return (0);
    i=0;
    while(charset[i])
    {
        if(charset[i]==c)
            return (1);
        i++;
    }
    return (0);
}

int count_words(char *str,char *charset)
{
    int i;
    int count;
    if(!str)
        return (0);
    i=0;
    count=0;
    while(str[i])
    {
        while(str[i]&&is_sep(str[i],charset)==1)
            i++;
        if(str[i])
        {
            count++;
            while(str[i]&&is_sep(str[i],charset)==0)
                i++;
        }
    }
    return (count);
}

int word_len(char *str,char *charset,int start)
{
    int len;
    len=0;
    while(str[start+len]&&is_sep(str[start+len],charset)==0)
        len++;
    return (len);
}

void    copy_word(char *dst, char src, int start, int len)
{
    int i;
    i=0;
    while(i<len)
    {
        dst[i]=src[start+i];
        i++;
    }
    dst[i]='\0';
}

char    **ft_split(char *str, char *charset)
{
    char    **res;
    int i;
    int j;
    int len;
    res=(char **)malloc(sizeof(char *)*(count_words(str,charset)+1));
    if(!res)
        return (0);
    i=0;
    j=0;

    while(str&&str[i])
    {
        while(str[i]&&is_sep(str[i],charset))
            i++;
        len=word_len(str,charest,i)
        res[j]=(char *)malloc(sizeof(char)*(len+1));
        if(res[j]==NULL)
            return (0);
        copy_word(res[j],str,i,len);
        j++;
        i+=len;
    }
    res[j]=0;
    return (res);
}
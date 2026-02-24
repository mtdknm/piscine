#include <unistd.h>

/* あなたの関数のプロトタイプ */
void ft_putchar(char c);
void ft_putstr(char *str);
void ft_swap(int *a, int *b);
int  ft_strlen(char *str);
int  ft_strcmp(char *s1, char *s2);

/* 数字表示用：printf禁止でも確認できる */
static void putnbr(int n)
{
    char c;
    if (n >= 10)
        putnbr(n / 10);
    c = '0' + (n % 10);
    write(1, &c, 1);
}

int main(void)
{
    int a = 10, b = 20;

    ft_putstr("1) putchar: ");
    ft_putchar('A');
    ft_putchar('\n');

    ft_putstr("2) putstr: hello\n");

    ft_putstr("3) strlen(\"abc\") = ");
    putnbr(ft_strlen("abc"));
    ft_putchar('\n');

    ft_putstr("4) strcmp(\"abc\",\"abc\") = ");
    putnbr(ft_strcmp("abc", "abc"));
    ft_putchar('\n');

    ft_putstr("5) swap: a,b = ");
    putnbr(a); ft_putstr(", "); putnbr(b); ft_putchar('\n');
    ft_swap(&a, &b);
    ft_putstr("   after: a,b = ");
    putnbr(a); ft_putstr(", "); putnbr(b); ft_putchar('\n');

    return 0;
}
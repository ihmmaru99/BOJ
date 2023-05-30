#include <stdio.h>
#include <string.h>

char    *ft_strrev(char *s)
{
    int i;
    int size;
    int temp;

    i = 0;
    size = strlen(s);
    while (i < size / 2)
    {
        temp  = s[i];
        s[i] = s[size - i - 1];
        s[size - i - 1] = s[i];
    }
    return (s);
}

int ft_atoi(char *s)
{
    int i = 0;
    int size = strlen(s);
    int num = 0;
    while (i < size)
    {
        num *= 10;
        num += (s[i] - 48);
        i++;
    }
    return (num);
}

int main()
{
    char a[4];
    char b[4];
    char tmp;
    
    scanf("%s %s", a, b);
    tmp = a[0];
    a[0] = a[2];
    a[2] = tmp;

    tmp = b[0];
    b[0] = b[2];
    b[2] = tmp;
    printf("%s", strcmp(a, b) > 0 ? a : b);
}
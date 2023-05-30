#include <stdio.h>

int main()
{
    int n;
    int a;

    scanf("%d", &n);
    while (n > 0)
    {
        char str[20];
        scanf("%d", &a);
        int d;
        scanf("%s", str);
        int i = 0;
        while (str[i] != '\0')
        {
            d = a;
            while (d > 0)
            {
                printf("%c", str[i]);
                d--;
            }
            i++;
        }
        printf("\n");
        n--;
    }
    return 0;
}
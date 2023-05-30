#include <stdio.h>
#include <string.h>

int main()
{
    char str[1000001];
    scanf("%[^\n]", str);
    int len = strlen(str);
    int cnt = 0;
    if (len == 1 && str[0] == ' ')
    {
        printf("0");
        return 0;
    }
    for (int i=1; i < len-1; i++){
        if(str[i] == ' ')
            cnt++;
    }
    printf("%d\n", cnt+1);
    return 0;
}
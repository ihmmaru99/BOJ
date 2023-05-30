#include <stdio.h>

int main()
{
    char str[100];
    scanf("%s", str);
    char *alpha = "abcdefghijklmnopqrstuvwxyz";
    int num[27];
    int i = 0;
    int j;
    for(int i = 0; i<26; i++)
        num[i] = -1;
    while (alpha[i] != '\0')
    {
        j = 0;
        while (str[j] != '\0')
        {
            if (alpha[i] == str[j])
                if(num[i] == -1)
                    num[i] = j;
            j++;
        }
        i++;
    }
    for (int i=0; i<26; i++)
        printf("%d ", num[i]);
    return 0;
}
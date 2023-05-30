#include <stdio.h>
int main() {
    int A, B;
    while(scanf("%d %d", &A, &B) != EOF)
        printf("%d\n", A+B);
    return 0;
}

//EOF가 무엇인지 알아야 한다
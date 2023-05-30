#include <stdio.h>
#include <string.h>

int check_alpha(char n);

int main()
{
    char s[16];
    scanf("%s", s);
    int sum;
    sum = 0;
    for (int i='A'; i <='Z'; i++){
        for (int j=0; j<strlen(s); j++)
            if (s[j] == i)
                sum += check_alpha(i);
    }
    sum += strlen(s);

    printf("%d", sum);
    return 0;
}

int check_alpha(char n)
{
    switch(n){
        case 'A':
        case 'B':
        case 'C':
            return 2;
        case 'D' :
		case 'E' :
		case 'F' :
			return 3;
		case 'G' :
		case 'H' :
		case 'I' :
			return 4;
		case 'J' :
		case 'K' :
		case 'L' :
			return 5;
		case 'M' :
		case 'N' :
		case 'O' :
			return 6;
		case 'P' :
		case 'Q' :
		case 'R' :
		case 'S' :
			return 7;
		case 'T' :
		case 'U' :
		case 'V' :
			return 8;
		case 'W' :
		case 'X' :
		case 'Y' :
		case 'Z' :
			return 9;
    }
}
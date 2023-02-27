
#include <stdio.h>

int main()
{
    char ch;
    scanf("%c",&ch);
    (ch>='A' && ch<='Z')|| (ch>='a' && ch<='z')?printf("this is an alpabet %c",ch):printf("this is not an alpabet %C",ch);
    return 0;
}
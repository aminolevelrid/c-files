#include <stdio.h>

int main()
{
    int a;
    scanf("%d",&a);
    (a%4==0)&& (a%100!=0)|| (a%400==0)?printf("this is a leep year.%d",a):printf("this is not a leep year.%d",a);
    return 0;
}
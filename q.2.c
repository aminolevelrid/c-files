
#include <stdio.h>

int main()
{
  int a,b,c;
  scanf("%d%d%d",&a,&b,&c);
  a>b?printf(" a is a maximum:%d",a):b>c?printf("b is a maximum.:%d",b):printf("c is maximum.:%d",c);

    return 0;
}
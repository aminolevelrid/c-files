#include <stdio.h>

int main()
{ char a[100];
scanf("%s",a);
char b[100];
int i;
while(a[i]){
    b[i]=a[i];
    i++;
}
b[i]=0;
printf("%s",b);

    return 0;
}
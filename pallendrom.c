#include <stdio.h>
#include <string.h>

int main()
{ char a[100],b[100];
scanf("%s",a);
int len,i,j=0,f=0;
len=strlen(a);
for(i=len-1;i>=0;i--,j++){
    b[j]=a[i];
}
b[j]=0;
printf("%s",b);
i=0;
while(a[i]){
    
if(a[i]!=b[i]){
    f=1;
    break;
}
i++;
}if(f==0)
printf("yes");
else
printf("no");
    return 0;
}
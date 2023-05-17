
#include <stdio.h>
#include <string.h>
int main()
{
      char a[100];
   int i,len,j,k;
   scanf("%s",a);
   len=strlen(a);
   for(i=0;i<len;i++)
   {for(j=i+1;a[j]!=0;j++){
   if(a[i]==a[j]){
       for(k=j;a[k]!=0;k++){
       a[k]=a[k+1];} }
   }
   }
   printf("%s",a);

    return 0;
}
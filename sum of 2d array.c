
#include <stdio.h>

int main()
{
   int r,c;
   printf("enter the value of r and c :");
   scanf("%d%d",&r,&c);
   int a[r][c],i,j,sum=0;
   for(i=0;i<r;i++){
       for(j=0;j<c;j++)
       scanf("%d",&a[i][j]);
   }
    for(i=0;i<r;i++){
       for(j=0;j<c;j++){
       printf("%d ",a[i][j]);}
       printf("\n");
   }
   for(i=0;i<r;i++){
       for(j=0;j<c;j++)
           sum=sum+a[i][j];
       }
       printf("%d\n",sum);
return 0;}

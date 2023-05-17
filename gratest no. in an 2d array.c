#include <stdio.h>

int main()
{
   int r,c;
   printf("enter the value of r and c :");
   scanf("%d%d",&r,&c);
   int a[r][c],i,j;
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
           for(j=0;j<c;j++){
               if(a[0][0]<a[i][j])
               a[0][0]=a[i][j];
           }
       }
    printf("%d",a[0][0]);
    return 0;
}
#include <stdio.h>

int main()
{
  int r,c;
  scanf("%d %d",&r,&c);
  int a[r][c],i,j,sum=0;
  for(i=0;i<r;i++){
      for(j=0;j<c;j++)
      scanf("%d",&a[i][j]);
  }
  for(i=0;i<r;i++){
      for(j=0;j<c;j++)
      printf("%d",a[i][j]);
       printf("\n");
  }
    for(i=0;i<r;i++){
      for(j=0;j<c;j++)
      if(a[i]>=a[j]){
      sum=sum+a[i][j];}
        printf("%d ",sum);
    }
      printf("%d",sum);
  return 0;
}
#include <stdio.h>
int array_copy(int,int *);
void main()
{ int n;
scanf("%d",&n);
int a[n],i;
for(i=0;i<n;i++)
scanf("%d",&a[i]);
printf("%d",array_copy(n,a));

}
int array_copy(int n,int p[]){
    int i,t;
    t=p[0];
    for(i=1;i<n;i++){
    if(t<p[i])
    t=p[i];}
    return t;
}
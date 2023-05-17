/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    char a[100];
    scanf("%s",a);
    char b[100],d;
    int len1=0,len2=0,i=0;
    scanf("%c",&d);
    scanf("%s",b);
    while(a[i]){
        i++;
        len1++;
    }
    i=0;
    while(b[i]){
        i++;
        len2++;
    }
    if(len1>len2){
        printf("%d",len1);
    }
    else{
    printf("%d",len2);}

    return 0;
}

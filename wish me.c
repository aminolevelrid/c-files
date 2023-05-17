#include <stdio.h>

int main()
{
   int h,m;
   scanf("%d%d",&h,&m);
   if(h>=22 && h<=23||h>=1 && h<=3&&m>=0 && m<=59)
   printf("good night");
   else if(h>=16 && h<=20 && m>=0&& m<=59)
   printf("good evening");
   else if(h>=12 && h<=15 && m>=0 && m<=59)
   printf("good afternoon");
   else
   printf("good morning");
    return 0;
}
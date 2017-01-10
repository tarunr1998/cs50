#include<cs50.h>
#include<stdio.h>
int main(void)
{    printf("let's calculate water consumption in your 1 shower  bath\n");
    printf("time of bath (in minutes):");
    
     int x=GetInt();
     if(x<20)
     printf("\nwater used is equivalent to %d water bottles\n",x*12);
}
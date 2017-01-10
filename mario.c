#include<cs50.h>
#include<stdio.h>
int main(void)
{
    int i,x,v,n ;
    
    
    printf("no. of rows(<=23) of half pyramid:");
g:

n=GetInt();
if(n>=0 && n<=23)
{for(i=1; i<=n; i++)                            //forming row wise 
    {
        for(x=0; x<n-i; x++)                         //for printing pattern in one row i.e some empty space
        {printf(" ");}
        for(v=0; v<i+1; v++)                          //for printing pattern in one row i.e some restricted space
        {printf("#");}
         printf("\n");
        }
       
}  
else
{
    printf("retry:");
    
    goto g;
}                                       //restart if improper entry are used

}

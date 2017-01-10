#include <cs50.h>
#include <stdio.h>
#include <math.h>


int main(void) 
{
    // Variable declarations
    float a ;                                      //input from user
    int cent ;
    int quarter ;
    int dime ;
    int nickel  ;
    int  left ;
    int coin  ;
    
    //Input handling
    do 
    {
        printf("give  me in$ : ");
        a = GetFloat();
        //If given amount is zero or less then zero checked
        if(a == 0||a <= 0)
        printf("Number Should be greater then Zero \n:");
    }
    while(a <= 0);

    // Given amount is convert to cents
    cent  = (int)round(a*100);

    // Quarters
    quarter  = cent  / 25;                          //quarter is 25 cents
     left = cent  % 25;
    
    // Dimes
    dime  =  left / 10;                                  //dime is 10 cents 
     left =  left % 10;
    
    // Nickels
    nickel  =  left / 5;                                //nickel is 5 cents
     left =  left % 5;
    
    //  left at this stage is pennies
    coin  = quarter  + dime  + nickel  +  left;
    
    
    //Required output:
    printf("%d\n",coin );
    
}
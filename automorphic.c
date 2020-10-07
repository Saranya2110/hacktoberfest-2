# include <stdio.h>
# include <stdlib.h>
# include <stdbool.h>

bool chkAutomor(int num1)
{
    int sqno = num1 * num1;
    while (num1 > 0)
    {
        if (num1 % 10 != sqno % 10)
            return false;
        num1 /= 10;
        sqno /= 10;
    }
    return true;
}
int main()
{
    int auno;
 printf(" Input a number: ");
 scanf("%d",&auno);	
 
      if( chkAutomor(auno))
        printf(" The given number is an Automorphic Number.\n");
    else
        printf(" The given number is not an Authomorphic Number.\n");
    return 0;
}

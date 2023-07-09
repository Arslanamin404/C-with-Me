#include <stdio.h>
#include <conio.h>

/*
* IT IS THE ONE OF THE BEST AND EFFICIENT APPROACH TO
* SOLVE THIS PROBLEM
*/

void main()
{
    int a,b,c;
    printf("Enter 3 nums : ");
    scanf("%d %d %d",&a,&b,&c);
   /* 
APPROACH 01 : 

    if(a>b)
    {
        if(a>c)
        {
            printf("%d",a);
        }
        else
        {
            printf("%d",c)
        }
    }
    else
    {
        if(b>c)
        {
            printf("%d",b);
        }
        else
        {
            printf("%d",c);
        }
    }
    */
    
    
  /*
APPROACH 02 :

    if(a>b)
    {
        (a>c)? printf("%d",a):  printf("%d",c);
    }
    else
    {
        (b>c)?printf("%d",b) : printf("%d",c);
    }
    
    */
    
    /*
APPROACH 03 : 

    (a>b)? (a>c)? printf("%d",a):  printf("%d",c) : (b>c)?printf("%d",b) : printf("%d",c);
    */
    
//APPROACH 04 : 
    
    printf("%d", (a>b)? (a>c)? a:c : (b>c)? b:c);
getch();

}

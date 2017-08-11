
#include <stdio.h>
#include <conio.h>
 
int main()
{
    int year;
    printf("Enter a year for leap year check\n");
    scanf("%d", &year);
   
    if(year%4 != 0)
    {
        printf("%d is not a leap year\n", year);
    } else
    {   
        if(year%100 == 0)
        {
            if ( year%400 == 0)
            {
                printf("%d is a leap year\n", year);
            } else
            {
                printf("%d is not a leap year\n", year);
            }
        }
        else
        
        {
            printf("%d is a leap year\n", year );
        }
    }
    getch();
    return 0;

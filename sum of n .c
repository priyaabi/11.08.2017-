#include <stdio.h>
#include <conio.h>
 
int main()
{
      
    int numberCount=0, number, counter, s=0;
     
    printf("Enter the number of integers to add: ");
    scanf("%d",&numberCount);
     
    printf("Enter %d numbers seperated by space \n", numberCount);
    for(counter = 0; counter < numberCount; counter++){
        scanf("%d", &number);
        s = s + number;
    }
    printf("S = %d", s);
    getch();
    return 0;
}

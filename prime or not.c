#include <stdio.h>
int main()
{
    int p, i, flag = 0;

    printf("Enter a positive integer: ");
    scanf("%d",&p);

    for(i=2; i<=p/2; ++i)
    {
        // condition for nonprime number
        if(p%i==0)
        {
            flag=1;
            break;
        }
    }

    if (flag==0)
        printf("%d is a prime number.",p);
    else
        printf("%d is not a prime number.",p);
    
    return 0;
}

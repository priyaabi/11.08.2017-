#include <stdio.h>
int main()
{
    int b, i;

    printf("Enter an integer: ");
    scanf("%d",&=b);

    for(i=1; i<=10; ++i)
    {
        printf("%d * %d = %d \n", b, i, b*i);
    }
    
    return 0;
}

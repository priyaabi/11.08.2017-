#include <stdio.h>
int main()
{
    int number, O.N, rem, res = 0;

    printf("Enter a three digit integer: ");
    scanf("%d", &number);

    O.N = number;

    while (O.N != 0)
    {
        rem = O.N%10;
        res += rem*rem*rem;
        O.N /= 10;
    }

    if(res == number)
        printf("%d is an Armstrong number.",number);
    else
        printf("%d is not an Armstrong number.",number);

    return 0;
}

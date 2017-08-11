#include <stdio.h>
int main()
{
    long long l;
    int count = 0;

    printf("Enter an integer: ");
    scanf("%lld", &l);

    while(l != 0)
    {
        // l = l/10
        l /= 10;
        ++count;
    }

    printf("Number of digits: %d", count);
}

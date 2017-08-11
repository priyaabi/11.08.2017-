#include <stdio.h>

void main()

{

    int num,m =20,l=40;

    clrscr();

    printf("Print Odd Numbers in a given range m to l:\n");

    for (num = m; num <= l; num++)

        {

               if (num % 2 == 1)

                  printf ("%d ", num);

         }

                getch();

}

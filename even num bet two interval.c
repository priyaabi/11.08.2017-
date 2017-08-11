#include <stdio.h>  
  
int main() {  
    int counter, N, sum = 0;  
    
    printf("Enter a Positive Number\n");
 scanf("%d", &N);
  
    for(counter = 1; counter <= N; counter++) {  
       
        if(counter%2 == 0) { 
                      sum = sum + counter;  
        }  
    }
    printf("Sum of all Even numbers between 1 to %d is %d", N, sum);

    return 0;  
} 

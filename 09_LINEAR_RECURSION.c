#include <stdio.h>
#include <math.h>
            // factorial

int fact(int);
int fact(int n){
    if(n == 1 || n == 0)
        return 1;
        return n * fact(n - 1);
    
}
int main() {

        int x;
        printf("Enter the number : ");
        scanf("%d", &x);
        
        printf("%d", fact(x));

    return 0;
}
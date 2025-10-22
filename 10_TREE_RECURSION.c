#include <stdio.h>
#include <math.h>
            // fibonacci

int fibb(int);
int fibb(int n){
    if(n <= 1)
    return n;
    return fibb(n-1) + fibb(n - 2);
}
int main() {

        int x;
        printf("Enter the number : ");
        scanf("%d", &x);
        
        printf("%d", fibb(x));

    return 0;
}
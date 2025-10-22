#include <stdio.h>
#include <math.h>

int fun(int n){
    if(n <= 1) 
    return 1;

    return n * fun(n - 2);
} 
int main() {

     int x;
     printf("Enter the number : ");
     scanf("%d", &x);
     
     printf("%d", fun(x));

    return 0;
}
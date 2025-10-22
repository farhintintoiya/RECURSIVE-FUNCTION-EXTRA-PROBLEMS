#include <stdio.h>
#include <math.h>

int fun(int n){
     if(n == 0)
     return 0;
     printf("%d ", n);
     fun(n - 1);
}
int main() {

       int n;
       printf("Enter the number : ");
       scanf("%d", &n);

       fun(n);

    return 0;
}
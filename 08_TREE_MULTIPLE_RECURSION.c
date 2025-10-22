#include <stdio.h>
#include <math.h>

int f(int n) {
    if(n==0) 
    return 1;
    
    return f(n/2) + f(n/2);
}
int main() {
    printf("%d", f(4));
    return 0;
}
           

  

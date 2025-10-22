#include <stdio.h>
#include <math.h>


void f1(int x) {
      
    for(int i = 0; i <= x; i++){
         printf("%d ", i);
    }
    
}

int main() {
    
    int n;
    printf("Enter the number : ");
    scanf("%d", &n);

    f1(n);

    return 0;
}

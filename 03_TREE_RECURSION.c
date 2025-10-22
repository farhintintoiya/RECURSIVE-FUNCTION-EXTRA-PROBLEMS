#include <stdio.h>
#include <math.h>

int func(int n) {
    if (n <= 1)
        return 1;
    return func(n - 1) + func(n - 1);
}

int main() {

    int x;
    printf("Enter the number : ");
    scanf("%d", &x);

    printf("%d", func(x));
    
    return 0;
}

#include <stdio.h>
#include <math.h>

int mystery(int n) {
    if (n == 0)
        return 0;
    return n + mystery(n - 1);
}
int main() {

    int x;
    printf("Enter the number : ");
    scanf("%d", &x);

    printf("%d", mystery(x));
    
    return 0;
}

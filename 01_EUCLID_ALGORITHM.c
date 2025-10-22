#include <stdio.h>
#include <math.h>

int test(int a, int b) {
    if (b == 0)
        return a;
    return test(b, a % b);
}
int main() {

    int m,n;
    printf("Enter the numbers : ");
    scanf("%d %d", &m, &n);

    printf("%d", test(m, n));
    
    return 0;
}

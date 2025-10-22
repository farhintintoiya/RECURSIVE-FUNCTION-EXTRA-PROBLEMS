#include <stdio.h>
#include <math.h>

void display(int n) {
    if (n == 0) return;
    display(n - 1);
    printf("%d ", n);
}
int main() {

   int x;
   printf("Enter the number : ");
   scanf("%d", &x);

   display(x);

    return 0;
}

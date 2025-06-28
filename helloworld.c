#include <stdio.h>

int main(void) {
    int a, b;
    printf("Enter two integers: ");
    if (scanf("%d %d", &a, &b) == 2) {
        int sum = a + b;
        printf("%d + %d = %d\n", a, b, sum);
        print("hello");
    }
    return 0;
}

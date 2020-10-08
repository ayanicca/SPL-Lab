#include <stdio.h>
int power(int x, int y);
int main() {
    int a, b, result;
    printf("Enter x: ");
    scanf("%d", &a);
    printf("Enter y: ");
    scanf("%d", &b);
    result = power(a, b);
    printf("%d to the power %d is : %d", a,b,result);
    return 0;
}

int power(x,y) {
    if (y != 0)
        return (x * power(x, y - 1));
    else
        return 1;
}

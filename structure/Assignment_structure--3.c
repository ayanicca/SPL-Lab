#include<stdio.h>
struct Distance {
    int feet;
    float inch;
} d1, d2, x;

int main() {
    printf("Enter information for 1st distance\n");
    printf("Enter feet: ");
    scanf("%d", &d1.feet);
    printf("Enter inch: ");
    scanf("%f", &d1.inch);
    printf("\nEnter information for 2nd distance\n");
    printf("Enter feet: ");
    scanf("%d", &d2.feet);
    printf("Enter inch: ");
    scanf("%f", &d2.inch);

    x.feet=d1.feet+d2.feet;
   x.inch=d1.inch+d2.inch;

    // 1 feet =12 inch
    if (x.inch>12.0) {
        x.inch = x.inch-12.0;
       x.feet++;
    }
    printf("\nSum of distances = %d\'%.1f\"", x.feet, x.inch);
    return 0;
}

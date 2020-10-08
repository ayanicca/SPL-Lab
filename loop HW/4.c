#include <stdio.h>
int main() {

    int n,sum=0,i = 0,k;
    printf("Enter an integer: ");
    scanf("%d", &n);
    while (n != 0) {
        k=n %10;

       sum=sum+k;
         n=n/10;
        i++;
    }
    printf("The Number has %d digits which sum to %d", i,sum);
}

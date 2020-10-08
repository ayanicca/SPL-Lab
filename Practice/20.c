#include <stdio.h>
int main() {

    int n,sum=0,i = 0,k;

    scanf("%d", &n);
    while (n != 0) {
        k=n %10;

       sum=sum+k;
         n=n/10;
        i++;
    }
    printf("count:%d,Sum:%d", i,sum);
}


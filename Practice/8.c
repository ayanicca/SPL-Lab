#include<stdio.h>
int main ()
{
    int n,i,j=2,k;
    scanf("%d",&n);
    printf("%d",j);
    for(i=1,k=4; i<n; i++,k=k+2)

    {
       j=j+k;
    printf(",%d",j);


    }
    return 0;

}


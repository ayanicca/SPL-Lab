#include<stdio.h>
int main ()
{
    int n,i,j=2;
    scanf("%d",&n);
    printf("%d",j);
    for(i=1; i<n; i++)
    {
        j=j+2;
            printf(",%d",j);



    }
    return 0;

}

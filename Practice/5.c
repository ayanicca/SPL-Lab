#include<stdio.h>
int main ()
{
    int n,i,j=1,k;
    scanf("%d",&n);
    printf("%d",j*j);
    for(i=1; i<n; i++)

    {

        j++;
        k=j*j;
        printf(",%d",k);



    }
    return 0;

}

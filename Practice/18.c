#include<stdio.h>
#include<math.h>
int main ()
{
    int n,i,k=0;

    scanf("%d",&n);
    for(i=2; i<n; i++)
    {
        if(n%i==0)
        {
            k++;
            break;
        }
        else
            k=0;
    }

    if(k==0)
    {
        printf("Prime\n");
    }
    else
        printf("Not Prime\n");


    return 0;

}



#include <stdio.h>
int main()
{

    int i,n,m,k=0,y=1;

    printf("How many numbers");
    scanf("%d",&n);
    int x[n];

    printf("Enter the numbers: ");
    for(i=0; i<n; i++)
    {
        scanf("%d",&x[i]);

    }
    printf("Enter the search key: ");
    scanf("%d",&m);
    for(i=0; i<n; i++)
    {
        if(x[i]==m)
        {
            printf("Found at position :%d\n", i);

            y=0;

        }


        else
            k=1;
    }

    if(k==1 && y==1)
    {
        printf("NOT FOUND");
    }

    return 0;
}


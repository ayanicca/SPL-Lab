#include<stdio.h>
int main ()
{
    int a[4][4],b[4][4],c[4][4],d[4][4];
    int i,j,k;
    printf("Enter Matrix 1:\n");
    for(i=0; i<4; i++)
    {
        printf("Row %d:",i+1);
        for(j=0; j<4; j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("\nEnter Matrix 2:\n");
    for(i=0; i<4; i++)
    {
        printf("Row %d:",i+1);
        for(j=0; j<4; j++)
        {
            scanf("%d",&b[i][j]);
        }
    }


    for(i=0; i<4; i++)
    {
        for(j=0; j<4; j++)
        {
            c[i][j]=a[i][j]+b[i][j];
            d[i][j]=a[i][j]-b[i][j];
        }
    }
    printf("\nThe Sum:\n");
    for(i=0; i<4; i++)
    {
        for(j=0; j<4; j++)
        {
            printf("%d ",c[i][j]);
        }
        printf("\n");
    }
    printf("\nThe Difference:\n");
    for(i=0; i<4; i++)
    {
        for(j=0; j<4; j++)
        {
            printf("%d ",d[i][j]);
        }
        printf("\n");
    }

    return 0;
}

#include<stdio.h>
#include<string.h>
#define max 100
int main()
{
    char x[max],y[max];
    int i,j,n;
    printf("Enter string 1: ");
    gets(x);
    printf("\nEnter number of characters: ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        y[i]=x[i];
    }
y[i]='\0';

     printf("\nstring 2 is: %s",y);
     return 0;
}


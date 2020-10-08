#include<stdio.h>
#include<string.h>
#define max 1000
int main()
{
    char x[max],y[max];
    int i,n=1;
    printf("Enter string: ");
    gets(x);

    for(i=0; x[i]!='\0'; i++)
    {
          printf("%c",x[i]);
        if(x[i]==' ')
        {
            printf("\n");
            n++;

        }


    }
    printf("\n\nNumber of words: %d",n);


    return 0;
}



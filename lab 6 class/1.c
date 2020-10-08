#include <stdio.h>
#define MAX 100
int main()
{
    char x[MAX], y[MAX];
    int i, len=0,n;


    printf("Enter any string: ");
    gets(x);
    for(i=0;x[i]!='\0';i++)
    {
        len++;
    }
   n=len;
     y[n]='\0';
    for(i=0;i<len;i++)
    {
         n--;
        y[n]=x[i];

    }

    printf("%d\n",len);
    printf("%s\n",y);
    return 0;
}

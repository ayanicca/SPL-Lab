#include<stdio.h>
#include<string.h>
char mystrlen(char x[])
{
    int i,k=0;
 for(i=0;x[i]!='\0';i++)
{
    k++;
}
printf("%d\n",k);
return 0;

}
char mystrrev(char x[])
{
    char y[100];
    int i,len=0,n;
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
    printf("%s\n",y);
    return 0;
}

void main()
{
    char x[100],y;
    int m,n;
    printf("Enter a String:");
    gets(x);
    m=mystrlen(x);
    y=mystrrev(x);


}




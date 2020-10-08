#include <stdio.h>

#include <string.h>

int main()
{
	char a[100],b,c[100];
	int n,i,j,x,count=0,total=0;
	printf("Enter a String:");
	gets(a);
	printf("Insert Position:");
scanf("%c",&b);
	printf("Given Position:");
	scanf("%d",&n);

	for (i=0;a[i]!='\0';i++)
    {
        count++;
    }

    for(i=0;i<=count;i++)
    {
        if(i<n)
        {
            c[i]=a[i];
        }

     if(i==n)
        {
            c[i]=b;

        }
        if(i>n)
        {
            c[i]=a[i-1];
        }


    }
c[i]='\0';
      puts(c);


return 0;
}

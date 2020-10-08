#include <stdio.h>
#include <string.h>
int rev_string(char x[], int i, int j);

int main()
{

    char a[500];
    int k;
    printf("Enter any string:");
    gets(a);

   k=strlen(a);
     rev_string(a, 0, k-1);
 printf("Reversed String is: %s", a);

    return 0;
}

int rev_string(char x[],int i, int j)
{
    char ch;
    if (i >= j)
       return;

   ch  = x[i];
   x[i] = x[j];
   x[j]= ch;

    rev_string(x, ++i, --j);

}

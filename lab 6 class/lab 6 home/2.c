#include <stdio.h>
#define max 100
#define max_char 255


int main()
{
    char a[max];
    int b[max_char];
    int i = 0, x;
    int ascii;

    printf("Enter any string:");
    gets(a);


    for(i=0; i<max_char; i++)
    {
        b[i] = 0;
    }



    i=0;
    while(a[i] != '\0')
    {
        ascii = (int)a[i];
        b[ascii] += 1;

        i++;
    }



    x = 0;
    for(i=0; i<max_char; i++)
    {
        if(b[i] > b[x])
            x = i;

    }


    printf("\n%c %d ", x, b[x]);

    return 0;
}

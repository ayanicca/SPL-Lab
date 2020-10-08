#include <stdio.h>
int main() {

    int i,vowels=0,n;
    char b[10];
    printf("How many alphabets:");
    scanf("%d",&n);
    char x[n];
    //ignore enter
    gets(b);
    printf("Enter the alphabets: ");
    for(i=0;i<n;i++)
    {
        scanf("%c",&x[i]);

    }

    for(i=0;i<n;i++)
    {
        if(x[i] == 'a' || x[i] == 'e' || x[i] == 'i' ||
            x[i] == 'o' || x[i] == 'u' || x[i] == 'A' ||
            x[i] == 'E' || x[i] == 'I' || x[i] == 'O' ||
            x[i] == 'U')
            {
               vowels++;
            }

    }

    printf("The numbers of vowels is:%d", vowels);

    return 0;
}

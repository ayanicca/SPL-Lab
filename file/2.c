#include<stdio.h>
#include<string.h>

struct string
{
    char str[100];


};
int main()

{

    struct string n1,n2;
    int i,l,m,k,j;

    char ch[1000];
    FILE *x,*y;
    x=fopen("input_2.txt","r");

    if (x == NULL)
    {
        printf("File does not exist");
    }

    //input
    else
    {
    fgets(n1.str,100,x);
    fgets(n2.str,100,x);
    }

    //The reverse of string 1

    y=fopen("output_2.txt","w");
    if (y == NULL)
    {
        printf("File does not exist");
    }
    else
    {

        fprintf(y,"The reverse of string 1:");


        char a=strrev(n1.str);

        fputs(n1.str,y);
        fprintf(y,"\n");
          strrev(n1.str); //make original string


        //The length of string 2
        fprintf(y,"The length of string 2: ");

         m=strlen(n1.str);
        l=strlen(n2.str);
       fprintf(y,"%d",l);
        fprintf(y,"\n");

        //The first character of string 1   && The last character of string 2
        for(i=0;n1.str[i]!='\0';i++)
        {
          if(i==0)
            {
           fputc(n1.str[i],y);
            }
        }
        fprintf(y,"\n");
        fputc(n2.str[l-1],y);
         fprintf(y,"\n");


         //•	The concatenation of string 1 and string 2
         fprintf(y,"The concatenation of string 1 and string 2: ");

          for(i=0;n1.str[i]!='\n';i++)
        {

           fputc(n1.str[i],y);

        }
          fputs(n2.str,y);

 printf("File written successfully\n ");
    }



    return 0;
}

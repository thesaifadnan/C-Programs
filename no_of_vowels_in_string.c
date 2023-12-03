//COUNTING NO. OF VOWELS IN A STRING OR SENTENCE ( C PROGRAM )

#include <stdio.h>
#include <string.h>

int main()
{
    char str[1000000];
    int a=0,e=0,i=0,o=0,u=0;
    printf("Enter the Sentence: ");
    gets(str);
    int str_size = strlen(str);
    for(int n=0 ; n<=str_size ; n++)
    {
        if(str[n]=='A' || str[n]=='a')
        {
            a++;
        }
        if(str[n]=='E' || str[n]=='e')
        {
            e++;
        }
        if(str[n]=='I' || str[n]=='i')
        {
            i++;
        }
        if(str[n]=='O' || str[n]=='o')
        {
            o++;
        }
        if(str[n]=='U' || str[n]=='u')
        {
            u++;
        }
        
    }

    printf("A = %d\n" ,a );
    printf("E = %d\n" ,e );
    printf("I = %d\n" ,i );
    printf("O = %d\n" ,o );
    printf("U = %d\n" ,u );
    
    return 0;
}
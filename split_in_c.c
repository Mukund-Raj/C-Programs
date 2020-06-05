#include<stdio.h>
#include<string.h>

int main()
{
    char the_string[]="I am iron man";

    int ns=0;
    char words[10][10];
	
	
	
    int k=0;
	int i=0;
	
    for( i=0;i<the_string[i]!='\0';i++)
    {
        if(the_string[i]==' ')
        {
            
            //for extracting the word from the variable the_string
            //so that we can fill the word with the text that is in
            //the_string variable

            int m=0,j;
            for ( j = ns; j < i; j++)
            {
                words[k][m++]=the_string[j];
            }
            words[k][m]='\0';
            
            k++;
            
            ns=i+1;
        }
    }
	
	int m=0,j;
    for ( j = ns; j < the_string[j]!='\0'; j++)
    {
       words[k][m++]=the_string[j];
    }
    
    i=0;
	
	for(i=0;i<10;i++)
	{	
		puts(words[i]);
	
	}

}

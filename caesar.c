#include <cs50.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <ctype.h>

int main(int argc, string argv[])
{
    if (argc != 2)
    {
        printf("Usage: ./caesar key");
        return 1;
        
    }
    
    int k = atoi(argv[1]);
    
    if ( k < 0 || k > 26 )
    {
        printf("key is incorrect. Key not within domain 0-26.");
        return 1;
    }
    
    string p = GetString();
    
    for (int i =0, n =strlen(p); i<n ; i++)
    {
        if (isupper(p[i]))
        {
            int original_letter = p[i];
            int new_letter = (( original_letter + k - 65) % 26 ) + 65;
        
            printf("%c", new_letter);
        }
        
        else if (islower(p[i]))
        {
            int original_letter = p[i];
            int new_letter = (( original_letter + k - 97) % 26 ) + 97;
        
            printf("%c", new_letter);
            
        }
        
        else {
            printf("%c", p[i]);
        }
    }
    return 0;
    
}
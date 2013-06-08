//
//  main.c
//  CryptoDegree
//
//  Created by Marco Manzoni on 07/06/13.
//

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void function(const char *origin_path ,const char *destination_path , int key);

#define MAX_MESSAGE_LENGHT 50000 //maximum length of the message inside the origin file

char message[MAX_MESSAGE_LENGHT];

int main(int argc, const char * argv[])
{
    if (argc < 4 || argc > 4)
    {
        printf("*** ERROR *** \n");
        printf("Please read the README file for the instruction on how to run the program correctly. \n\n");
        return 0;
    }
    
    function(argv[1] , argv[2] ,atoi(argv[3]));
    
    return 0;
}

void function(const char *origin_path ,const char *destination_path ,int key)
{
    int character;
    int index = 0;
    FILE *file = fopen(origin_path, "r");
    if (file)
    {
        /* this while loop read each character of the origin file, perform a XOR between the asci value
         of the character and the key, and "save" the result in an array of characters */
        while ((character = getc(file)) != EOF)
        {
            message[index] = (char)character^key;
            index++;
        }
            
        fclose(file);
    }
    else
    {
        printf("Error while opening the origin file \n");
    }
    
    /* save the encrypted message into the destination file */
    FILE *fp = fopen(destination_path, "a");
    if (fp != NULL)
    {
        fputs(message, fp);
        fclose(fp);
    }
    
    
    
}



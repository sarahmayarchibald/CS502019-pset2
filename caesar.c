#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int main(int argc, string argv[])
{
    //verify if user provides none or more than two arguments
    if (argc != 2)
    {
        //display message and returns 1 as unsuccessful program
        printf("Usage: ./caesar key\n");
        return 1;
    }

    //Checks that each character is a digit in ASCII
    for (int i = 0, n = strlen(argv[1]); i < n; ++i)
    {
        if (argv[1][i] < 48 || argv[1][i] > 57)
        {
            printf("Usage: ./caesar key\n");
            return 1;
        }

        //Converts string input to an int
        int k = atoi(argv[1]);

        //prompt user for plaintext input
        string plaintext = get_string("plaintext: ");
        printf("ciphertext: ");
        for (int j = 0, m = strlen(plaintext); j < m; j++)
        {
            //check that each character is upper or lower cases
            if islower(plaintext[j])
            {
                printf("%c", (((plaintext[j] + k) - 97) % 26) + 97);
            }
            else if isupper(plaintext[j])
            {
                printf("%c", (((plaintext[j] + k) - 65) % 26) + 65);
            }
            else
            {
                printf("%c", plaintext[j]);
            }
        }
        printf("\n");
        return 0;
    }
}

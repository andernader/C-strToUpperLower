#include <stdio.h>
#include <stdlib.h>
#include "myHeaderFile.h"

int main()
{
    char sentence[100]; //Declare sentence array of 100 character
    char temp; //temp Variable for storing either 1 or 2 for either Uppercase or Lowercase

    //Get input data
    printf("%s - %s\n%s\n\n", __TIME__, __DATE__, "Ammar Mullaoglu");
    printf("Welcome to strToUpper/ToLower\n\n");
    printf("Do you want to change your sentence to Upper case, Lower case or special case?\n");
    printf("P.S: Special case is you choosing which letter to change to either upper case or lower case.\n\n");
    printf("Press 1 for Uppercase, 2 for Lowercase and 3 for special case : ");
    scanf("%c", &temp);
    getchar();
    printf("\nEnter your sentence :\n");
    fgets(sentence, sizeof(sentence), stdin);

    //Choose function
    if(temp == '1')
        strToUpper(sentence);
    else if(temp == '2')
        strToLower(sentence);
    else if(temp == '3')
        strSpecial(sentence);
}

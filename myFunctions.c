#include <stdio.h>
#include <ctype.h>
#include "myHeaderFile.h"

void strToUpper(char str[]){
    for(int i = 0; str[i] != '\0'; i++){
        str[i] = toupper(str[i]);
    }
    printf("\n%s", str);
};

void strToLower(char str[]){
    for(int i = 0; str[i] != '\0'; i++){
        str[i] = tolower(str[i]);
    }
    printf("\n%s", str);
};

void strSpecial(char str[]){
    printf("\nEnter the index of the letter you want to change and whether to Upper case or to Lower case");
    printf("\nExample: 1u => change the second letter to upper case\n\n");
    char temp[2];
    scanf("%s", &temp);
    char index = temp[0] - '0';
    char state = temp[1];
    if(state == 'u'){
        str[index] = toupper(str[index]);
    }else if(state == 'l'){
        str[index] = tolower(str[index]);
    }
    printf("\n%s\n", str);
    printf("index = %d\nstate = %c\n", index, state);
};

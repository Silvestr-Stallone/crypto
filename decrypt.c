#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include "heads.h"


//void decrypt(char* Sstr, char* Dstr, int* list)
void decrypt(char* str, int* list)
{
    for(short c = 0; str[c] != '\0'; c++)
    {
        int key = list[c];
        char Scharacter = str[c];
        char temp = (Scharacter - 97 - key) % 26;
        if(temp < 0) temp += 26;
        char Dcharacter = temp + 97;

        printf("%c", Dcharacter);
    }
}


void mode_decrypt(void)
{
    char string[MAX] = {}; // <- для открытого
    char key[(int)(MAX/2)] = {};     // <- ключ, сначала он с мусором и нулями
    int Ikey[(int)(MAX/2)] = {};     // <- ключ, готовый для вызова decrypt

    printf("Enter crypto text\n-> ");
    scanf("%s", string);
    printf("\nEnter key\n-> ");
    scanf("%s", key);

    printf("\nYour crypto text -> %s\nYour key -> %s\n\n", string, key);

    //for(short c = 0; key[c] != '\n' && c < strlen(string)*2; c+=2)
    for(short c = 0, g = 0; c < strlen(string)*2; c+=2, g++)
    {
        char temp_value[3];
        temp_value[0] = key[c];
        temp_value[1] = key[c+1];
        temp_value[2] = '\0';

        Ikey[g] = atoi(temp_value);
    }

    printf("Source text -> ");
    decrypt(string, Ikey);
    printf("\n");
}

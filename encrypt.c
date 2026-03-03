#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include "heads.h"

void encrypt(char* Sstr, char* Estr, int* list)
{
    int indx = 0;
    for(short c = 0; Sstr[c] != '\0'; c++)
    {
        int key = (rand() % 26) + 5;
        char Scharacter = Sstr[c];
        char Echaracter = (
                (
                 (
                  (Scharacter - 97)
                  + key)
                 % 26)
                + 97
                );

        Estr[c] = Echaracter;

        //char SK[3];//String Key
        list[c] = key;
        indx++;

        //printf("%d %d %d\n", Sstr[c], Estr[c], list[c]);
    }
    //while(indx != MAX-1) list[indx++] = rand() % 26 + 5;
    //Для мусора
}

void mode_encrypt(void)
{
    char Sstring[(int)(MAX/2)] = "";
    char Estring[(int)(MAX/2)] = "";
    int key[MAX] = {};

    input(Sstring);

    encrypt(Sstring, Estring, key);

    printf("Source string  -> %s\nEncrypt string -> %s\nKey            -> ", Sstring, Estring);


    size_t len = strlen(Sstring);
    for(short c = 0; c < len && c < MAX-1; c++)
    {
        if(key[c] > 9) printf("%d", key[c]);
        else printf("0%d", key[c]);
    }
    printf("\n");
}


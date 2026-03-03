#include <stdio.h>
#include <string.h>
#include "heads.h"

int interface(void)
{
    int mode = 0;

    while(1)
    {
        if(mode) break;
        switch(preview())
        {
            case(0):
                {
                    puts("Invalid input");
                    break;
                }
            case(1):
                {
                    mode = 1;
                    break;
                }
            case(2):
                {
                    mode = 2;
                    break;
                }
            case(3):
                {
                    puts("Hey");
                    break;
                }
        }
    }

    return mode-1;
}

int preview(void)
{
    printf("MAX SIZE STRING -> %d\nSelect mod:\nEncrypt -> 1\nDecrypt -> 2\nSay hey -> 3\n\n-> ", MAX-1);

    int mode;

    scanf("%d", &mode);

    if(mode >= 1 && mode <= 3) return mode;

    int c;
    while((c = getchar()) != '\n' && c != EOF);
    
    return 0;
}

void down(char* str)
{
	for(short c = 0; str[c] != '\0'; c++)
	{
		if(str[c] < 97) str[c] += 32;
	}
}

void input(char* string)
{
    printf("\nEntry string\n-> ");

    char x;
    char *temp = string;

    while((x = getchar()) != '\n' && x != EOF);

    for(short c = 0; c < MAX - 1 && ((x = getchar()) != '\n' && x != '\0'); c++)
    {
        if((x >= 97 && x <= 122) || (x >= 65 && x <= 90)) *temp++ = x;
    }
    down(string);

    printf("your string    -> [%s]\n", string);
}

void output(void)
{
}

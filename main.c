#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "heads.h"


int main(void)
{
	srand(time(NULL));

    int mode = interface();

    if(!mode) //encrypt
    {
        mode_encrypt();
    }
    else // decrypt
    {
        mode_decrypt();
    }

	return 0;
}

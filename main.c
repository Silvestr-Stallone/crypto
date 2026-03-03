#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "heads.h"

	//char Sstring[100] = {"abcdefghijklmnopqrstuvwxyz"};

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





/*
 *
 * Планы:
 * 1. Усложнить ключ путем добавления мусорных в опредленные индесы известные только отправителю и получателю.
 *    Это будет как доп. функиця и пользователи должны вводить её вручную
 *
 * 2. Сделай размер ключа фиксированным как в результате работы хэш-функ.
 *
*/

/*
 * 1. Преобразовать к 0 - 25
 * 2. Прибивить ключ
 * 3. Вычесть остаток ключа от символа
 * 4. Привести обратно в аски
*/


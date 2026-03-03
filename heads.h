#ifndef __SNUS__
#define __SHUS__
#define MAX 100

void input(char*);
void output(void);

void encrypt(char*, char*, int*);
void decrypt(char*, int*);

int preview(void);
int interface(void);

void mode_encrypt(void);
void mode_decrypt(void);

void down(char*);

#endif

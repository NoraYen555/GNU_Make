#include "../include/reverse.h"
char *reverse(char *dest, const char *src) 
{
	for(int i = 0; i < 10; i++){
		dest[i] = src[10 - i - 1];
	}
	dest[10] = '\0';
	return dest;
}

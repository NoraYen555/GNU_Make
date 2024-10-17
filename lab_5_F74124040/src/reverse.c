#include "../include/reverse.h"
char *reverse(char *dest, const char *src) 
{
	for(int i = 0; i < 9; i++){
		dest[i] = src[9 - i - 1];
	}
	dest[9] = '\0';
	return dest;
}

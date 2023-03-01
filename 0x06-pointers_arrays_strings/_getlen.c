#inlcude "main.h"

int _getLen(char *str)
{
	int count, i;

	count = 0;

	for (i = 0; str[i] != '\0'; i++, count++)
	       ;
	return (count);	
}

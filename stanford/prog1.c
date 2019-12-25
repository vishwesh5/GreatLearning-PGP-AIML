#include <string.h>
#include <stdio.h>
void main ()
{
char src[40]="Hello world \0 Extra string";
char dest[40];
// copy to dest (destination) from src (source)
strcpy (dest, src);
}

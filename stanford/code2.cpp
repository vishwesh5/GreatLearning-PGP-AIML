#include <string.h>

void foo (char *str)
{
	char buffer[12];

	strcpy(buffer, str);
}

int main()
{
	char *str = "This is definitely longer than 12 characters";

	foo(str);

	return 1;
}

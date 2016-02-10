#include <stdio.h>

int main()
{
	char me[] = "Hello World";
	int i = 0;
	while (me[i])
	{
		printf("%c", me[i]);
		i++;
	}
	printf("\nString length is %i \n", i);

	return(0);
}


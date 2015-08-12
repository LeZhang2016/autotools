# include "customA.h"
# include <stdlib.h>
# include "../inc/config.h"

int main(void)
{
	printf("Running %s\n", PACKAGE_STRING);
	printHelpLibA();

	return 0;
}

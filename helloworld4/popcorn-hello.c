#include <stdio.h>

#include "migrate.h"

int main(int argc, char *argv[])
{
	printf("hello, world (node %d)\n", current_nid());

	migrate(0,0,0);

	printf("hello, world (node %d)\n", current_nid());

	return 0;
}

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

int main(int argc, char **argv)
{
	char cwd[1024];
	getcwd(cwd, sizeof(cwd));

	chdir(argv[1]);
	
	system(argv[2]);
	
}
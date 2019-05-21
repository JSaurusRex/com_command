#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

int main(int argc, char **argv)
{
	if(argc < 3) {printf("not enough arguments: com directory command\n"); return 0;}
	char cwd[1024];
	getcwd(cwd, sizeof(cwd));

	chdir(argv[1]);
	
	char* command;
	int length = 0;
	for(int i = 2; i < argc; i++) length += strlen(argv[i]) + 1;
	command = malloc(length + 1); /* make space for the new string (should check the return value ...) */
	
	strcpy(command, argv[2]);
	for(int i = 3; i < argc; i++) 
	{
		strcat(command, " ");
		strcat(command, argv[i]); /* copy name into the new var */
	}



	system(command);
	return 0;
	
}
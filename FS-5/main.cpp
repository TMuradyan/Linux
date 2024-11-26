#include <stdio.h>
#include <string.h>
#include <fcntl.h>
#include <sys/types.h>
#include <unistd.h>
#include <errno.h>
#include <stdlib.h>

int main(int argc, char** argv)
{
	if (argc < 2)
	{
		printf("Invalid arguments\n");
		exit(1);
	}

	int f1 = open(argv[1], O_WRONLY | O_CREAT, S_IRUSR | S_IWUSR | S_IRGRP);
	if (f1 == -1)
	{
		printf("Something went wrong\n");
		exit(errno);
	}

	int f2 = dup(f1);
	if (f2 == -1)
	{
		printf("Something went wrong\n");
		close(f1);
		exit(errno);
	}

	const char* str1 = "fisrt line\n";
	const char* str2 = "secod line\n";
	if (write(f1, str1, strlen(str1)) < 0)
	{
		printf("Something went wrong\n");
		close(f1);
		close(f2);
		exit(errno);
	}

	if (write(f2, str2, strlen(str2)) < 0)
	{
		printf("Something went wrong\n");
		close(f1);
		close(f2);
		exit(errno);
	}
	close(f1);
	close(f2);
	return 0;
}

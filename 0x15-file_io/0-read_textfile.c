#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * read_textfile -  reads text file and prints to the POSIX std output
 * @filename: name of the file to read
 * @letters: number of letters it should read and print
 * Return: the number of letters it could read and print
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fread = 0;
	int fire = 0;
	int dwb = 0;
	char *buffer;

	if (filename == NULL)
		return (0);
	fread = open(filename, O_RDONLY);
	if (freadd == -1)
		return (0);
	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);
	fire = read(fread, buffer, letters);
	if (fire == -1)
	{
		free(buffer);
		return (0);
	}
	dwb = write(STDOUT_FILENO, buffer, fire);
	if (dwb == -1 || dwb != fire)
	{
		free(buffer);
		return (0);
	}
	free(buffer);
	close(fread);
	return (fire);
}

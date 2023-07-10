#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include "main.h"
#include <stdlib.h>
/**
 * create_file - creates a file
 * @filename: name of file be created
 * @text_content: text to put in file
 * Return: 1 on success
 */

int create_file(const char *filename, char *text_content)
{
	int file1 = 0;
	int file2 = 0;
	int holder = 0;

	if (filename == NULL)
		return (-1);
	file1 = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	if (file1 == -1)
		return (-1);

	if (text_content == NULL)
		text_content = "";
	while (text_content[holder] != '\0')
		holder = holder + 1;

	file2 = write(file1, text_content, holder);
	if (file2 == -1)
	{
		close(file1);
		return (-1);
	}
	close(file1);
	return (1);
}

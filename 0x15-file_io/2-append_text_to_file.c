#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include "main.h"
#include <stdio.h>
#include <unistd.h>
/**
 * append_text_to_file - appends text at the end of a file.
 * @filename: name of file
 * @text_content: text to append
 * Return: 1 on success or -1 if failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int file1 = 0;
	int file0 = 0;
	int holder = 0;

	if (filename == NULL)
		return (-1);
	file1 = open(filename, O_RDWR | O_APPEND);
	if (file1 == -1)
		return (-1);
	if (text_content == NULL)
		return (1);
	while (text_content[holder] != '\0')
	{
		holder = holder + 1;
	}
	file0 = write(file1, text_content, holder);
	if (file0 == -1)
		return (-1);
	close(file1);
	return (1);
}


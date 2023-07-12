#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <errno.h>

#define BUFFER_SIZE 1024

char buffer[BUFFER_SIZE];
int bytes_read;
char *file_from = argv[1];
char *file_to = argv[2];

int fd_to = open(file_to, O_WRONLY | O_TRUNC | O_CREAT, 0664);
int fd_from = open(file_from, O_RDONLY);

int main(int argc, char *argv[]) {
  if (argc != 2) {
    dprintf(2, "Usage: cp file_from file_to\n");
    exit(97);
  }

  if (fd_from < 0) {
    dprintf(2, "Error: Can't read from file %s\n", file_from);
    exit(98);
  }

  if (fd_to < 0) {
    dprintf(2, "Error: Can't write to file %s\n", file_to);
    exit(99);
  }

  while ((bytes_read = read(fd_from, buffer, BUFFER_SIZE)) > 0) {
    write(fd_to, buffer, bytes_read);
  }

  close(fd_from);
  close(fd_to);

  return 0;
}


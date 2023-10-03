#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>

/**
 * read_textfile - Reads a text file and prints it to the POSIX stdout.
 * @filename: The name of the file to read.
 * @letters: The number of letters to read and print.
 *
 * Return: The actual number of letters read and printed. If the file cannot
 * be opened or read, return 0.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t num_read, num_written;
	char *buffer;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);

	if (fd == -1)
		return (0);

	buffer = malloc(sizeof(char) * letters);

	if (buffer == NULL)
	{
		close(fd);
		return (0);
	}

	num_read = read(fd, buffer, letters);
	close(fd);

	if (num_read == -1)
	{
		free(buffer);
		return (0);
	}

	num_written = write(STDOUT_FILENO, buffer, num_read);

	free(buffer);

	if (num_written == -1)
		return (0);

	return (num_written);
}

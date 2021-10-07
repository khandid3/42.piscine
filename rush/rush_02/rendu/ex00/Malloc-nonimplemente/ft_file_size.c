#include <fcntl.h>
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>

int	ft_file_size(char *fptr)
{
	int		buffer_size;
	int		fd;
	int		read_bytes;
	int		new_size;
	char	*buffer;
	
	buffer_size = 4;
	new_size = buffer_size;
	buffer = (char *) malloc(buffer_size * sizeof(char));
	fd = open(fptr, O_RDONLY);
	read_bytes = read(fd, buffer, buffer_size);
	while (buffer[new_size - 1] > 0)
	{
		new_size += buffer_size;
		free(buffer);
		buffer = (char *) malloc(new_size * sizeof(char));
		read_bytes += read(fd, &buffer[read_bytes], buffer_size);
	}
	close(fd);
	return (new_size);
}


int	main(int argc, char **argv)
{
	int	a;
	char	*fptr;

	(void) argc;
	fptr = argv[1];
	a = ft_file_size(fptr);
	printf("%d\n", a);
}

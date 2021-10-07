#include "ft_file_size.c"

void	*spell_number(char nbr, char *str)
{
	int		i;
	int		lng;
	int		fptr;
	char	bytes;
	char	*buffer;

	i = 0;
	lng = ft_strlen(nbr);
	fptr = open(str, O_RDONLY);
	buffer = malloc(ft_file_size(fptr) * sizeof(char));
	bytes = read(fptr, buffer, sizeof(buffer));
	while (buffer[i] > 0)
	{
		if (ft_strncmp(&buffer[i], nbr, lng))
		{
			while (buffer[i] == 32 || buffer[i] >= 9 && buffer[i] <= 13 )
				i++;
			i++;
			while (buffer[i] == 32 || buffer[i] >= 9 && buffer[i] <= 13 )
				i++;
			while (buffer[i] != '\n')
				write(1, &buffer[i++], 1);
			break ;
		}
		i++;
	}
	close(fptr);
	return (tmp);
}


while ((r = fread(b, sizeof(char), CHUNK, fp)) > 0) {
    n += r;
    if (np - n < CHUNK) {
      np *= 2;                      // buffer is too small, the next read could overflow!
      b2 = malloc(np*sizeof(char));
      memcpy(b2, b, n * sizeof(char));
      free(b);
      b = b2;
    }
  }


n_read = read(f1, read_buffer, buff_size - 1);
read_count = n_read;
int new_size = buff_size;
while (read_count == (buff_size - 1))
{

        new_size *= 2;
        read_buffer = realloc(read_buffer, new_size);
        n_read = read(f1, read_buffer[read_count], buff_size - 1);
        read_count += n_read;
}

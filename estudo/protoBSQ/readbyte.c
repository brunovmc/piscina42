#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>

int		main(void)
{

	int bread;
	int fd;
	char buf[1000];

	fd = open("example_file", O_RDWR);
	
	while ((bread = read(fd, buf, sizeof(buf) - 1)) > 0)
	{
		buf[bread] = 0x00;
		printf("eu li essa porra: \n %s \n", buf);
	}
	close(fd);
	return (0);
}

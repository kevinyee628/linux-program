#include "lib.h"
void catChmod(){
	int fd;
	fd = open("test.txt",O_RDONLY);
	fchmod(fd,S_IRUSR|S_IWUSR|S_IRGRP|S_IROTH);
	close(fd);
}

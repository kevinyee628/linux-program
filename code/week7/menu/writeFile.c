#include "lib.h"
void writeFile(){
	int fd, size;    
	char s[] = "Keep Coding!\n", buffer[80];    
	fd = open("temp.txt", O_WRONLY|O_CREAT);    
	write(fd, s, sizeof(s));    
	close(fd); 	
}

#include "lib.h"
void readFile(){
	
	//char buffer[5];
	//int fd,size;
	//fd = open("read.txt",O_RDONLY);
	//size = read(fd,buffer,5);
	//close(fd);
	//printf("%s",buffer);
	int fd, size;        
	char buffer[80];
	fd = open("temp.txt", O_RDONLY);    
	size = read(fd, buffer, sizeof(buffer));    
	close(fd);    
	printf("%s", buffer);
	//free(buffer);
	
}

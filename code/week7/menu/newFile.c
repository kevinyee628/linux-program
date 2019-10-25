#include "lib.h"
void newFile(){
	const char* pathname;
	int fd;
	//char pn[100];
	//printf("Please input pathname\n");
	//scanf("%s",pn);
	//pathname = pn;
	if((fd = open("test.txt",O_WRONLY | O_CREAT | O_TRUNC,S_IRWXU | S_IXGRP | S_IROTH | S_IXOTH)) == -1){
		printf("open file error\n");
		exit(0);
	}
	printf("open file successful\n");;
}

#include "lib.h"
void chmodFile(){
	struct stat statbuf;
	//if ()
	//	err_sys("stat error ");
	chmod("test.txt",S_IRUSR|S_IWUSR|S_IRGRP|S_IROTH);
	
}

#include "my.h"
int main(){
	int ret;
	printf("caller1:pid=%d,ppid=%d\n",getpid(),getppid());
	execlp("/home/rlk/linux_program/code/week9/test1","123","456",NULL);
	printf("after calling!\n");
	sleep(1);
	return 0;
}

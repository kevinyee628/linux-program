#include"my.h"
int g=10;
int main(){
	int s=20;
	static int k=30;
	pid_t pid;
	pid = vfork();
	if(pid<0){
		perror("failed vfork!\n");
		exit(-1);
	}else if(pid==0){
		sleep(2);
		execl("./test","test",NULL);
		static long h = 100;
		printf("child pid = %d :&g=%16p,&k=%16p,&s=%16p\n",getpid(),&g,&k,&s);
		g = 100;
		k = 300;
		s = 200;
		printf("child pid = %d :&g=%16p,&k=%d,&s=%ld,h=%ld\n",getpid(),g,k,s,h);
		sleep(2);
		_exit(0);
		//return 0;
	}else{

		printf("\nparent pid = %d :&g=%16p,&k=%16p,&s=%16p\n",getpid(),&g,&k,&s);
		printf("parent pid = %d :&g=%d:wq,&k=%d,&s=%ld\n",getpid(),g,k,s);		
		return 0;
	}
		
}

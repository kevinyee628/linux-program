#include "lib.h"
int main(){
	int *p = NULL;
	void *handle;
	void (*f1)();
	int (*f2)(),(*f3)();
	char* error;
	handle = dlopen("/home/rlk/linux_learning/week5/libdynamic.so",RTLD_LAZY);
	p = userrand();
	if(!handle)
	{
		fprintf(stderr,"%s\n",dlerror());
		exit(1);
	}
	f1 = dlsym(handle,"show");
	if((error=dlerror())!=NULL)
	{
		fprintf(stderr,"%s\n",dlerror());
		exit(1);
	}
	f2 = dlsym(handle,"max");
	if((error=dlerror())!=NULL)
        {
              fprintf(stderr,"%s\n",dlerror());
              exit(1);
        }
	f3 = dlsym(handle,"sum");
	//printf("max=%d",max(p,10));
	//printf("sum=%d",sum(p,10));
	printf("max=%d",max(p,10));
	printf("sum=%d",sum(p,10));
	show(p,10);
	if(dlclose(handle)<0){
		fprintf(stderr,"%s\n",dlerror());
		exit(1);
	}	
	return 0;
}

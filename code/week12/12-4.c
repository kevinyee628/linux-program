#include "my.h"

#define MSG "OMG,I catch the signal SIGINT\n"
#define MSG_END "OK,finished process signal SIGINT\n"

int do_heavy_work(){
	int i;
	int k;
	srand(time(NULL));
	for (int i = 0; i < 1000000000; ++i)
	{
		/* code */
		k = rand()%1234589;
	}
	return 0;
}

void signal_handler(int signo){
	write(2,MSG,strlen(MSG));
	do_heavy_work();
	write(2,MSG_END,strlen(MSG_END));
}

int main(int argc, char const *argv[])
{
	/* code */
	char input[1024] = {0};
	if(signal(SIGINT,signal_handler)==SIG_ERR)
				{
					fprintf(stderr, "signal failed\n");
					return -1;
				}
				printf("input a string:\n");
				if (fgets(input,sizeof(input),stdin)==NULL)
				{
					/* code */
					fprintf(stderr, "fgets failed(%s)!\n", strerror(errno));
					return -2;
				}else{
					printf("you entered:%s\n", input);
				}
	return 0;
}
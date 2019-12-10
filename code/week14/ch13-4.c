#include"ch13.h"
extern int get_user_cmd();
enum command{QUIT=0,WORK /*,...*/};

struct thread
{
    /* data */
    int no;
    enum command cmd;
};
void thread_func(struct thread *);
enum command get_user_cmd(){
    int cmd;
    printf("Please enter a commannd number(0-9");
    scanf("%d",&cmd);
    return (enum command)cmd;
}
int main(int argc, char const *argv[])
{
    /* code */
    pthread_t tid;
    int rv,cmd,k=0;
    struct thread *last_thread, *tp;

    while (1)
    {
        /* code */
        cmd = get_user_cmd();
        if (cmd == QUIT)
        {
            /* code */
            printf("Inital thread will finsh soon\n");
            pthread_exit((void *)NULL);
        }

        tp = (struct thread *)malloc(sizeof (struct thread));
        tp->no = k++;
        tp->cmd = cmd;
        rv = pthread_create(&tid,NULL,
        (void *(*)())thread_func,(void *)tp);
        check_error(rv,"pthread_crate()");

        rv = pthread_detach(tid);
        check_error(rv,"pthread_detach()");
        
    }
    return 0;
}

void thread_func(struct thread *thread_p){
    printf("\nThread %d crteaed with command number %d is running\n",thread_p->no,thread_p->cmd);
    sleep(thread_p->cmd);
    printf("\nThread %d finish now\n",thread_p->no);
    pthread_exit(NULL);   
}

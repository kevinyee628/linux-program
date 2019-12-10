#include "my.h"
#define NUM_THREADS 4
struct info
{
    /* data */
    int no;
    int n;
};
struct rval
{
    /* data */
    int sum;
    pthread_t tid;
};
void hello(void * t){
    pthread_t my_tid;
    struct info *y;
    int s=0;
    y = (struct info *)(t);
    for (int i = 0; i <= y->n; i++)
    {
        /* code */
        s+=i;
    }
    my_tid=pthread_self();
    printf("\tThread %d: my tid is %lx,Hello world\n",(int)y->no+1,my_tid);
    printf("\tThread %d: sum 1 to %d is %d\n",(int)y->no,y->n,s);   
}
int main(int argc, char const *argv[])
{
    /* code */
    pthread_t tid;
    struct info a[4];
    int rv,t;
    for (t = 0; t < NUM_THREADS ;t++)
    {
        /* code */
        a[t].no=t;
        a[t].n=100*(t+1);
        //rv = pthread_create(&tid,NULL,);
    }
    
    return 0;
}



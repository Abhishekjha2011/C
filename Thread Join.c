#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <pthread.h>
void *mythreadfun(void *vargs)
{
    printf("\n Thread created");
    return NULL;
}
int main()
{
    pthread_t thread_one;
    printf("\n before thread created");
    pthread_create(&thread_one,NULL,mythreadfun,NULL);//create a thread
    pthread_join(thread_one,NULL);//wait for thread to terminate
    printf("\n after thread creation");
    exit(0);
}


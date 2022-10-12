#include <windows.h>
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <pthread.h>

void *create(void *p)
{
    long i = (long)p;

    printf("i`m thread #%li", i);
}

int main(void)
{

    for (int i = 1; i < 51; i++)
    {
        pthread_t thread;

        pthread_create(&thread, NULL, create, (void *)i)
    }

    return 0;
}
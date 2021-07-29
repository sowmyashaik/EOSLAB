#include <stdio.h>
#include <math.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>


#define BUFF_SIZE 64

int main(int argc, char const *argv[])
{
    int fd1,fd2;
    long int c;
    unsigned char buff[BUFF_SIZE];
    //printf("BUff value:%s\n",buff);
    fd1 = open(argv[1],O_RDONLY);
    fd2 = open(argv[2],O_WRONLY | O_CREAT, S_IRUSR | S_IWUSR | S_IRGRP | S_IROTH);
    if(fd1 == -1 || fd2 == -1)
    {
        perror("Error in opening file");
        exit(EXIT_FAILURE);
    }
    while((c=read(fd1, buff, BUFF_SIZE))>0)
    {
    //printf("Buff : %s\n",buff);
    //printf("c is : %ld\n",c);
    //write(1, buff, c);
    write(fd2, buff, c);
    }
    close(fd2);
    exit(0);

}

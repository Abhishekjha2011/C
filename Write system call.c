#include<unistd.h>
#include<stdio.h>
#include<fcntl.h>
int main()
{
int fd= open("Hello.txt",O_WRONLY|O_CREAT,0777)
write(fd,"Demonstration of system calls",28);
printf("successful");
}

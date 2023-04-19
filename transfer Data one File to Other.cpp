#include<unistd.h>
#include<fcntl.h>
#include<stdio.h>
int main()
{
	int fd=open("CA.txt",O_RDONLY |O_CREAT,0777);
	int n=lseek(fd,0,SEEK_END);
	int a=n/2;
	lseek(fd,0,SEEK_SET);
	char buf[a];
	read(fd,buf,a);
	int fd1=open("CA1.txt",O_RDWR|O_CREAT,0777);
	write(fd1,buf,a);
	int fd2=open("CA2.txt",O_RDWR|O_CREAT,0777);
	read(fd,buf,a);
	write(fd2,buf,a);
	
	return 0;
}


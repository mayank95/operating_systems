#include <stdio.h>
#include <fcntl.h>
int main(){
	int fd,i;
	char c,p;
	fd=open("xyz",O_WRONLY);
	lseek(fd,3,SEEK_SET);
	write(fd,"K",1);
	return 0;
}
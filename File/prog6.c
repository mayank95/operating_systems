#include <stdio.h>
#include <fcntl.h>
int main(){
	int fd1,fd2,j;
	char c;
	fd1=open("pqr",O_RDONLY);
	fd2=open("xyz",O_WRONLY);
	j=lseek(fd2,-1,SEEK_END);
	lseek(fd2,j,SEEK_SET);
	while(read(fd1,&c,1)){
		write(fd2,&c,1);
	}
	return 0;
}
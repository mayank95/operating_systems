#include <stdio.h>
#include <fcntl.h>
int main(){
	int fd,i,j=4,k;
	char c;
	fd=open("xyz",O_RDONLY);
	lseek(fd,6,SEEK_SET);
	lseek(fd,-1,SEEK_CUR);
	read(fd,&c,1);
	printf("%d %c\n",j,c);
	return 0;
}
#include <stdio.h>
#include <fcntl.h>
int main(){
	int fd,i=0;
	char c;
	fd=open("xyz",O_RDONLY);
	while(read(fd,&c,1)!=0){
		printf("%c",c);
	}
	//printf("%d\n",i);
	return 0;
}
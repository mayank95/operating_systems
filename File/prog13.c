#include <stdio.h>
#include <fcntl.h>
int main(){
	int fd,i,j,pos=-1,sz=0;
	char c;
	fd=open("xyz",O_RDONLY);
	while(read(fd,&c,1)){
		if(c==' ')
			pos=sz;
		sz++;
	}
	//printf("%d\n",sz);
	lseek(fd,pos+1,SEEK_SET);
	while(read(fd,&c,1)){
		printf("%c",c);
	}
	return 0;
}
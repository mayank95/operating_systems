#include <stdio.h>
#include <fcntl.h>
int main(){
	int fd,i;
	fd=open("xyz",O_RDWR);
	char c;
	while(read(fd,&c,1)!=0){
		if(c=='a'){
			int j=lseek(fd,-1,SEEK_CUR);
			lseek(fd,j,SEEK_SET);
			write(fd,"K",1);
		}
	}
	return 0;
}
#include <stdio.h>
#include <fcntl.h>
int main(){
	int fd,i,cnt=0;
	char c;
	fd=open("xyz",O_RDONLY);
	while(read(fd,&c,1)){
		cnt++;
	}
	//printf("%d\n",cnt);
	for(i=1;i<=cnt;i++){
		int temp=lseek(fd,-1*i,SEEK_END);
		lseek(fd,temp,SEEK_SET);
		read(fd,&c,1);
		printf("%c",c);
	}
	return 0;
}
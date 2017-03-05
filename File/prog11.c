#include <stdio.h>
#include <fcntl.h>
int main(){
	int fd,i,sz=0,k;
	char p,c;
	fd=open("xyz",O_RDWR);
	printf("Give the character\n");
	scanf("%c",&p);
	while(read(fd,&c,1)){
		sz++;
	}
	printf("%d\n",sz);
	for(i=1;i<=sz-1;i++){
		lseek(fd,sz-1-1*i,SEEK_SET);
		read(fd,&c,1);
		lseek(fd,sz-1*i,SEEK_SET);
		write(fd,&c,1);
		printf("%c\n",c);
	}
	lseek(fd,0,SEEK_SET);
	write(fd,&p,1);
	return 0;
}

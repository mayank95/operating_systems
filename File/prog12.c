#include <stdio.h>
#include <fcntl.h>
int main(){
	int fd,i,sz=0,j,szz;
	char c,p;
	fd=open("xyz",O_RDWR);
	printf("Give the character\n");
	scanf("%c",&p);
	while(read(fd,&c,1)){
		sz++;
	}
	szz=sz;
	for(i=1;i<=sz-2;i++){
		for(j=1;j<=sz-i-1;j++){
		lseek(fd,szz-1-1*j,SEEK_SET);
		read(fd,&c,1);
		lseek(fd,szz-1*j,SEEK_SET);
		write(fd,&c,1);
		//printf("%c\n",c);
		}
		lseek(fd,2*i-1,SEEK_SET);
		write(fd,&p,1);
		szz++;
	}
	return 0;
}
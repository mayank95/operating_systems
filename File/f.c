#include <stdio.h>
#include <fcntl.h>
int main(){
	int fd,i;
	char a[10];
	a[3]=78;
	fd=open("adc",O_RDONLY);
	i=read(fd,a,5);
	printf("%d %d %d ",i,a[0],a[1]);
	printf("%d %d\n",a[2],a[3]);
	return 0;
}
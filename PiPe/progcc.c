#include <stdio.h>
#include <fcntl.h>
int main(){
	int p[2],i;
	char c;
	pipe(p);
	printf("%d%d",p[0],p[1]);
	write(p[1],"ABC",3);
	lseek(p[0],2,0);
	read(p[0],&c,1);
	printf("%c",c);
	return 0;
}
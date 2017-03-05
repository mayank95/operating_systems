#include <stdio.h>
#include <fcntl.h>
int main(){
	int p[2],i;
	char c;
	pipe(p);
	close(p[0]);
	write(p[1],"KLT",3);
	printf("abc\n");
	return 0;
}
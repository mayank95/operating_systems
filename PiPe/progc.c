#include <stdio.h>
#include <fcntl.h>
#include <signal.h>
void pqr(){
	printf("TT");
}
int main(){
	int p[2],i;
	signal(SIGPIPE,pqr);
	pipe(p);
	close(p[0]);
	write(p[1],"KLT",3);
	printf("abc\n");
	return 0;
}
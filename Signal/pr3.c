#include <stdio.h>
#include <signal.h>
int n;
void k(){
	printf("Whether you want to terminate\n");
	scanf("%d",&n);
	if(n==0)
		kill(getpid(),SIGQUIT);
}
int main(){
	signal(SIGINT,k);
	for(;;);
	return 0;
}
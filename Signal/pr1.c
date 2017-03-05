#include <stdio.h>
#include <signal.h>
int c=0;
void k(){
	c++;
	printf("AA\n");
	if(c==5)
		signal(SIGINT,SIG_DFL);
}
int main(){
	signal(SIGINT,k);
	for(;;);
	return 0;
}
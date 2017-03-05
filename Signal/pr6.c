#include <stdio.h>
#include <signal.h>
void k(){
	kill(getpid(),SIGQUIT);
}
int main(){
	signal(SIGINT,k);
	while(1){
		printf("Z");
	}
	return 0;
}
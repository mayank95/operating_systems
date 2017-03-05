#include <stdio.h>
#include <signal.h>
char c='Z';
void k(){
	c='Y';
}
int main(){
	signal(SIGINT,k);
	while(1){
		printf("%c",c);
	}
	return 0;
}
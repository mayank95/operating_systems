#include <stdio.h>
#include <signal.h>
void k();
void m(){
	printf("QQ\n");
	signal(SIGINT,k);
}
void k(){
	printf("PP\n");
	signal(SIGINT,m);
}
int main(){
	signal(SIGINT,k);
	for(;;);
	return 0;
}

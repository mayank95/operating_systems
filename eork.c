#include <stdio.h>
int eork(){
	int p;
	int i,ppid=0,gpid=0;
	for(i=0;i<10;i++){
		p=fork();
		if(p!=0)
			break;
		gpid=ppid;
		ppid=getppid();
	}
	return gpid;
}
int main(){
	int q;
	q=eork();
	printf("%d ",getpid());
	printf("%d ",getppid());
	printf("%d\n",q);
	sleep(1);
	return 0;
}
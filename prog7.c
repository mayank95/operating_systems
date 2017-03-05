#include <stdio.h>
int aork(){
	int p;
	p=fork();
	if(p==0)
		return getppid();
	else 
		return p;
}
int bork(){
	int p,q;
	p=fork();
	if(p!=0)
		q=fork();
	if((p!=0)&&(q!=0))
		return q;
	else if(p==0)
		return getppid();
	else
		return p;
}
int main(){
	int q;
	q=bork();
	printf("%d ",getpid());
	printf("%d ",getppid());
	printf("%d\n",q);
	sleep(1);
	return 0;
}
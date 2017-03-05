#include <stdio.h>
int cork(){
	int z=getpid();
	int p=fork();
	int q;
	if(p==0)
		q=fork();
	if(p!=0)
		return p;
	else if((p==0)&&(q!=0))
		return q;
	else
		return z;
}
int main(){
	int q;
	q=cork();
	printf("%d ",getpid());
	printf("%d ",getppid());
	printf("%d\n",q);
	sleep(1);
	return 0;
}
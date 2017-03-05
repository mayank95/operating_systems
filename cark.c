#include <stdio.h>
int cark(){
	int q=-1,r=-1;
	int z=getpid();
	int p=fork();
	if(p==0)
		q=fork();
	if((p==0)&&(q==0))
		r=fork();
	if(p!=0)
		return p;
	else if(q!=0)
		return q;
	else if(r!=0)
		return r;
	else
		return z;
}
int main(){
	int q;
	q=cark();
	printf("%d ",getpid());
	printf("%d ",getppid());
	printf("%d\n",q);
	sleep(1);
	return 0;
}
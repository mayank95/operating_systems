#include <stdio.h>
int main(){
	int p,q,r;
	p=fork();
	q=fork();
	r=fork();
	if(((p!=0)&&(q==0))||((p!=0)&&(q!=0)&&(r==0))){
		fork();
	}
	printf("%d\n",getpid());
	return 0;
}
#include <stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	int i;
	for(i=1;i<=n-1;i++){
		//if(p==0||q==0)
		int p=fork();
		int q;
		if(p!=0)
			q=fork();
		if((p!=0)&&(q!=0))
			break;
	}
	printf("[%d %d]",getpid(),getppid());
	sleep(2);
	return 0;
}

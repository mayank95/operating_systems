#include <stdio.h>
int dork(int n){
	int arr[n],i;
	for(i=0;i<n;i++){
		arr[i]=-1;
	}
	for(i=0;i<n;i++){
		arr[i]=fork();
	}
	int cnt=1;
	for(i=0;i<n;i++){
		if(arr[i]==0)
			cnt++;
	}
	return cnt;
}
int main(){
	int q,n;
	scanf("%d",&n);
	q=dork(n);
	printf("%d ",getpid());
	printf("%d ",getppid());
	printf("%d\n",q);
	sleep(1);
	return 0;
}
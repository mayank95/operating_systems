#include <stdio.h>
#include <signal.h>
int sum=0;
int d=0;
int temp,tem;
void u(){
	d=sum;
	++temp;
	printf("%d\n",sum);
}
int main(){
	signal(SIGFPE,u);
	while(1){
		int a;
		scanf("%d",&a);
		d=a+a;
		sum+=a;
		temp=(a>=5);
		tem=3/temp;
		printf("%d\n",d);
	}
	return 0;
}
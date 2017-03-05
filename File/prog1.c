#include <stdio.h>
#include <fcntl.h>
int main(){
	int fd,i,j,ans=3;
	char a[100];
	fd=open("xyz",O_RDONLY);
	i=read(fd,a,100);
	for(j=0;j<i;j++){
		if(a[j]=='a'){
			ans=j;
			break;
		}
	}
	printf("%d\n",ans);
	return 0;
}
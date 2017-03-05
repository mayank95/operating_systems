#include <stdio.h>
#include <fcntl.h>

int main(){
	int fd, i=0;
	char c;	
	fd = open("xyz", O_RDONLY);
	read(fd,&c,1);
	i++;
	if(c=='a'){
		printf("%d\n",i);
		return 0;
	}
	while(c!='\n'){
		read(fd, &c, 1);
		i++;
		if (c=='a'){
			printf("%d\n", i);
			return 0;
		}
	}
}
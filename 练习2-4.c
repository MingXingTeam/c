#include <malloc.h>
#include <stdio.h>//NULL
void squeeze(char *s1, char *s2){
	int i,j;
	char *tmp = s2;

	char now[100]={'\0'};
	int m,n=0;

	for(i=0;s1[i];i++){
		for(j=0,tmp=s2;tmp[j];j++){
			if(s1[i]==tmp[j]) break;
		}
		if(!tmp[j]){
			now[n++] = s1[i];
		}
	}

	for(n=0;now[n];n++){
		s1[n] = now[n];
	}
	s1[n] = '\0';
}

int main(void){
	char a[] = {"abc"};
	char b[] = {"a"};
	squeeze(a,b);
	printf("%s\n",a);
	getchar();
	return 0;
}
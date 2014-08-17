// 将字符串s1中任何与字符串s2中的字符匹配的字符都删除
#include <malloc.h>
#include <stdio.h>//NULL
//我的答案
// void squeeze(char *s1, char *s2){
// 	int i,j;
// 	char *tmp = s2;

// 	char now[100]={'\0'};
// 	int m,n=0;

// 	for(i=0;s1[i];i++){
// 		for(j=0,tmp=s2;tmp[j];j++){
// 			if(s1[i]==tmp[j]) break;
// 		}
// 		if(!tmp[j]){
// 			now[n++] = s1[i];
// 		}
// 	}

// 	for(n=0;now[n];n++){
// 		s1[n] = now[n];
// 	}
// 	s1[n] = '\0';
// }
//课本答案
void squeeze(char s1[], char s2[]){
	int i,j,k;
	for(i=k=0;s1[i]!='\0';i++){
		for(j=0;s2[j]!='\0'&&s2[j]!=s1[i];j++)//这一步更简化了
			;
		if(s2[j]=='\0'){
			s1[k++]=s1[i];//没有用缓存的数组 直接把原来的给修改了。比我处理地好。而且我的缓存大小有可能超出范围。
		}
	}
	s1[k]='\0';
}
int main(void){
	char a[] = {"abc"};
	char b[] = {"a"};
	squeeze(a,b);
	printf("%s\n",a);
	getchar();
	return 0;
}
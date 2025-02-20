#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void *Errcheck(int size){
	char *p;
	p = malloc(size);
	if(p==NULL){
		printf("Memory allocation has been failed");
		exit(-1);
	}
	return p;
}

int lencmp(char *st1 , char *st2){
	if(strlen(st1) == strlen(st2)){
		return strlen(st1);
	}
	return -1;
}

int charcmp(char *st1,char *st2){
	int max=0;
	int len = lencmp(st1,st2);
	if(len!=-1){
		for(int i =0;i<strlen(st1);i++){
			for (int j =0;j<strlen(st2);j++){
				if(st1[i] == st2[j]){
					max++;
				}
			}
		}
	}
	return max==len;
}
	
int main(){
	char *str1;
	char *str2;
	str1 = (char*) Errcheck(20*sizeof(char));
	str2= (char*) Errcheck(20*sizeof(char));
	printf("Enter  your first string :");
	scanf("%s",str1);
	printf("Enter  your Second string :");
	scanf("%s",str2);
	if(charcmp(str1,str2)==1){
		printf("The String are Anagrams ! ");
	}else{
		printf("Given string is not Anagrams ");
	}
}

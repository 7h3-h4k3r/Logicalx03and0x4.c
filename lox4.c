#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int lenofint(int num){
	int count=0;
	while(num!=0){
		num /=10;
		count++ ;
	}
	return count;
}
int armstrong(int num,int len){
	int sum=num;
	for(int i = 0;i<len-1;i++){
		num = num * sum;
	}
	return num;
	
}
	
int split(int itos,int len){
	int  j=0;
	while(itos>0){
		j += armstrong(itos % 10,len);
		itos /= 10;
	}
	return j;
}
int main(){
	int num;
	printf("Enter a number (if i check that number is Armstronge or Not) \n|_> ");
	if(scanf("%d",&num) == 1 && num<10000){
		(split(num,lenofint(num)) == num) ? printf("This is Armstrong Number") : printf("Not Armstrong Number"); 
	}else{
		printf("Invalid Input");
	}
}
	

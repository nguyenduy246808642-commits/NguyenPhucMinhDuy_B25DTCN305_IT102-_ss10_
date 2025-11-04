#include<stdio.h>
int main(){
	int i;
	int number[]={1,4,5,6,9,44};
	int flag=-1;
	int value=44;
	int size=sizeof(number)/sizeof(int);
	
	for(i=0; i<size; i++){
		if(value==number[i]){
			printf("so tim thay o vi tri (%d)",i);
			flag=1;
		}
	}
	if(flag==-1){
		printf("khong tim thay ");
	}
	return 0;
} 


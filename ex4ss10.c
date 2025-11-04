#include<stdio.h>
int main(){
	int i,j;
	int number[5]={64,25,12,22,11};
	int size=sizeof(number)/sizeof(int);

	
	printf("so khi chua sap xep la:");
	for(i=0; i<size; i++){
		printf("%d  ",number[i]);
	}
	
	for(i=0; i<size; i++){
		for(j=0; j<size-1-i; j++){
			if(number[j+1]<number[j]){
				int temp=number[j];
				number[j]=number[j+1];
				number[j+1]=temp;
			}
		}
	}
	printf("\n\nso sau khi sap xep la:");
	for(i=0; i<size; i++){
		printf("%d  ",number[i]);
	}
	return 0;
}


#include<stdio.h>
int main(){
	int i;
	int arr[6]={1,2,3,4,2,2};
	int value=2;
	int size = sizeof(arr)/sizeof(int);
	int dem=0;
	
	for(i=0; i<size; i++){
		if(arr[i]==value){
			dem++;
		}
	}
	printf("so lan so %d xuat hien la:%d lan",value,dem);
	
	return 0;
	
}


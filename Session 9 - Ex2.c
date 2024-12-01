#include<stdio.h>
int main(){
	int n,i,j;
	int index,value;
	printf("Nhap vao so phan tu ban muon: ");
	scanf("%d",&n);
	int arr[5]={1,2,4,5,6};
	printf("Vi tri ban muon sua: ");
	scanf("%d",&index);
	printf("Nhap gia tri ban muon sua: ");
	scanf("%d",&value);
	for(i=4;i>index;i--){
		arr[i]=arr[i-1];
	}
		arr[index]=value;
	for(i=0;i<n;i++){
		printf("%d",arr[i]);
	}
	
	return 0;
}


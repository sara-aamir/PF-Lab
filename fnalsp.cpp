#include<stdio.h>
#include<stdlib.h>
int main(){
	
	int n,k,i,j,l,count=0;
	printf("Enter n");
	scanf("%d",&n);
	printf("Enter k");
	scanf("%d",&k);
	
	int arr=(int)malloc(n*sizeof(int));
	printf("ENTER ELEMENTS OF ARRAY");
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
for(i=0;i<n;i++){
	if(count==k) break;
	for(j=i+1;j<n;j++){
		if((arr[i]+arr[j])%10==0){
			printf("%d %d\n",arr[i],arr[j]);
			count++;
		}
	}
}
		free(arr);
	}

#include <stdio.h>

int main(){
	int num;
	
	scanf("%d", &num);    
	int arr[num];          			// Reading input from STDIN
	printf("Input number is %d.\n", num);
	for(int i=0;i<num;i++){
		scanf("%d", &arr[i]);
	}
	int sum=0;
	for(int i=0;i<num;i++){
		sum=sum+arr[i];
	}
	int ans =-1;
	for(int i=0;i<num;i++){
		if((sum-arr[i])%7==0){
			if (ans==-1){
				ans=i;
			}
			else{
				ans=i;
			}
		}
	}
	printf("%d", ans);


}
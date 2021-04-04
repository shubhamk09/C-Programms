#include <stdio.h>

int main(){
	int N = 0;
	scanf("%d", &N);
	
	long data[N];
	for(int i=0; i<N; i++)
	    scanf("%ld", &data[i]);
	
    // write your code here
    
	long num=0;
	for(int i=0; i<N; i++){
		long a=data[i]%10;
		num=num*10+a;
	}
	if(num%10==0){
		printf("Yes");
	}    
	else{
		printf("No");
	}

    
    
    return 0;
}
#include <stdio.h>
#include <string.h>

int main(){

	char len;
	int num;
	scanf("%d", &len);  
	scanf("%d", &num);      
	if(len<=23){
		if(num>500 && num<100){
			printf("Take Medicine");
		}
		else{
			printf("Don't take Medicine");
		}
	}
	else{
			printf("Don't take Medicine");
		}      
}
int main(){
	int i,r,k;
	scanf("%d", &i);
	scanf("%d", &r); 
	scanf("%d", &k); 
	int count=0;
	for(int j=i;j<=r ;j++){
		if(j%k==0){
			count++;
		}
	}              			// Reading input from STDIN
	printf("%d", count);       // Writing output to STDOUT
}
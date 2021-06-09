#include<stdio.h>
#include<stdlib.h>

int main(){
	int a[100][100];
	int n,i,j;
	//no.of an array elements
 	scanf("%d",&n);
 	//take no.of the operation
 	
 	int m,count=0;
 	scanf("%d",&m);
 	int c[200]; //for storing the valeus of sum 
    
	for(i=0;i<m;i++){
		for(j=0;j<3;j++){
		
		   		scanf("%d",&a[i][j]);
				   	
		} 

	}
	
	//print 
	
	for( i=0;i<m;i++){
		for(j=0;j<1;j++){
			 
			 //	printf("%d\t",a[i][j]);
			 	//take the second of the elements 
			 	
			 	//printitng the last elemenets 
			 	
			 printf("%d\t",a[i][j+2]);
			 count++;
			 c[i]=a[i][j+2];
			 
		
			 	
		}
		printf("\n");
}
		
		// array another one
		printf("array print");
		int b[100];
	
	
	for(i=0;i<count;i++){
		
		printf("%d",c[i]);	
		}//sum values
		
		
	

	

	
	
	
	
	
	return 0;
}

#include <stdio.h>

int factoriyel (int sayi){
	
	int fact =1;
	for ( ; sayi>0;sayi--){
		fact*=sayi;		
		
	}
	return fact;
}


int main(){
   int n;
   printf("Faktoriyel istediginiz bir sayi giriniz:");
   scanf("%d",&n);
   
   printf("Faktoriyel: %d",factoriyel(n));
   	
return 0;	
	
}

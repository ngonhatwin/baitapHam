#include "stdio.h"
#include "math.h"
int kiemtrachan_le ( int dayso[5]) {
	int  i, tong = 0, tong2 ;

	
	if ( dayso[i] % 2 == 0){
			printf("\n la so chan");
	} else {
			printf("\n la so le ");
		}
	
	for ( i = dayso[0]; i<=dayso[5];i++ )	{
	
		if ( i % 2 == 0){
	
			tong2 = tong + i;
		
		}
		return tong2;
	
	}
		
		
	}
		
	
	
	
	
	

	



int main () {
	int dayso[5], tong = 0, i, n = 5,tong2;

	printf ("\n hay nhap 5 so nguyen ");
	
	
	// nhap so lieu theo i
	for(i = 0; i < n; i++) {
			printf("\n nhap vao so thu %d =",i + 1 );
			scanf("%d", &dayso[i]);
		}
	// in so lieu ra man hinh
	for(i = 0; i < 5; i++)
    { 
        printf("\na[%d] = %d \n", i, dayso[i]); 
        printf("\n\n ",kiemtrachan_le(dayso));
		
    }
    // tinh tong gia tri cua cac phan tu trong mang 
    for(i = 0; i < 5; i++) 
        tong = tong + dayso[i]; 
    printf("\ntong = %d",  tong); 
    printf ("\ntong cac so chan = %d", tong2);
    
	
	
	
	



}

#include<stdio.h>

int tong(int n);
int main() {
    int n;
    scanf("%d", &n);
    printf("1 + 2 + 3 +...+ n = %d", tong(n));
}
int tong(int n){
    int tong, i;
    for ( i=1; i<=n; i++) {
     	tong = tong + i;
	}
	return tong;
}

#include <iostream>

using namespace std;

int main(){
	int tinggi_segitiga,i,j;
	
	cout << "masukkan tinggi segitiga : "<<endl ; cin>>tinggi_segitiga;
	for(i=0; i>=tinggi_segitiga; i--){
		for(j=tinggi_segitiga; j<=i; j++){
			if(j<i-1){
				printf(" ");
			}else{
				printf("*");
			}
		}
		printf("\n");
	}
	
	return 0;
}

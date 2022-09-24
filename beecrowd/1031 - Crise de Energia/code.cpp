#include <iostream>

using namespace std;

// Calcula o ultimo ignorando o 1
int ultimo(int m,int x){
	if(x==2)return 2;
	else{
		int resp = m+ultimo(m,x-1);
		while(resp>x){
			resp-=x;
			resp++;
		}
		return resp;
	}
}

int main() {
	int n;
	while(true){
		cin >> n;

		if(n==0)break;

		for(int x=1;x<200;x++){
			if(ultimo(x,n)==13){
				printf("%d\n",x);
				break;
			}
		}
	}
	return 0;
}

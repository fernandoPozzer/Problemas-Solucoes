#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main() {
	int n;

    long long val,aux;
	
	while(true){

		cin >> n;
		if(n==0)
			break;


		for(int x=0;x<n;x++){
			cin >> aux;
			val ^=aux;
		}
        cout << val << endl;

	}

    return 0;
}

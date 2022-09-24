#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main() {
	int n;

	long long arr[100000];

	while(true){

		cin >> n;
		if(n==0)
			break;


		for(int x=0;x<n;x++){
			cin >> arr[x];
		}
		// sort array;
		sort(arr,arr+n);
		for(int x=0;x<n;x+=2){
			if(arr[x]!=arr[x+1]){
				cout << arr[x] << endl;
				break;
			}
		}

	}

    return 0;
}

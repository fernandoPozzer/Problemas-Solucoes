#include <iostream>

using namespace std;

int main() {
    char arr[2001]={0};
    int n,aux;
    cin >> n;
    for(int x=0;x<n;x++){
    	cin >> aux;
    	arr[aux]++;
    }
    for(int x=1;x<2001;x++){
        if(arr[x]>0){
            cout << (x) << " aparece " << ((int)arr[x]) << " vez(es)" << endl;
        }
    }

    return 0;
}

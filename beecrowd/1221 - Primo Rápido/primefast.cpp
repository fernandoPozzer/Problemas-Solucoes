#include <iostream>
#include <math.h>

#define MAXPRIME 46340


using namespace std;

int binarySearch(int arr[], int l, int r, int x)
{
    if (r >= l) {
        int mid = l + (r - l) / 2;
        if (arr[mid] == x)
            return mid;
        if (arr[mid] > x)
            return binarySearch(arr, l, mid - 1, x);
        return binarySearch(arr, mid + 1, r, x);
    }
    return -1;
}


bool checkIsPrime(int primes[],int size,int x){
    if(x<2)return false;
    if(x<MAXPRIME){
        int v = binarySearch(primes,0,(x<size)?x:size,x);
        return v!=-1;
    }else{
        for(int y=0;y<size && primes[y]<=sqrt(x);y++){
            if(x%primes[y]==0)return false;
        }
        return true;
    }
}

int generatePrimes(int *primes){
    int size=2;
    primes[0] = 2;
    primes[1] = 3;
    for(int x=5;x<MAXPRIME;x+=2){
        bool prime = true;
        for(int y=0;y<size && primes[y]<=sqrt(x);y++){
            if(x%primes[y]==0){
                prime=false;
                break;
            } 
        }
        if(prime){
            primes[size++]=x;
        }
    }
    return size;    
}
int primes[MAXPRIME];

int main(int argc, char const *argv[])
{
    int size = generatePrimes(primes);
    int n,aux;

    cin >> n;
    for(int x=0;x<n;x++){
        cin >> aux;
        if(checkIsPrime(primes,size,aux)){
            cout << "Prime" << endl;
        }else{
            cout << "Not Prime" << endl;
        }
    }

    return 0;
}



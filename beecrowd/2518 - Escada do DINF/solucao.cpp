#include <math.h>
#include <iostream>

using namespace std;

int main(){
    double n,h,c,l;

    while(cin >> n){
        
        cin >> h >> c >> l;

        h/=100;
        c/=100;
        l/=100;

        double hip = sqrt(pow(h,2)+pow(c,2));
        double sup = (hip * l * n);

        printf("%.4f\n",sup);
    }
}
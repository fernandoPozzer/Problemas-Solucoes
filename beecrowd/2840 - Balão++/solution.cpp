#include <math.h>
#include <iostream>

#define PI 3.1415

using namespace std;

int main(){
    int r,l;

    cin >> r >> l;

    double v = (double)4/3;
    v*=pow(r,3);
    v*=PI;

    double baloes = l/v;
    
    cout << (int)baloes << endl;


}

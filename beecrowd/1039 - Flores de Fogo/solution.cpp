#include <math.h>
#include <iostream>

using namespace std;

int main(){
    int r1,x1,y1,r2,x2,y2;

    while(cin >> r1 >> x1 >> y1 >> r2 >> x2 >> y2){
        
        bool check;

        double dist = hypot(x1-x2,y1-y2);
        check = dist<=r1-r2;
        
        if(check){
            cout << "RICO" << endl;
        }else{
            cout << "MORTO" << endl;
        }

    
    }
}

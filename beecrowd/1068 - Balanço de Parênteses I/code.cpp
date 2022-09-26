#include <string.h>
#include <iostream>

using namespace std;


int main (){
	char c;

    while(!cin.eof()){
    	int a = 0;
    	while(cin.peek()!='\n' && !cin.eof()){
    		cin >> c;
    		if(c=='(')a++;
    		else if(c==')')a--;
    		if(a<0)a -=10000;
    	}
    	if(cin.eof())break;
    	std::cin.get();
    	if(a!=0){
            cout << "incorrect" << endl;
        }else{
            cout << "correct" << endl;
        }

    }

    return 0;
}
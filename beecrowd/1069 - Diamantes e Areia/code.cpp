#include <string.h>
#include <iostream>

using namespace std;


int main (){
	int n;
	string str;

	cin >> n;

	for(int x=0;x<n;x++){
		int dima = 0;
		int nivel = 0;
		cin >> str;
		for(unsigned int y=0;y<str.size();y++){
			char c = str.c_str()[y];
			if(c=='<'){
				nivel++;
			}else if(c=='>'){
				if(nivel>0){
					nivel--;
					dima++;
				}
			}
		}
		cout << dima << endl;
	}
    return 0;
}

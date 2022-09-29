#include <cmath>
#include <iostream>
#include <map>
#include <iomanip>
#include <bits/stdc++.h>

using namespace std;


int getQtdTabuas(int x,int y,map<int,int> tabuas){
    // x = tamanho corrido máximo da tabua
    // y = quantidade de linhas de tabuas
    // tabuas = comprimento das tabuas
    map<int,int> vetor = tabuas;
    int usadas = 0;
    int linhasCompletas = 0;
    if(tabuas[x]>0){
        linhasCompletas = tabuas[x];
        usadas = tabuas[x];
        if(usadas>y)usadas=y;
    }
    for(int a=x-1;a>x/2 && linhasCompletas<y;a--){
        if(tabuas[a]>0 && tabuas[x-a]>0){
            int qtd = min(tabuas[a],tabuas[x-a]);
            if(qtd+linhasCompletas>y)
                qtd = y-linhasCompletas;
            usadas+=qtd*2;
            linhasCompletas+=qtd;
        }
    }
    if((x&0x01)==0){
        int a = x/2;
        if(tabuas[a]>=2){
            int qtd = tabuas[a]/2;
            if(qtd+linhasCompletas>y)
                qtd = y-linhasCompletas;
            usadas+=qtd*2;
            linhasCompletas+=qtd;
        }
    }
    if(linhasCompletas<y)return -1;
    return usadas;
}



int main(){
    int x,y;
    int k;
    int l;
    while(true){
        cin >> x >> y;
        if(x==0 && y==0)break;
        
        cin >> l;
        cin >> k;

        map<int,int> tabuas;
        int qtd1=-1,qtd2=-1;
        for(int x=0;x<k;x++){
            int aux;
            cin >> aux;
            tabuas[aux]++;
        }
        if(x*100%l==0){
            qtd1= getQtdTabuas(y,x*100/l,tabuas);
        }
        if(y*100%l==0){
            qtd2= getQtdTabuas(x,y*100/l,tabuas);
        }
        if(qtd1==-1 && qtd2==-1){
            cout << "impossivel" << endl;
        }else{
            if(qtd1<0)
                cout << qtd2 << endl;
            else if(qtd2<0)
                cout << qtd1 << endl;
            else if(qtd1<qtd2)
                cout << qtd1 << endl;
            else
                cout << qtd2 << endl;
        }
    }
    return 0;
}
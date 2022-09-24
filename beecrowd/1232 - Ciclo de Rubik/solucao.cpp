#include <iostream>
#include <string.h>

using namespace std;


struct cubo{
	char pos[54];
};

typedef struct cubo cubo;


cubo* init(){
	char t[] = {'V','Y','W','B','G','O'};
	cubo *arr = (cubo*) malloc(sizeof(cubo));
	for(int x=0;x<6;x++){
		for(int y=0;y<9;y++){
			arr->pos[x*9+y] = t[x];
		}
	}
	return arr;
}

void rota4(char *s,int a,int b,int c, int d){
	char t = s[a];
	s[a] = s[b];
	s[b] = s[c];
	s[c] = s[d];
	s[d] = t;
}

void rotacionaF(cubo* c){
	rota4(c->pos,0,6,8,2);
	rota4(c->pos,1,3,7,5);

	rota4(c->pos,33,26,38,9);
	rota4(c->pos,34,23,37,12);
	rota4(c->pos,35,20,36,15);
}

void rotacionaU(cubo* c){
	rota4(c->pos,27,33,35,29);
	rota4(c->pos,28,30,34,32);

	rota4(c->pos,0,9,53,18);
	rota4(c->pos,1,10,52,19);
	rota4(c->pos,2,11,51,20);
}

void rotacionaD(cubo* c){
	rota4(c->pos,36,42,44,38);
	rota4(c->pos,37,39,43,41);

	rota4(c->pos,6,24,47,15);
	rota4(c->pos,7,25,46,16);
	rota4(c->pos,8,26,45,17);
}

void rotacionaL(cubo* c){
	rota4(c->pos,18,24,26,20);
	rota4(c->pos,19,21,25,23);

	rota4(c->pos,0,27,45,36);
	rota4(c->pos,3,30,48,39);
	rota4(c->pos,6,33,51,42);
}

void rotacionaR(cubo* c){
	rota4(c->pos,9,15,17,11);
	rota4(c->pos,10,12,16,14);

	rota4(c->pos,2,38,47,29);
	rota4(c->pos,5,41,50,32);
	rota4(c->pos,8,44,53,35);
}

void rotacionaB(cubo* c){
	rota4(c->pos,45,51,53,47);
	rota4(c->pos,46,48,52,50);

	rota4(c->pos,42,18,29,17);
	rota4(c->pos,43,21,28,14);
	rota4(c->pos,44,24,27,11);
}


void print(cubo *c){

	for(int x=0;x<6;x++){
		switch(x){
		case 0:
			cout << "FRONT: " << endl;
			break;
		case 1:
			cout << "RIGTH: " << endl;
			break;
		case 2:
			cout << "LEFT: " << endl;
			break;
		case 3:
			cout << "UP: " << endl;
			break;
		case 4:
			cout << "DOWN: " << endl;
			break;
		case 5:
			cout << "BACK: " << endl;
			break;
		}
		for(int y=0;y<9;y++){
			if(y%3==0)cout << "[";
			cout << c->pos[x*9+y] << ", ";
			if((y+1)%3==0)cout << "]" << endl;
		}
	}


}

void movimenta(cubo *c,const char *str){
	bool up;
	for(const char *ptr = str; *ptr!='\0';ptr++){
		if(*ptr>='A' && *ptr<='Z'){
			up = true;
		}else up = false;
		for(int x=0;x<((up)?1:3);x++){
			switch(tolower(*ptr)){
			case 'u':
				rotacionaU(c);
				break;
			case 'd':
				rotacionaD(c);
				break;
			case 'l':
				rotacionaL(c);
				break;
			case 'r':
				rotacionaR(c);
				break;
			case 'f':
				rotacionaF(c);
				break;
			case 'b':
				rotacionaB(c);
				break;
			}
		}
	}
}



int main() {
	char str[81];
	int aux;
	cubo *base = init();

	while(true){

	    if (scanf("%s", str) == EOF) break;
		cubo *c1 = init();

		aux = 0;
		do{
			movimenta(c1, str);
			aux++;
		}while(strncmp(c1->pos,base->pos,54)!=0);
		cout << aux << endl;
		free(c1);
	}

	free(base);

    return 0;
}

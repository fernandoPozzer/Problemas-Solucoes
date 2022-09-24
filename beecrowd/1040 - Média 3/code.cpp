#include <iostream>
#include <string.h>

using namespace std;

int main() {

	float a,b,c,d;

	cin >> a >> b >> c >> d;

	float media = a*2+b*3+c*4+d;
	media/=(2+3+4+1);

	printf("Media: %.1f\n",media);
	if(media>=7){
		printf("Aluno aprovado.\n");
	}else if(media>=5){
		printf("Aluno em exame.\n");
		cin >> a;
		printf("Nota do exame: %.1f\n",a);
		media+=a;
		media/=2;
		if(media<5){
			printf("Aluno reprovado.\n");
		}else{
			printf("Aluno aprovado.\n");
		}
		printf("Media final: %.1f\n",media);
	}else{
		printf("Aluno reprovado.\n");
	}

    return 0;
}

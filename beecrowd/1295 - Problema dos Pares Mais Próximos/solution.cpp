#include <string.h>
#include <iostream>
#include <vector>
#include <math.h>
#include <iomanip>
#include <algorithm>

using namespace std;


typedef struct point{
	double x;
	double y;
} point;

bool compara_ponto(const point& p1,const point& p2){
	return p1.x<p2.x;
}


int main (){
	int n;
	point base;
	cout << fixed << setprecision(4);

	while(true){
		cin >> n;
		if(n==0)break;
		double min = 10000;
		double minPow = pow(min,2);
		vector<point> all;

		for(int x=0;x<n;x++){
			cin >> base.x >> base.y;
			all.push_back(base);
		}

		sort(all.begin(), all.end(), compara_ponto);

		for(point &p1 = all.back(); all.size()>1; all.pop_back(),p1=all.back()){
			double minX = p1.x-min;
			double minY = p1.y-min;
			double maxY = p1.y+min;
			if(minX<0)minX=0;
			if(minY<0)minY=0;
			if(maxY>40000)maxY=40000;

			for(auto it = all.rbegin()+1; it != all.rend() && it->x>=minX; ++it){
				const point &p2 = *it;
				if(p2.y>maxY)continue;
				if(p2.y<minY)continue;

				const double d1 = p1.x-p2.x;
				const double d2 = p1.y-p2.y;
				const double dist = pow(d1,2)+pow(d2,2);
				if(dist<minPow){
					minPow = dist;
					min = sqrt(dist);
					minX = p1.x-min;
					minY = p1.y-min;
					maxY = p1.y+min;
					if(minX<0)minX=0;
					if(minY<0)minY=0;
					if(maxY>40000)maxY=40000;
				}
			}
		}
		if(min>=10000){
			cout << "INFINITY" << endl;
		}else{
			cout << min << endl;
		}
	}
    return 0;
}

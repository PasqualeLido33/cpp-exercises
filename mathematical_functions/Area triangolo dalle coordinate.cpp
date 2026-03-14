#include <iostream>
using namespace std;

double radice(double x){
	double min,max,r;
	min = 0;
	max = x + 1;
	r=(max+min)/2;
	while(max-min > 0.0001){
		
		if(x>r*r){min=r;}else{max=r;}
		r=(max+min)/2;
	}
	return max;
}

double lato(double x1,double x2,double y1,double y2){
	double l;
	l = radice((x1-x2)*(x1-x2) + (y1-y2)*(y1-y2));
	return l;
}

int main(){
	double x1,x2,x3,y1,y2,y3,l1,l2,l3,P,A;
	cout<<"inserisci le coordinate dei tre punti: \n";
	cin>>x1; cin>>y1; cin>>x2; cin>>y2;  cin>>x3;   cin>>y3;
	
	l1 = lato(x1,x2,y1,y2);
	l2 = lato(x1,x3,y1,y3);
	l3 = lato(x2,x3,y2,y3);
	P  = l1+l2+l3;
	A  = radice(P/2*(P/2-l1)*(P/2-l2)*(P/2-l3));
	
    cout<<"L'area del triangolo e': "<<A;

    return 0;
}

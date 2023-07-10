#include <iostream>
#include <cmath>
using namespace std;
int main(){
	int a,b,c,x1,x2,d;
	cin>>a>>b>>c;
	if (a==0){
		if (b==0){
			cout<<"error";
			return 0;
			}
		cout<<"the only element = "<<(-c)/b;
		}
	else {
		d=b*b-4*a*c;
		if (d<0) {
			cout<<"there are no real elements";
		}
		else if (d>=0){
			x1=((-b-sqrt(d))/2*a);
			x2=((-b+sqrt(d))/2*a);
			cout<<x1<<endl<<x2;
		}
	}
	return 0;
	}
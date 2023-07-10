#include <iostream>
using namespace std;
int main(){
	int x,y;
	cin>>x>>y;
	x=y-x;
	y=y-x;
	x=y+x;
	cout<<x<<endl<<y;
	return 0;
}

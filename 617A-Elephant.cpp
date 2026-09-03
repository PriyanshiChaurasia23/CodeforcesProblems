#include<iostream>
using namespace std;
int main(){
	int x, step=0;
	cin>>x;
	while(x>0){
		if(x<=5){
			step++;
			break;
		}
		x=x-5; 
    step++;
	}
	
	cout<<step;
	return 0;
} 

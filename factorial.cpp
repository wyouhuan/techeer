#include<iostream>
using namespace std;
int f(int n){
  int s,i;
	s=1;
	i=n;
	do{
	s=s*i;
	i=i-1;
	}
	while(i>1);
		return s;
}
int main(){
	int l,s;
	cout<<"please input an integer: "<<endl;
	cin>>l;
	s=f(l);
	cout<< "factorial of "<<l<<" is "<<s<<endl;
}

#include<iostream>
#include<cmath>
using namespace std;
int main(){
  int a,b,c,i=1;
  float l;
  cout<<"Please input a num:"<<endl;
  cin>>a;
  l=sqrt(a);
  b=floor(l);
  do{
  i=i+1;
  c=a%i;}
while(c!=0);
if(i>b && b*b!=a)
cout<<a<<" is odd"<<endl;
else
cout<<a<<" is even"<<endl;
}

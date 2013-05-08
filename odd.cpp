#include<iostream>
#include<cmath>
using namespace std;
int main(){
  int a,b,c,i;
  float l;
  cout<<"Please input a num:"<<endl;
  cin>>a;
  l=sqrt(a);
  b=floor(l);
  for(i=2;i<=b;i++){
      c=i%a;
      if(c==0)
      break;
}
if(i>=b)
cout<<a<<"is odd"<<endl;
else
cout<<a<<"is even"<<endl;
}

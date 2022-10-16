#include<iostream.h>
int main(){
  int a,b,c;
  cout<<"Enter a b c "<<endl;
  cin>>a>>b>>c;
  cout<<a<<b<<c;
  if(a>b&&a>c)
  {
    cout<<"A is max"<<endl;
  }
  else if(b>a&&b>c)
  {
    cout<<"B is max"<<endl;
  }
  else if(c>a&&c>b)
  {
    cout<<"C is max"<<endl;
  }
  return 0;
}

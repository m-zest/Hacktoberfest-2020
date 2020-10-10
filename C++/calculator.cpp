#include<iostream>
using namespace std;
int main()
{
  cout<<"this is a calculator for four operations on integers - Addition, Subtraction, Multiplication and Division\n";
  cout<<"Enter the first operand, second operand and the operator respectively\n";
  int a,b;
  char c;
  cin>>a>>b>>c;
  if(c=='+')
  cout<<a+b<<endl;
  if(c=='-')
  cout<<a-b<<endl;
  if(c=='*')
  cout<<a*b<<endl;
  if(c=='/')
  cout<<((float)a)/b<<endl;
  return 0;
}

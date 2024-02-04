
#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    int a,b,c,s,area;
    cout<<"enter three values of sides"<<endl;
    cin>>a>>b>>c;
    s=(a+b+c)/2;
     area= sqrt(s*(s-a)*(s-b)*(s-c));
    cout<<"area :" <<area <<endl;
    }

# include<iostream>

using namespace std;

int main ()
{ float pq,discount ,total,totalt;  //purchased quantity.
cout<<"enter purchased quantty "<<endl;
cin>> pq ;
discount = pq * 0.1 ;
total = pq - discount ;
totalt = pq ;
if (pq > 1000){cout<<"the total amount after discount is : "<<total<<endl;}
 else {cout<<"no dicount total is : "<<totalt<<endl;}
}

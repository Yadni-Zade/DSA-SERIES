#include <iostream>
using namespace std;
int main()
{
   // cout << "yadni \n zade";
   char grade = 'A';
   int value = grade ;
   cout<<value<<endl;
   double price = 100.99;
   int new_price = (int)price;
    cout<<new_price<<endl;
    
 //operators 
 //arithmetic 
 int a , b , sum , sub , mul , div , mod ;
 a=10;
 b=5;
 sum = a + b;
 sub = a - b;
 mul = a * b;
 div = a / b;
 mod = a % b;
cout<<"sum = "<<sum<<endl;
cout<<"sub = "<<sub<<endl;
cout<<"mul = "<<mul<<endl;
cout<<"div = "<<div<<endl;
cout<<"mod = "<<mod<<endl;

//relational 
cout<<(10>5)<<endl;
cout<<(10<5)<<endl;
cout<<(10>=5)<<endl;
cout<<(10<=5)<<endl;
cout<<(10==5)<<endl;
cout<<(10!=5)<<endl;


// logical 

cout<<(10>5 && 10<5)<<endl;
cout<<(10>5 || 10<5)<<endl;
cout<<!(10>5)<<endl;
//unary 
cout<<a++<<endl;
cout<<++a<<endl;
cout<<a--<<endl;
cout<<--a<<endl;
return 0;
}
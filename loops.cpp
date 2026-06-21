//loops => while , for , do while
#include <iostream>
using namespace std;
int main()
{
    //while loop
    int n , i ;
    i=0;
    cout<<"enter your number : ";
    cin>>n;
    while(i<=n)
    {
        cout<<i<<endl;
        i++;
    }
    //for loop
    int m ,j;  
    cout<<"enter your number : ";
    cin>>m;
    for(int j=0 ; j<=m ; j++)
    {
        cout<<j<<endl;
    }
    //do while loop
    int p , k ;
    cout<<"enter your number : ";
    cin>>p;
    k=0;
    do
    {
        cout<<k<<endl;
        k++;
    }while(k<=p);

   
//prime number problem 
int num , count=0;
cout<<"enter your number : ";
cin>>num;
for(int i=1 ; i<=num ; i++)
{
    if(num%i==0)
    {
        count++;
    }
}
if(count==2)
{
    cout<<"prime number"<<endl;
}
else
{
    cout<<"not a prime number"<<endl;
}
//nested loop
int rows , cols ;
cout<<"enter your rows : ";
cin>>rows;
cout<<"enter your columns : ";
cin>>cols;
for(int i=1 ; i<=rows ; i++)
{
    for(int j=1 ; j<=cols ; j++)
    {
        cout<<"* ";
    }
    cout<<endl;
}

    return 0;
}

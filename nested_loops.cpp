#include <iostream>
using namespace std;
int main()
{
   // int n , i ,j;
    //char ch = 'A';
    //cout<<"enter n";
   // cin>>n;
    //for (i=0; i<=n-1 ; i++)
    //{
       // for(j=0; j<=n-1 ; j++)
        //{
           // cout<<j;
        //}
        //cout<<endl;
   // }
   
//for (i=0; i<n ; i++)
    //{
      //  for(j=0; j<n ; j++)
       // {
        //    cout<<ch;
        //    ch=ch+1;
       // }
        //cout<<endl;
   // }

  // int n , i , j;
  // cout<<"enter n";
  // cin>>n;
   //for(i=0 ; i<n ; i++)
   //{
   // for(j=0 ; j<i+1 ; j++)
   // {
    //    cout<<"*"<<" ";
   // }
   // cout<<endl;
  // }
    

 
    // Outer loop for the 5 rows
    for (int i = 0; i < 5; i++) {
        
        // Calculate the character for the current row
        char letter = 'A' + i; 
        
        // Inner loop to print the character 'i + 1' times
        for (int j = 0; j <= i; j++) {
            cout << letter << " ";
        }
        
        // Move to the next line after each row
        cout << endl;
    }
    
    return 0;
}
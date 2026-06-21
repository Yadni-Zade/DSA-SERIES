// conditional statement => if , if else , elseif ladder, switched case .

#include <iostream>
using namespace std;
int main()
{
    //int age;
   // cout<<"enter your age : ";
    //cin>>age;
    //if(age>=18)
    //{
    //    cout<<"you are eligible to vote "<<endl;
    //}
    //else
    //{
        //cout<<"you are not eligible to vote "<<endl;
  //  }

  //elseif ladder
    int marks;
    cout<<"enter your marks : ";
    cin>>marks;
    if(marks>=80)
    {
        cout<<"you have secured first division "<<endl;
    }
    else if(marks>=60)
    {
        cout<<"you have secured second division "<<endl;
    }
    else
    {
        cout<<"you have secured third division "<<endl;
    }
    //switch case
    int day;
    cout<<"enter your day : ";
    cin>>day;
    switch(day)
    {
        case 1:
            cout<<"monday"<<endl;
            break;
        case 2:
            cout<<"tuesday"<<endl;
            break;
        case 3:
            cout<<"wednesday"<<endl;
            break;
        case 4:
            cout<<"thursday"<<endl;
            break;
        case 5:
            cout<<"friday"<<endl;
            break;
        case 6:
            cout<<"saturday"<<endl;
            break;
        case 7:
            cout<<"sunday"<<endl;
            break;
        default:
            cout<<"invalid day "<<endl;

    }
    //ternary operator
    int num1 , num2;
    cout<<"enter two numbers : ";
    cin>>num1>>num2;
    int max = (num1>num2)?num1:num2;
    cout<<"maximum number is : "<<max<<endl;
    
    return 0;

}
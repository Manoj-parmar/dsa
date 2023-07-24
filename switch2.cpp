#include<iostream>

using namespace std;

int main(){
    int a,b;
    char ch;
    cout<<"Enter value of A"<<endl;
    cin>> a;

    cout<<"Enter value of B"<<endl;
    cin>> b;

    cout<<"Enter value of opetion"<<endl;
    cin>>ch;

    switch (ch)
    {
    case '+': cout<<"The value of edition is A and B is "<<a+b;
        break;
    
    case '-': cout<<"The value of subtrection of A and B is  "<<a-b;
        break;

    case '*': cout<<"The value of multiply of A and B is "<<a*b;
        break;

    case '/': cout<<"The value of divition is A and B is "<<a/b;
        break;
    default:
        break;
    }

}
#include<iostream>

using namespace std;

int main(){

char ch;

cin>> ch;

if (ch>='a' && ch <='z')
{
    cout<<"This is Lover "<<endl;
}
else if (ch>='A' && ch<='Z')
{
    cout<<"This is uper"<<endl;
}
else if (ch >='0' && ch <='9')
{
    cout<<"The is Numeric"<<endl;
}

return 0;

}
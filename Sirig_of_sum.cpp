#include<iostream>

using namespace std;

int main(){
    int n;
    cout<<"Enter the number"<<endl;
    cin>>n;

    int i=1;;
    int sum=0;

    while (i<=n)
    {
        cout<<sum<<" ";
        sum+=i;
        i++;
    }
    return 0;
}
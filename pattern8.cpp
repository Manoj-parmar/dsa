#include<iostream>

using namespace std;

int main(){
    int n,i,j,k;
        cin>>n;
        i=1;
    while (i<=n)
    {
            j=1;
        while(j <= n-i)
        {
           
             cout<<"*";
            j++;
        }
        k=1;
        while (k<=i)
        {
             cout<<" ";
           
            k++;
        }
        i++;
        cout<<endl;
    }
    

}
#include<iostream>

using namespace std;

int main(){

    int n;
    cin>>n;

   int i=2;
   bool k;
   while (i<n)
   {\
     
        if(n%i==0){
            // cout<<"Not a prime nnumber"<<endl;
            k = true;
            break;
        } 
     i++;
   }

    if (k==true)
    {
        cout<<"It is not prime no"<<endl;
    }else{
        cout<<"It is prime"<<endl;
    }

}
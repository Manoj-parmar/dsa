#include<iostream>

using namespace std;

bool Scrach(int arr[],int size, int key){

    for (int i = 0; i < size; i++)
    {
        if (arr[i]==key)
        {
            return 1;
        }
        
    }
    return 0;

}
int main(){

    int arr[10]={1,2,3,4,5,6,7,8,9,10};

    int key;

    cout<<"Enter the key"<<endl;
    cin>>key;

   bool fund=Scrach(arr,10,key);

    if (fund)
    {
        cout<<"key is pregent"<<endl;
    }else
    {
        cout<<"Key is not pregent"<<endl;
    }
    
}
#include<iostream>

using namespace std;
void AlternetSort(int arr[],int size){
    for (int i = 0; i < size; i +=2 )
    {
        if (i+1<size)
        {
            swap(arr[i],arr[i+1]);
        }
        
    }
    
}
void printArry(int arr[], int size){
    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";
    }

}
int main(){
    int arr[10]={2,1,4,3,6,5,8,7,10,9};

    AlternetSort(arr,10);

    printArry(arr,10);
}
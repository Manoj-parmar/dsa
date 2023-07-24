#include<iostream>

using namespace std;

void reversArr(int arr[], int size){
    int start = 0;
    int end = size-1;

    while (start<=end)
    {
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
     
} 

void printArr(int arr[],int size){
    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main(){

    int arr1[5]={5,4,3,2,1};
    int arr2[7]={7,6,5,4,3,2,1};

    reversArr(arr1,5);
    reversArr(arr2,7);

    printArr(arr1,5);
    printArr(arr2,7);
}
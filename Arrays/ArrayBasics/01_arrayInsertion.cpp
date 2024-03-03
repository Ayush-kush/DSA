#include <iostream>
using namespace std;



bool isEmpty(int arr[],int size){
    if (size==0)
    {
        cout<<"Array is empty \n";
        return true;
    }
    return false;
    
}

bool isFull(int *arr,int size,int capacity){
    
    if (size>=capacity) 
    {
        cout<<"Array Overflow \n";
        return true;
    }
    return false;
}

int insertInArray(int *arr,int size,int capacity,int element,int index){
   
    if (isFull(arr,size,capacity))   
    {
        return 0;
    }

    for (int i = size; i > index ; i--)
    {
        arr[i]=arr[i-1];
    }
    arr[index]=element;
    size++;
    return 1;
    
    
}


void displayArray(int *arr, int size){
    cout<<"[ ";
    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<"]";
}



int main(int argc, char const *argv[])
{
    int arr[7]={10,20,30,40,50};
    int size=5;
    insertInArray(arr,size,7,15,1);
    size++;
    displayArray(arr,size);
    insertInArray(arr,size,7,25,3);
    size++;
    displayArray(arr,size);



    return 0;
}
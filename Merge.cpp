#include "iostream"

using namespace std;

void marge(int arr[] , int leftIndex , int midIndex , int rightIndex){
    int leftArrySize = midIndex - leftIndex + 1;
    int rightArrySize = rightIndex - midIndex;

    int leftArry[leftArrySize];
    int rightArry[rightArrySize];

    for(int i = 0; i<leftArrySize; i++){
        leftArry[i] = arr[leftIndex + i];
    }
    for(int j = 0; j<rightArrySize; j++){
        rightArry[j] = arr[midIndex + 1 + j];
    }

    int index = leftIndex;
    int i = 0;
    int j = 0;

    while(i < leftArrySize && j < rightArrySize){
        if(leftArry[i] <= rightArry[j]){
            arr[index] = leftArry[i];
            index++;
            i++;
        }else{
            arr[index] = rightArry[j];
            index++;
            j++;
        }
    }

    while(i < leftArrySize){
        arr[index] = leftArry[i];
        index++;
        i++;
    }
    
    while(j < rightArrySize){
        arr[index] = rightArry[j];
        index++;
        j++;
    }

}


void MergeSort(int arr[] , int leftIndex , int rightIndex){
    if(leftIndex >= rightIndex) return;
    int midIndex = leftIndex + (rightIndex - leftIndex) / 2;
    MergeSort(arr , leftIndex , midIndex);
    MergeSort(arr , midIndex+1 , rightIndex);

    marge(arr , leftIndex , midIndex , rightIndex);
}


int main (){
    
    int myA[] = {2 , 3 , 4 , 5 , 6 , 10};
    int size = sizeof(myA) / sizeof(myA[0]);
    int leftIndex = 0;
    int rightIndex = size - 1;
    

    MergeSort(myA , leftIndex , rightIndex);

    for(auto value : myA){
        cout << value << " ";
    }

    return 0;
}
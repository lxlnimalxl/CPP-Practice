#include<iostream>


using namespace std;

void BubbleSort(int arr[] , int size){
    for(int i = size -1; i>0 ; i--){
        for(int j = 0; j<i; j++){
            if(arr[j] > arr[j+1]){
                int tmp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = tmp;
            }
        }
    }
}


void SelectionSort(int arr[] , int size){
    for(int i = 0; i<size; i++){
        int minArr = i;
        for(int j = i+1; j<size; j++){
            if(arr[j] < arr[minArr]){
                minArr = j;
            }
        }
        if(i != minArr){
            int tmp = arr[i];
            arr[i] = arr[minArr];
            arr[minArr] = tmp;
        }
    }
}


void InsertionSort(int arr[] , int size){
    for(int i = 1; i<size; i++){
        int tmp = arr[i];
        int j = i - 1;
        while(j > -1 && tmp < arr[j]){
            arr[j+1] = arr[j];
            arr[j] = tmp;
            j--;
        }
    }
}



int main (){

    int myA[] = {2 , 3 , 4 , 5 , 6 , 10};
    int size = sizeof(myA) / sizeof(myA[0]);

    BubbleSort(myA , size);
    SelectionSort(myA , size);

    for(auto value : myA){
        cout << value << " ";
    }

    return 0;
}
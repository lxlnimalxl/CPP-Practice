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


int main (){

    int myA[] = {2 , 3 , 4 , 5 , 6 , 10};
    int size = sizeof(myA) / sizeof(myA[0]);

    BubbleSort(myA , size);

    for(auto value : myA){
        cout << value << " ";
    }

    return 0;
}
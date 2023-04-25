#include <iostream>
using namespace std;
void bubbleSort(int arr[], int s){
    for(int i = 0; i<s-1; i++){
        bool flag = false;
        for(int j = 0; j<s-i-1;j++){
            if(arr[j]>arr[j+1]){swap(arr[j],arr[j+1]);flag = true;}
        }
        if(!flag){break;}}
}

void selectionSort (int arr[], int s){
    int currentStart =0;
    for(int i = 0; i<s-1;i++){
        currentStart = i;
        for(int j = currentStart; j<s;j++){
            if(arr[j]<arr[currentStart]){
                currentStart=j;
            }
        }
        if(currentStart!=i){
            swap(arr[currentStart], arr[i]);
        }
    }
}

void insertionSort(int arr[], int s ){
    for(int i = 0; i<s-1; i++){
        for(int j = 0; j<s;j++){
        }
    }
}
int main(int argc, const char * argv[]) {
    int arr[5]={1,3,2,10,5};
    selectionSort(arr, 5);
    for(auto e:arr){
        cout<<e<<endl;
    }
    return 0;
}

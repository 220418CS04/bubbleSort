//
//  main.cpp
//  234
//
//  Created by Azimjon Axmedov on 25/04/23.
//

#include <iostream>
using namespace std;
void bubbleSort(int arr[], int s){
    for(int i = 0; i<s-1; i++){
        for(int j = 0; j<s-1;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
    }
}
int main(int argc, const char * argv[]) {
    int arr[5]={1,3,2,10,5};
    bubbleSort(arr, 5);
    for(auto e:arr){
        cout<<e<<endl;
    }
    return 0;
}

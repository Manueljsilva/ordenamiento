#include <iostream>
#include "quick.h"
#include "bubble.h"


int main (){

    cout << "QuickSort" << endl; 

    vector<int> arr = {12, 7, 3, 9, 2, 1, 5};
    int n = arr.size();

    quickSort(arr, 0, n - 1);

    cout << "Lista ordenada: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    cout << endl << endl << "BubbleSort" << endl;

    vector<int> arr2 = {64, 34, 25, 12, 22, 11, 90};

    bubbleSort(arr2);

    cout << "Lista ordenada: ";
    for (int i = 0; i < arr2.size(); i++) {
        cout << arr2[i] << " ";
    }


    return 0;
}

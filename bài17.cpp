#include <iostream>
using namespace std;


float sum(float arr[], int size) {
    if (size == 0) {   
        return 0;
    }
    else {
        return arr[size-1] + sum(arr, size-1);    
    }
}

int main() {
    float arr[] = {1.5, -2.0, 3.2, 4.0, -5.5, 6.1, 7.0};
    int size = sizeof(arr)/sizeof(arr[0]);

    float s = sum(arr, size);
    cout << "Tong cac gia tri trong mang la: " << s;

    return 0;
}
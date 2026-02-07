#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Enter number of elements: ";
    cin >> n;

    int arr[n];

    // Taking input
    cout << "Enter " << n << " elements:\n";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Displaying original array
    cout << "\nOriginal Array: ";
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    int sum =0 ;
    // Calculating sum      
    for(int i = 0; i < n; i++) {
        sum += arr[i];
    }
    cout << "\nSum of elements: " << sum << endl;

    int max = arr[0];
    // Finding maximum element
    for(int i = 1; i < n; i++) {
        if(arr[i] > max) {
            max = arr[i];
        }
    }
    cout << "Maximum element: " << max << endl;

    int min = arr[0];
    // Finding minimum element
    for(int i = 1; i < n; i++) {
        if(arr[i] < min) {
            min = arr[i];
        }
    }
    int MAX = arr[0];
    cout << "Minimum element: " << min << endl;
    for(int i=0;i<n;i++) {
        if(arr[i]> MAX) {
            MAX = arr[i];
        }
    }
    cout << "Maximum element: " << MAX << endl;
    int mul = 1 ;
    // Calculating sum      
    for(int i = 0; i < n; i++) {
        mul *= arr[i];
    }
    cout << "\nMultiplication of elements: " << mul << endl;
    

    return 0;
}

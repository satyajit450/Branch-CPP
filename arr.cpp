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

    return 0;
}
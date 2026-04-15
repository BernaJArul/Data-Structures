//Insertion Sorting
#include <iostream>
using namespace std;
#define MAX 10

class InsertionSort {
private:
    int arr[MAX];
    int n;
public:
    void getData();
    void sort();
    void display();
};

void InsertionSort::getData() {
    cout << "Enter the number of elements: ";
    cin >> n;
    cout << "Enter the elements: ";
    for (int i = 0; i < n; i++)
        cin >> arr[i];
}

void InsertionSort::sort() {
    for (int i = 1; i < n; i++) {
        int key = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}

void InsertionSort::display() {
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
}

int main() {
    InsertionSort is;
    is.getData();
    is.sort();
    cout << "\nSorted array (Insertion Sort): ";
    is.display();

    return 0;
}

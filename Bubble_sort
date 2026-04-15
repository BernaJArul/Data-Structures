//Bubble Sorting

#include <iostream>
using namespace std;
#define MAX 10

class BubbleSort {
private:
    int arr[MAX];
    int n;

public:
    void getData();
    void sort();
    void display();
};

void BubbleSort::getData() {
    cout << "Enter the number of elements:";
    cin >> n;
    cout << "Enter the elements: ";
    for (int i = 0; i < n; i++)
        cin >> arr[i];
}

void BubbleSort::sort() {
    int temp;
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++)
            if (arr[j] > arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] =temp;
            }
    }
}

void BubbleSort::display() {
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
}

int main() {
    BubbleSort bs;
    bs.getData();
    bs.sort();
    cout << "\nSorted array (Bubble Sort): ";
    bs.display();

    return 0;
}

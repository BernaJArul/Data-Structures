//Quick Sorting
#include <iostream>
using namespace std;
#define MAX 10

class QuickSort {
private:
    int arr[MAX];
    int n;
public:
    void getData();
    void sort();
    void quickSort(int low, int high);
    int partition(int low, int high);
    void display();
};

void QuickSort::getData() {
    cout << "Enter the number of elements: ";
    cin >> n;
    cout << "Enter the elements: ";
    for (int i = 0; i < n; i++)
        cin >> arr[i];
}

void QuickSort::display() {
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
}

void QuickSort::sort() {
    quickSort(0, n - 1);
}

void QuickSort::quickSort(int low, int high) {
    if (low < high) {
        int pi = partition(low, high);
        quickSort(low, pi - 1);
        quickSort(pi + 1, high);
    }
}

int QuickSort::partition(int low, int high) {
    int pivot = arr[high];
    int i = (low - 1);
    for (int j = low; j <= high - 1; j++)
        if (arr[j] < pivot) {
            i++;
            swap(arr[i], arr[j]);
        }
    swap(arr[i + 1], arr[high]);
    return (i + 1);
}

int main() {
    QuickSort qs;
    qs.getData();
    qs.sort();
    cout << "\nSorted array (Quick Sort): ";
    qs.display();

    return 0;
}

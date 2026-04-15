//Merge Sorting
#include <iostream>
using namespace std;
#define MAX 10

class MergeSort {
private:
    int arr[MAX];
    int n;
public:
    void getData();
    void sort();
    void mergeSort(int l, int r);
    void merge(int l, int m, int r);
    void display();
};

void MergeSort::getData() {
    cout << "Enter the number of elements: ";
    cin >> n;
    cout << "Enter the elements: ";
    for (int i = 0; i < n; i++)
        cin >> arr[i];
}

void MergeSort::display() {
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
}

void MergeSort::sort() {
    mergeSort(0, n - 1);
}

void MergeSort::mergeSort(int l, int r) {
    if (l < r) {
        int m = l + (r - l) / 2;
        mergeSort(l, m);
        mergeSort(m + 1, r);
        merge(l, m, r);
    }
}

void MergeSort::merge(int l, int m, int r) {
    int n1 = m - l + 1;
    int n2 = r - m;
    int L[n1], R[n2];

    for (int i = 0; i < n1; i++) L[i] = arr[l + i];
    for (int j = 0; j < n2; j++) R[j] = arr[m + 1 + j];

    int i = 0, j = 0, k = l;
    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            arr[k] = L[i];
            i++;
        } else {
            arr[k] = R[j];
            j++;
        }
        k++;
    }

    while (i < n1) arr[k++] = L[i++];
    while (j < n2) arr[k++] = R[j++];
}

int main() {
    MergeSort ms;
    ms.getData();
    ms.sort();
    cout << "\nSorted array (Merge Sort): ";
    ms.display();

    return 0;
}

#include <bits/stdc++.h>
using namespace std;

void heapify(vector<int>& arr, int n, int i) {
    int largest = i;        // Initialize largest as root
    int left = 2 * i + 1;   // Left child
    int right = 2 * i + 2;  // Right child

    // If left child is larger than root
    if (left < n && arr[left] > arr[largest])
        largest = left;

    // If right child is larger than the largest so far
    if (right < n && arr[right] > arr[largest])
        largest = right;

    // If largest is not root, swap and heapify the affected subtree
    if (largest != i) {
        swap(arr[i], arr[largest]);
        heapify(arr, n, largest); // Recursively heapify the subtree
    }
}

// Function to perform heap sort
void heapSort(vector<int>& arr) {
    int n = arr.size();

    // Step 1: Build a max heap
    for (int i = n / 2 - 1; i >= 0; i--)
        heapify(arr, n, i);

    // Step 2: Extract elements from heap one by one
    for (int i = n - 1; i > 0; i--) {
        // Move the current root (largest) to the end
        swap(arr[0], arr[i]);

        // Call heapify on the reduced heap
        heapify(arr, i, 0);
    }
}

int main() {
    vector<int> arr = {1, -3, 5, -10, -20, 4, 18, 30};
    heapSort(arr);
    int Q, res = 0;
    cin >> Q;
    // for (vector<int>::iterator p=arr.begin(); p!=arr.end(); p++) cout << *p << " ";
    vector<int>::iterator a=arr.begin();
    vector<int>::iterator b=arr.end();
    while (a<b) {
        if (*a + *b == Q) {
            res++; a++; b++;
        }
        else if (*a + *b < Q) a++;
        else b--;
    }
    cout << res << endl;
    return 0;
}
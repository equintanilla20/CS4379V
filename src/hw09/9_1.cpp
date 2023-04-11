#include <iostream>
#include <vector>

using namespace std;
// Test Case: 5 2 1 3 1 2
// Test Case: 3 2 4 1
// Merge Sort prototypes
int msort(std::vector<int>&, std::vector<int>&, int, int);
int mmerge(std::vector<int>& , std::vector<int>&, int, int, int);
int countInversions(std::vector<int>&);

int main() {
    std::vector<int> vec;
    int size;
    int element;

    std::cin >> size;
    int k = 0;
    while (k < size) {
        std::cin >> element;
        vec.push_back(element);
        k++;
    }

    std::cout << countInversions(vec) << right;  

    return 0;
}

int msort(std::vector<int>& arr, std::vector<int>& tempVector, int l, int r) {
    // Run merge sort normally, but keep count of inversions as they are made
    // deeper in the merge function
    int count = 0;
    int mid;
    if (r > l) {
        mid = (l + r) / 2;
        count += msort(arr, tempVector, l, mid);
        count += msort(arr, tempVector, mid + 1, r);
        count += mmerge(arr, tempVector, l, mid + 1, r);
    }

    return count;
}

int mmerge(std::vector<int>& arr, std::vector<int>& tempVector, int l, int mid, int r) {
    int i = l, j = mid, k = l;
    int count = 0;
    
    while ((i <= mid - 1) && (j <= r)) {
        // Check if the left num is greater than right num
        if (arr[i] <= arr[j]) {
            // If no, add to temp vector and continue
            tempVector[k++] = arr[i++];
        }
        else {
            // If yes, add to count then temp vector and continue
            tempVector[k++] = arr[j++];
            count += (mid - i);
        }
    }

    // Copy rest of left side
    while (i <= mid - 1)
        tempVector[k++] = arr[i++];

    // Copy rest of right side
    while (j <= r)
        tempVector[k++] = arr[j++];

    // Copy sorted elements back to original vector
    for (i = l; i <= r; i++)
        arr[i] = tempVector[i];
    
    return count;
}

int countInversions(std::vector<int>& arr) {
    std::vector<int> tempVector(arr.size());
    return msort(arr, tempVector, 0, arr.size() - 1);
}
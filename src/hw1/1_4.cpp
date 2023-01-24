#include <iostream>
#include <vector>
#include <algorithm>
// test input: 5 1 6 7 9 14 5 2 3 8 12 13
// test input: 2 1 3 1 2
using namespace std;

double findMedianSortedArrays(vector<int> &nums1, vector<int> &nums2) {

    int m = nums1.size();
    int n = nums2.size();

    if (m > n) // swap if nums1 is larger than nums2
        return findMedianSortedArrays(nums2, nums1);
    
    // Prep binary search
    int start = 0;
    int end = m;
    int mergedMid = (m + n + 1) / 2; // Mid position of hypothetical merged array

    while (start <= end) {
        int partition1 = (start + end) / 2;
        int partition2 = mergedMid - partition1;

        // Check out of bounds
        int leftMax1 = partition1 > 0 ? nums1[partition1 - 1] : INT_MIN;
        int leftMax2 = partition2 > 0 ? nums2[partition2 - 1] : INT_MIN;
        int rightMin1 = partition1 < m ? nums1[partition1] : INT_MAX;
        int rightMin2 = partition2 < n ? nums2[partition2] : INT_MAX;

        if (leftMax1 <= rightMin2 && leftMax2 <= rightMin1) {
            if ((m + n) % 2 == 0)
                return (max(leftMax1, leftMax2) + min(rightMin1, rightMin2)) / 2.0;
            return max(leftMax1, leftMax2);
        } else if (leftMax1 > rightMin2) {
            end = partition1 - 1;
        } else {
            start = partition1 + 1;
        }
    }
    return 0;
}

int main() {
    vector<int> firstList;
    vector<int> secondList;
    int sizeFirstList;
    int sizeSecondList;
    int numbersList1;
    int numbersList2;

    // Enter size of vector 1:
    cin >> sizeFirstList;
    if (sizeFirstList < 0 || sizeFirstList > 1000) {
        cout << "Try again and enter an integer greater than or equal to 0, and less than or equal to 1000" << endl;
        return -1;
    }
    //"Enter the numbers of vector 1:
    for (int i = 0; i < sizeFirstList; i++) {
        cin >> numbersList1;
        if (numbersList1 < -106 || numbersList1 > 106) {
            cout << "Try again and enter an integer greater than or equal to -106, and less than or equal to 106" << endl;
            return -1;
        }
        firstList.push_back(numbersList1);
    }

    // Enter size of vector 2:
    cin >> sizeSecondList;
    if (sizeSecondList < 0 || sizeSecondList > 1000) {
        cout << "Try again and enter an integer greater than or equal to 0, and less than or equal to 1000" << endl;
        return -1;
    }
    // Enter the numbers of vector 2:
    for (int j = 0; j < sizeSecondList; j++) {
        cin >> numbersList2;
        if (numbersList2 < -106 || numbersList2 > 106) {
            cout << "Try again and enter an integer greater than or equal to -106, and less than or equal to 106" << endl;
            return -1;
        }
        secondList.push_back(numbersList2);
    }
    // findMedianSortedArrays(firstList, secondList);
    cout << "The median is " << findMedianSortedArrays(firstList, secondList) << endl;
    return 0;
}
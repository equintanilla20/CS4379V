#include <iostream>
#include <vector>
#include <algorithm>
// test input: 5 1 6 7 9 14 5 2 3 8 12 13
using namespace std;

double findMedianSortedArrays(vector<int> &nums1, vector<int> &nums2) {
    // int first[]  = {1, 6, 7,  9, 14};
    // int second[] = {2, 3, 8, 12, 13};
    // int merge[]  = {1, 2, 3,  6,  7, 8, 9, 13, 14};
    int median;
    int m = nums1.size();
    int mid1 = nums1.at(m/2);

    int n = nums2.size();
    int mid2 = nums2.at(n/2);
    
    if (mid1 == mid2) {
        median = (mid1+mid2) / 2;
    } else if (mid1 < mid2) {

    } else {

    }

    return median;

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
    findMedianSortedArrays(firstList, secondList);
    // cout << "The median is " << findMedianSortedArrays(firstList, secondList) << endl;
    return 0;
}
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

double findMedianSortedArrays(vector<int> &nums1, vector<int> &nums2) {
    
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

    cout << "The median is " << findMedianSortedArrays(firstList, secondList) << endl;
    return 0;
}
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

//your helper function here, if you have one

int getMinPathCost(vector<vector<int>>& grid, vector<vector<int>>& moveCost) {
    //your code here
}

int main() {
    int n;
    int m;
    int k;
    int element;
    vector<vector<int>>grid;
    vector<vector<int>>moveCost;
    
    cin>>k;
    cin>>n;
    for(int i=0; i<n; i++){
        vector<int>vec;
        for(int j=0; j<k; j++){
            cin>>element;
            vec.push_back(element);
        }
        grid.push_back(vec);
    }
    
    cin>>m;
    for(int i=0; i<m; i++){
        vector<int>vec;
        for(int j=0; j<k; j++){
            cin>>element;
            vec.push_back(element);
        }
        moveCost.push_back(vec);
    }
    
    cout<<getMinPathCost(grid, moveCost)<<endl;

    return 0;
}
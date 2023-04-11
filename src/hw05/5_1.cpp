#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

struct Job {
    int startTime;
    int endTime;
    int profit;
};

int jobScheduling(vector<int>& startTime, vector<int>& endTime, vector<int>& profit) {
    std::vector<Job> jobs;
    std::vector<int> profits(startTime.size());

    // Create Job structure based on vector info
    for (size_t i = 0; i < startTime.size(); i++) {
        jobs.push_back({startTime[i], endTime[i], profit[i]});
    }

    // Order by increasing start time
    std::sort(jobs.begin(), jobs.end(), [](Job job1, Job job2) {
        return job1.startTime < job2.startTime;
    });

    // For every element in the jobs vector fill in
    // the profits vector to find the max combination
    // of jobs
    for (size_t i = 0; i < startTime.size(); i++) {
        // Set current profit to 0 to help find max
        profits[i] = 0;

        // Check every other job for time collisions
        for (size_t j = 0; j < i; j++) {
            // If jobs don't collide time-wise and
            // the other job has a higher profit
            if (jobs[j].endTime <= jobs[i].startTime && profits[i] < profits[j]) {
                // replace profits[i] with other job
                profits[i] = profits[j];
            }
        }
        // Add current job profit to profits vector
        profits[i] += jobs[i].profit;
    }
    
    // Return max element from the profits vector
    return *max_element(profits.begin(), profits.end());
}


int main() {
    int sizeOfArrays;
    int element;
    vector<int> startTime;
    vector<int> endTime;
    vector<int> profit;
    cin >> sizeOfArrays;
    
    int i = 0;
    while (i < sizeOfArrays){
        cin >> element;
        startTime.push_back(element);
        i++;
    }
    
    int j = 0;
    while(j < sizeOfArrays){
        cin >> element;
        endTime.push_back(element);
        j++;
    }
    
    int k = 0;
    while(k < sizeOfArrays){
        cin >> element;
        profit.push_back(element);
        k++;
    }
    
    cout << jobScheduling(startTime, endTime, profit) << endl;
    
    return 0;
}
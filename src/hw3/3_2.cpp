#include <iostream>
#include <queue>
#include <iomanip>

using namespace std;

class MovingAverage {
    private:
        int window;
        double sum;
        // std::queue<int> primaryQueue;
        std::queue<int> bufferQueue;
        
    public:
        MovingAverage(int size) {
            window = size;
            sum = 0;
        }
        
        double next(int val) {
            if (bufferQueue.size() < window) {
                sum += val;
                bufferQueue.push(val);
                return sum / bufferQueue.size();
            } else {
                sum += val - bufferQueue.front();
                bufferQueue.pop();
                bufferQueue.push(val);
                return sum / window;
            }
        }
};

int main() {
   int windowSize;
   cin>>windowSize;
   MovingAverage* obj = new MovingAverage(windowSize);
   double input;
   cout<<"null"<<" ";
   int i=0;
   
   while(i<5){
     cin>>input;
     cout << fixed << showpoint;
     cout<<setprecision(5)<<obj->next(input)<<" ";
     i++;
   }
   
   return 0;
}
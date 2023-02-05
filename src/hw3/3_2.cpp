#include <iostream>
#include <queue>
#include <iomanip>

using namespace std;

class MovingAverage {
   private:
      //your code here
   public:
     MovingAverage(int size) {
      //your code here
     }
     
     double next(int val) {
      //your code here
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
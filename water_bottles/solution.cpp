
using namespace std;
class Solution {
public:
    int numWaterBottles(int numBottles, int numExchange) {
       int result = 0;
       int empty = 0;
       while(numBottles + empty >= numExchange){
        result += numBottles;
        empty += numBottles;
        numBottles = empty / numExchange;
        empty = empty % numExchange;
       }

       return numBottles + result;
    }
};
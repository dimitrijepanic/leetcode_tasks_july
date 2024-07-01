#include <vector>
using namespace std;

class Solution {
public:
    bool threeConsecutiveOdds(vector<int>& arr) {
        int count = 0;

        for(auto e: arr) {
            count = e & 1 ? count + 1 : 0;
            if(count == 3) return true;
        }

        return false;
    }
};
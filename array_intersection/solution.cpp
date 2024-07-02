#include <vector>
#include <unordered_map>

using namespace std;
class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int, int> mp;

        for(auto e: nums1) mp[e]++;

        vector<int> result;
        for(auto e: nums2) {
            if(mp[e] > 0) {
                result.push_back(e);
                mp[e]--;
            }
        }

        return result;
    }
};
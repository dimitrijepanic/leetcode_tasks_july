class Solution {
public:
    int passThePillow(int n, int time) {
        int pos = time % (n - 1);
        int dir = time / (n -  1);
        return ((dir & 1) == 0) ? (pos + 1) : (n - pos);
    }
};
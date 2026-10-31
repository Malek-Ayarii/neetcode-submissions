#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int maxArea(vector<int>& heights) {
        int n = heights.size();
        int debut = 0, fin = n - 1, maxArea = 0;
        while (debut < fin) {
            int s = (fin - debut) * min(heights[debut], heights[fin]);
            if (s > maxArea) {
                maxArea = s;
            }
            if (heights[debut] < heights[fin]) {
                debut++;
            } else {
                fin--;
            }
        }
        return maxArea;
    }
};
class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int debut = 0;
        int fin = numbers.size() - 1;
        while (debut < fin) {
            int somme = numbers[debut] + numbers[fin];
            if (somme == target) {
                return {debut+1,fin+1};
            }
            if (somme > target) {
                fin--;
            } else {
                debut++;
            }
        }
        return {};
    }
};
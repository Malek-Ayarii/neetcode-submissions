class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        vector<vector<int>> res;
        int n = nums.size();

        for (int i = 0; i < n - 2; i++) {
            // Ignorer les doublons pour le premier élément
            if (i > 0 && nums[i] == nums[i - 1]) continue;

            int debut = i + 1;
            int fin = n - 1;

            while (debut < fin) {
                int somme = nums[i] + nums[debut] + nums[fin];
                if (somme == 0) {
                    res.push_back({nums[i], nums[debut], nums[fin]});
                    // Ignorer les doublons
                    while (debut < fin && nums[debut] == nums[debut + 1]) debut++;
                    while (debut < fin && nums[fin] == nums[fin - 1]) fin--;
                    debut++;
                    fin--;
                } else if (somme < 0) {
                    debut++;
                } else {
                    fin--;
                }
            }
        }
        return res;
    }
};
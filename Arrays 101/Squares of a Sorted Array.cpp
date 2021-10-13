class Solution
{
public:
    vector<int> sortedSquares(vector<int> &nums)
    {
        int n = nums.size();
        vector<int> v(n);
        for (int i = 0, j = n - 1, k = n - 1; k >= 0; k--)
        {
            int a = nums[i] * nums[i];
            int b = nums[j] * nums[j];
            if (a > b)
            {
                v[k] = a;
                i++;
            }
            else
            {
                v[k] = b;
                j--;
            }
        }
        return v;
    }
};
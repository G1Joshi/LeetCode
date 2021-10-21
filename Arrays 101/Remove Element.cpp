class Solution
{
public:
    int removeElement(vector<int> &nums, int val)
    {
        int k = nums.size() - 1;
        for (int i = 0; i <= k; i++)
        {
            if (nums[i] == val)
                swap(nums[i--], nums[k--]);
        }
        return k + 1;
    }
};
class Solution
{
public:
    int findMaxConsecutiveOnes(vector<int> &nums)
    {
        int g = 0, c = 0;
        for (int a : nums)
        {
            if (a == 1)
            {
                c++;
                g = max(g, c);
            }
            else
                c = 0;
        }
        return g;
    }
};
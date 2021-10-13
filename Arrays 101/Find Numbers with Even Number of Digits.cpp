class Solution
{
public:
    int findNumbers(vector<int> &nums)
    {
        int c = 0;
        for (int a : nums)
        {
            int d = floor(log10(a) + 1);
            if (d % 2 == 0)
                c++;
        }
        return c;
    }
};
class Solution
{
public:
    void duplicateZeros(vector<int> &arr)
    {
        int n = arr.size();
        for (int i = 0, j; i < n; i++)
        {
            if (arr[i] == 0)
            {
                for (j = n - 1; j > i; j--)
                {
                    arr[j] = arr[j - 1];
                }
                arr[j] = 0;
                i++;
            }
        }
    }
};
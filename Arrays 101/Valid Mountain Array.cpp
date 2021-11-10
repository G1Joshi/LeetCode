class Solution
{
public:
    bool validMountainArray(vector<int> &arr)
    {
        bool flag = false;
        int c = 0;
        for (int i = 1; i < arr.size(); i++)
        {
            if (arr[i] == arr[i - 1])
                return false;
            if (!c)
            {
                if (arr[i] > arr[i - 1])
                {
                    c++;
                    flag = true;
                }
                else
                    return false;
            }
            if (flag)
            {
                if (arr[i] > arr[i - 1])
                    continue;
                else
                {
                    c++;
                    flag = !flag;
                }
            }
            else
            {
                if (arr[i] < arr[i - 1])
                    continue;
                else
                    return false;
            }
        }
        return c == 2;
    }
};
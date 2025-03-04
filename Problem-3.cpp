/*
TC : O(n)
SC : O(1)
*/
class Solution
{
public:
    void rotate(vector<int> &nums, int k)
    {
        if (nums.size() == 0 || nums.empty())
        {
            return;
        }
        int n = nums.size();
        k = k % n;
        rev(nums, 0, n - 1);
        rev(nums, 0, k - 1);
        rev(nums, k, n - 1);
    }

    void rev(vector<int> &nums, int l, int r)
    {
        while (l < r)
        {
            swap(nums, l, r);
            l++;
            r--;
        }
    }

    void swap(vector<int> &nums, int l, int r)
    {
        int temp = nums[l];
        nums[l] = nums[r];
        nums[r] = temp;
    }
};
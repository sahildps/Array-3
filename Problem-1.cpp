/*
TC : O(n)
SC : O(1)
*/
class Solution
{
public:
    int trap(vector<int> &height)
    {
        if (height.size() == 0 || height.empty())
        {
            return 0;
        }
        int total = 0;
        int lw = 0, l = 0, rw = 0, r = height.size() - 1;

        // keep track of left-wall and right-wall to store the water
        // keep track of left and right for the amount of water stored
        while (l <= r)
        {
            // when height of left wall is smaller than the right wall
            if (lw <= rw)
            {
                if (lw > height[l])
                {
                    int temp = lw - height[l];
                    total += temp;
                    l++;
                }
                else
                {
                    lw = height[l];
                    l++;
                }
            }
            else
            {
                // when height of right wall is smaller than left wall
                if (rw > height[r])
                {
                    int temp = rw - height[r];
                    total += temp;
                    r = r - 1;
                }
                else
                {
                    rw = height[r];
                    r = r - 1;
                }
            }
        }
        return total;
    }
};
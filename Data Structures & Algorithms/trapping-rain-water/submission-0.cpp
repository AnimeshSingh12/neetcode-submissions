class Solution {
public:
    int trap(vector<int>& height) {
        if(height.empty())
        {
            return 0 ;
        }

        int l = 0 ;
        int r =  height.size()-1;

        int maxL = height[l];
        int maxR = height[r];
        int res = 0 ;

        while(l<r)
        {
            if(maxL<maxR)
            {
                l++;
                maxL= max(maxL,height[l]);
                res += maxL-height[l];
            }
            else
            {
                r--;
                maxR= max(maxR,height[r]);
                res += maxR-height[r];
            }
        }
        return res;
    }
};

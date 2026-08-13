class Solution {
public:
    int maxArea(vector<int>& heights) {
        int i  = 0  ;
        int j  = heights.size()-1;
        int res = 0 ;


        while(i<j)
        {
            int area = min(heights[i],heights[j])*(j-i);
            res=max(res,area);
             if(heights[i]<=heights[j])
            {
                i++;
            }
            else
            {
                j--;
            }
        }
       
    return res;
    }
};

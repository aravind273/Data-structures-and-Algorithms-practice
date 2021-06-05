//Given an array of intervals where intervals[i] = [starti, endi], merge all overlapping intervals, 
//and return an array of the non-overlapping intervals that cover all the intervals in the input.

 class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        if(intervals.size()<=1)
        {
            return intervals;
        }
        sort(intervals.begin(),intervals.end());
        vector<vector<int>> res;
        res.push_back(intervals[0]);
        for(int i=1;i<intervals.size();i++)
        {
            if(intervals[i][0]<=res[res.size()-1][1])
            {
                res[res.size()-1][1]=max(intervals[i][1],res[res.size()-1][1]);
            }
            else
            {
                res.push_back(intervals[i]);
            }
        }
        return res;
        
    }
};

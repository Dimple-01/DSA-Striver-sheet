class Solution {
public:
    int eliminateMaximum(vector<int>& dist, vector<int>& speed) {
        int i,j;
        vector<double> time;   //O(n)
        for(i=0;i<speed.size();i++)
        {
            time.push_back((double)dist[i]/(double)speed[i]);
        }
        sort(time.begin(),time.end());    // nlogn

        int tracker=0,ans=0;
        for(auto t : time)   
        {
            if(t<= tracker)    // compares that the time to reach the city by the moster is less than tracker or not.
            {
                break;
            }
            else
            {
                ans++;
                tracker++;
            }
        }
        return ans;
    }
};
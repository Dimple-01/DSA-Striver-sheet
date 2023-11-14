class Solution {
public:
    int theMaximumAchievableX(int num, int t) {
        int s;
        while(t!=0)
        {
            s= num+2;
            num=s;
            t--;
        }
        return s;
    }
};
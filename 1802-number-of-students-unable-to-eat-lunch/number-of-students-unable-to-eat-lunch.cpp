class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) {
        int cnt=0,i=0;
        queue<int> s;
        for(auto &x: students)
            s.push(x);
       
        
        while(cnt < s.size() && i < sandwiches.size())
        {
            if(s.front() == sandwiches[i])
            {
                s.pop();
                i++;
                cnt=0;

            }
            else
            {
                s.push(s.front());
                s.pop();
                cnt++;
                
            }
            
        }

        return s.size();
        

       
    }
};
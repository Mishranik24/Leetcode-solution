class Solution {
    typedef pair<double,int>p;
public:
    int eliminateMaximum(vector<int>& dist, vector<int>& speed) {
        priority_queue<p,vector<p>,greater<p>>q;
        for(int i=0;i<speed.size();i++)
        {
            double time=(double)dist[i]/(double)speed[i];
            q.push({time,i});
        }
        int ans=0,t=0;
        while(!q.empty())
        {
            auto node=q.top();
            q.pop();
            int index=node.second;
            int d=dist[index]-(t*speed[index]);
            if(d<=0)
            {
                break;
            }
            else
            {
                ans++;
            }
            t++;
        }
        return ans;
    }
};
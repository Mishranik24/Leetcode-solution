class Solution {
public:
    int garbageCollection(vector<string>& garbage, vector<int>& travel) {
         int m = 0, p = 0, g = 0, pick = 0;
        for(int i=0; i<garbage.size(); i++)
        {
            for(auto c : garbage[i])
            {
                if( c == 'M' ) m = i;
                else if( c == 'P' ) p = i;
                else g = i;
            }
            if( i>=1 && i<travel.size() ) travel[i] += travel[i-1];
            pick += garbage[i].size();
        }
        int ans = pick + 
                    ( m>0 ? travel[m-1] : 0 ) + 
                    ( p>0 ? travel[p-1] : 0 ) +
                    ( g>0 ? travel[g-1] : 0 );
        return ans;
    }
};
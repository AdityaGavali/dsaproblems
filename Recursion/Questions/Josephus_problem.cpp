//problem : https://practice.geeksforgeeks.org/problems/josephus-problem/1

class Solution
{
    public:
    int ind = 0;
    int solve(vector<int>v , int k){
        int n = v.size();
        if(n == 1){
            int ans = v[0];
            return ans;
        }
       
         ind = (ind+k)%n;
        v.erase(v.begin()+ind);
        return solve(v,k);
    }
    int josephus(int n, int k)
    {
       //Your code here
        vector<int>v(n);
        for(int i = 0;i<n;i++){
            int j = i+1;
            v[i] = j;
        }
        k--;
        return solve(v,k);
       
    }
};

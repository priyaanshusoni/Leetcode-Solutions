class Solution {
public:
    vector<int> vowelStrings(vector<string>& words, vector<vector<int>>& queries) {
        set<char>st ={'a','e','i','o','u'};

       vector<int>prefixSum;
       vector<int>ans;
       int sum=0;
       for(int i=0;i<words.size();i++){
        
        string str = words[i];
        if(st.find(str[0])!=st.end() && st.find(str[str.length()-1])!=st.end()){
           sum++;
        }

        prefixSum.push_back(sum);

       }

       for(int i=0;i<queries.size();i++){
         int start = queries[i][0];
         int end = queries[i][1];


         if(start==0){
            ans.push_back(prefixSum[end]);
         }

         else{
         ans.push_back(prefixSum[end] - prefixSum[start-1]);
         }
       }


       return ans;

      

       

    }
};
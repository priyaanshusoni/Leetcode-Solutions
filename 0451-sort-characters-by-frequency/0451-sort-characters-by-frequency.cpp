class Solution {
public:
    string frequencySort(string s) {
       map<char,int>mpp;
       string ans = "";
       vector<pair<int,char>>freq;

       for(int i=0;i<s.size();i++){
        mpp[s[i]]++;
       }

       for(auto it : mpp){
        freq.push_back({it.second , it.first});
       }


       sort(freq.begin(),freq.end());
       

     for(int i = freq.size()-1 ; i>=0 ; i--){
        while(freq[i].first){
            ans+=freq[i].second;
            freq[i].first--;
        }
        
     }
     


      
 

       return ans;
    }
};
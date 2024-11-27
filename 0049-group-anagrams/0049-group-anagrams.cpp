class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>>ans;
        map<string , int >mpp;
        if(strs.size()==1){
            ans.push_back(strs);
            return ans;
        }

            
       

        for(int i=0;i<strs.size();i++){
           
              vector<string>temp;
            string first = strs[i];
            string t1 = first;

             
            temp.push_back(t1);

            sort(first.begin() , first.end());

             if(mpp.find(first)!=mpp.end()) {
                continue;
            }
            
               mpp[first]=1;
           
              for(int j=i+1;j<strs.size();j++){

                  string second = strs[j];
                  if(second.length()!=first.length()) continue;
                  string t2 = second;
                  sort(second.begin() , second.end());
                  if(first==second){
                    
                    temp.push_back(t2);
                  }
              }
               
               ans.push_back(temp);

        }











































        return ans;
    }
};
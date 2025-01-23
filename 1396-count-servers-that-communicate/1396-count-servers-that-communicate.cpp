class Solution {
public:
    int countServers(vector<vector<int>>& grid) {
        int CountOfCommunicatableServers = 0;

        int numRows = grid.size();

        int numCols = grid[0].size();


        for(int row=0;row<numRows;row++){
           

            for(int col=0;col<numCols;col++){
                
                if(grid[row][col]==1){

                     bool canCommunicate = false;

                     //checking for communication in the same row 
                     for(int otherCol =0;otherCol<numCols;otherCol++){
                        if(otherCol !=col && grid[row][otherCol]==1){
                            canCommunicate = true;
                            break;
                        }

                     }

                     if(canCommunicate) CountOfCommunicatableServers++;


                     //checking for communication in the same coloumn 
                  else {

                    for(int otherRow =0;otherRow<numRows;otherRow++){
                        if(otherRow !=row && grid[otherRow][col]==1){
                            canCommunicate = true;
                            break;
                        }

                     }

                     if(canCommunicate) CountOfCommunicatableServers++;

                  } 

                }
            }
        }


      return CountOfCommunicatableServers;
    }
};
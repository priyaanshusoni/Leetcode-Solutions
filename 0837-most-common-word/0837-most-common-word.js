/**
 * @param {string} paragraph
 * @param {string[]} banned
 * @return {string}
 */
var mostCommonWord = function(paragraph, banned) {
   
  const cleaned = paragraph.replace(/[^a-zA-Z0-9\s]/g, " ").toLowerCase(); 

    // Step 2: Split the cleaned paragraph into an array of words
    let arr = cleaned.split(/\s+/);  // Split by any whitespace (handles multiple spaces)
    
    console.log(arr);  // For debugging
    // let arr = s.split(" ")
    console.log(arr);
    let obj = {};
    
  for(let i=0;i<arr.length;i++){
         (obj[arr[i]] ? obj[arr[i]]+=1 : obj[arr[i]] = 1)

       }
       console.log(obj)
           
let maxCount =0;
let commonWord = arr[0];

for(let i=0;i<arr.length;i++){
   
    if(!banned.includes(arr[i]) && arr[i] !==""){
       
       let Count = obj[arr[i]];
      console.log(obj[arr[i]]);
        if(Count > maxCount){
            maxCount = Count;
            commonWord = arr[i];
        }
    }
}


return commonWord;



  
    
};
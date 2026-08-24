function lengthOfLongestSubstring(s: string): number {

  

let left:number = 0;

let maxcnt:number = 0;

let map = {};



for(let right = 0 ; right <s.length ; right++) {


    let char:string = s[right];

    map[char] = map[char] ? map[char]+1 : 1


    while(map[char]>1){
        let leftChar:string = s[left];
        map[leftChar]-=1;
        if(map[leftChar]===0) delete map[leftChar]
        left++;
    }

  
    maxcnt = Math.max(maxcnt , right- left + 1)



}

return maxcnt;



    
};
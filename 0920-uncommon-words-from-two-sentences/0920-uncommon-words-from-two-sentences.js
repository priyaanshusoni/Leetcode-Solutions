/**
 * @param {string} s1
 * @param {string} s2
 * @return {string[]}
 */
var uncommonFromSentences = function(s1, s2) {

  let a = s1.split(" ");
  let b = s2.split(" ");


  let ans = new Map();

  for(let i=0;i<a.length;i++){
    if(ans.has(a[i])){
        ans.set(a[i] , ans.get(a[i])+1);
    }

   else  ans.set(a[i],1);
  }
  for(let i=0;i<b.length;i++){
    if(ans.has(b[i])){
        ans.set(b[i] , ans.get(b[i])+1);
    }

   else  ans.set(b[i],1);
  }

  let finalans = [];


  ans.keys().forEach((x)=>{
    if(ans.get(x)==1){
        finalans.push(x)
    }
  })

  return finalans;

}
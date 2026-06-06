/**
 * @param {number} k
 * @return {character}



 */



function getNextChar(c) {
    const alphabet = 'abcdefghijklmnopqrstuvwxyz';

    const charIndex = alphabet.indexOf(c);



    return alphabet[(charIndex + 1) % alphabet.length]
}



var kthCharacter = function(k) {

 



  let word = 'a'

  while(word.length <= k){

    const snapshot = word

    for (let i =0 ; i<snapshot.length ; i++) {
        word+= getNextChar(word[i]);
    }
  

  }



  return word[k-1]
    
};
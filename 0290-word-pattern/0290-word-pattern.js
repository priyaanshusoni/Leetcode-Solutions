/**
 * @param {string} pattern
 * @param {string} s
 * @return {boolean}
 */
var wordPattern = function(pattern, s) {
    let words = s.split(" ");


    let char2word = new Map();

    let word2char = new Map();

 if(words.length !== pattern.length) return false;


    let i=0;

    let j=0;




    while(i<pattern.length && j<words.length){

         

         if(char2word.has(pattern[i])){
            let word = char2word.get(pattern[i]);

            let wordTomap = words[j];

            if(word !== wordTomap) return false;


         }

         if(word2char.has(words[j])){
            let char = word2char.get(words[j]);

            let charTomap = pattern[i];

            if(charTomap !==char) return false;

         }



        char2word.set(pattern[i] , words[j]);
        word2char.set(words[j] , pattern[i]);

        i++;
        j++;


    }


    return true;
};
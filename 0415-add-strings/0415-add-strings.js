/**
 * @param {string} num1
 * @param {string} num2
 * @return {string}
 */
var addStrings = function(num1, num2) {

    if(num1.length==1 && num2.length==1){
        return (parseInt(num1) + parseInt(num2)).toString();
    }

    let s1 = num1.split("").reverse().join("");
    let s2= num2.split("").reverse().join("");
    
    let i=0;
    let j=0;

    let ans="";
    let carry=0;
    while(i<s1.length && j<s2.length){
        
      let temp = parseInt(s1[i]) + parseInt(s2[j]) + carry;
      if(temp>=10){
          temp=temp%10;
          ans+=temp;
          carry=1;
          i++;
          j++;

      }

      else{
          ans+=temp;
          i++;
          j++;
          carry=0;
      }

     
    }

    while(i<s1.length){
        let temp2=0;
        if(carry){
            temp2+= parseInt(s1[i]) + carry;
            if(temp2>=10){
                temp2 = temp2%10;
                ans+=temp2;
                carry=1;
                i++;
            }

            else{
                ans+=temp2;
                i++;
                carry=0;
            }
            
        }
        else{
           ans+=s1[i];
           i++;
        }
       
    }

    while(j<s2.length){
       let temp3=0;
        if(carry){
            temp3+= parseInt(s2[j]) + carry;
            if(temp3>=10){
                temp3 = temp3%10;
                ans+=temp3;
                carry=1;
                j++;
            }

            else{
                  ans+=temp3;
                  j++;
                  carry=0;
            }
            
        }
        else{
           ans+=s2[j];
           j++;
        }
    }

    if(carry){
           ans+=carry;
    }

   let sum =  ans.split("").reverse().join("");

     return sum;

};;
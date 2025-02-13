/**
 * @param {number} numRows
 * @return {number[][]}
 */

 function pascalTriangle(col , row){

    let res = 1;

    for(let i=0;i<col;i++){
        res = res * (row-i);
        res = Math.floor(res/(i+1));
    }

    return res;


 }
var generate = function(numRows) {


   let finalArray = [];


    for(let row=1;row<=numRows;row++){

        let ans = [];

        for(let col=1;col<=row;col++){

        let temp = pascalTriangle(col-1,row-1);

        ans.push(temp);
    }

    finalArray.push(ans);

    }

    
    

    return finalArray;

};
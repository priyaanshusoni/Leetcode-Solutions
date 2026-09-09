function checkInclusion(s1: string, s2: string): boolean {

    if(s1.length > s2.length) return false;
    


    let s1Arr:number[] = new Array(26).fill(0);
    let s2Arr:number[] = new Array(26).fill(0);


    for(let i=0 ; i<s1.length ; i++){

        s1Arr[s1.charCodeAt(i) - 97]+=1;
        s2Arr[s2.charCodeAt(i)-97]+=1;

    }

    const isEqual = (arr1 , arr2)=> arr1.every((val , index)=> val ===arr2[index])

    if(isEqual(s1Arr , s2Arr)) return true;

    for(let i = s1.length ; i<s2.length ; i++){
        s2Arr[s2.charCodeAt(i) - 97]+=1;
        s2Arr[s2.charCodeAt(i-s1.length)-97]-=1;

        if(isEqual(s1Arr , s2Arr)) return true;

    } 

    

    return false;



};
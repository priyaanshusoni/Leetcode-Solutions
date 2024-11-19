function reverseWords(s: string): string {
        let q = [];

        let arr = s.split(' ');

     

        for(let i=0;i<arr.length;i++){
            let temp = arr[i].split('').reverse().join('');
            
            arr[i] = temp;

           
        }

         
        return arr.join(' ');
};
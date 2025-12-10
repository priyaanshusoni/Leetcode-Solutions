type MultiDimensionalArray = (number | MultiDimensionalArray)[];

var flat = function (arr:  MultiDimensionalArray, n: number):  MultiDimensionalArray {
        let result = [

            ];


            for (let item of arr) {
                

                if(Array.isArray(item) && n > 0) {

                    let flatArray = flat(item , n-1)

                    result.push(...flatArray)

                }

                 else {
                    result.push(item)
                 }
            }


            return result;



};
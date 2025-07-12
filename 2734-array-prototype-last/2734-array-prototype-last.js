/**
 * @return {null|boolean|number|string|Array|Object}
 */
Array.prototype.last = function() {

    let n = this.length - 1;
    
   return this.length===0 ? -1 : this[n];
};

/**
 * const arr = [1, 2, 3];
 * arr.last(); // 3
 */
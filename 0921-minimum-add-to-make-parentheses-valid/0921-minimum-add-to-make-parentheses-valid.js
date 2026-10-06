/**
 * @param {string} s
 * @return {number}
 */
var minAddToMakeValid = function (s) {

    let st = [];



    for (let i = 0; i < s.length; i++) {
        if (s[i] === '(') {
            st.push(s[i])

        }

        if (s[i] === ')') {

            if (st.length && st[st.length - 1] === '(') st.pop();

            else st.push(s[i])

        }
    }

    return st.length;

};
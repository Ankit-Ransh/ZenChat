
class Solution {
    // Function to remove duplicates from the given array.
    removeDuplicates(arr) {
        let distinct = 0;
        const size = arr.length;
        const distinctArr = [];
        
        let i = 0, j = 0;
        while(i < size) {
            // console.log(i, j, arr[i]);
            distinctArr.push(arr[i]);
            j = i;
            
            while(j < size && arr[i] === arr[j]) j++;
            distinct++;
            // console.log("---> ",j);
            
            i = j;
        }
        
        // i = 0;
        // distinctArr.forEach((item) => {
        //     arr[i++] = item;
        // })
        
        arr = distinctArr.slice(); // 32 40 43 60 72 78 82 82 
        /* slice will create a shallow copy but it will not  */


        return distinct;
    }
}

const arr = [32, 40, 43, 60, 72, 78, 82, 82, 82, 99];
let obj = new Solution();
let ans = obj.removeDuplicates(arr);
for (let i = 0; i < ans; i++) {
    process.stdout.write(arr[i] + " ");
}
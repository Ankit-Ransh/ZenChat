console.time();
setTimeout(() => console.log("Inside setTimeout"), 1000);

let timer = 9;
for (let i = 0; i < 1e8; i++) {
    if(i > 1e6 && timer) {
        timer--;
        console.log("Hello");
    }
} /*
 Long loop --> it will delay the call to callback queue therefore setTimeout will 
 be called after the loop executes which may be more than 1 second
 */

console.timeEnd();

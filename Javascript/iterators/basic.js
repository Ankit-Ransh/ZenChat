const arr = [1, 2, 3, 4, 5];
const it = arr[Symbol.iterator]();

console.log(JSON.stringify(it.next()));
console.log(JSON.stringify(it.next()));
console.log(JSON.stringify(it.next()));
console.log(JSON.stringify(it.next()));
console.log(JSON.stringify(it.next()));
console.log(JSON.stringify(it.next()));

const arr2 = ['a', 'b', 'c'];
const it1 = arr2[Symbol.iterator]();
for(let value of it1) {
    console.log("Value --> ", value);
}
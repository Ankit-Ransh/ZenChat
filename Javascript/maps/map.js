const map = new Map([
    ['name', 'Ankit'],
    ['age', 22],
    ['status', 'Happy'],
    ['name', 'Shreya'] // overrides the existing key
]); // stores unique values only

console.log(map);

const myName = map.get('name'); // value is copied 
console.log('My name is ', myName);

map.set('name', 'Ankit'); // override here
console.log('My name is ', map.get('name'));

map.delete('name'); // deletes all occurences
console.log(map);

const isName = map.has('name');
console.log(isName);
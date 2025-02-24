const nums = [1, 2, 3, 4, 5];

const squared = nums.map((num) => num * num);
console.log(`Squared ${squared}`);

const halved = nums.map((num) => {
    return num >> 1;
});
console.log(`Halved ${halved}`);

const even = nums.filter((num) => num % 2 == 0);
console.log(`Even ${even}`);

const sum = nums.reduce((sum, num) => num + sum, 0);
console.log(`Sum ${sum}`);

nums.forEach((num) => console.log("Value ", num));

const firstEven = nums.find((num) => num % 2 == 0);
console.log(firstEven);

const someEven = nums.some((num) => num % 2 == 0);
console.log(someEven);

const everyEven = nums.every((num) => num % 2 == 0);
console.log(everyEven);
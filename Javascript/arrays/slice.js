const myHonda = {
    name: "Honda", 
    color: "purple"
};

const myCar = [myHonda, "Baby coloring"];
console.log(myCar);

myHonda.color = "Red";
console.log("Honda ", myHonda);
console.log("Car ",myCar);
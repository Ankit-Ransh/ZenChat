function Person(name) {
    this.name = name;
    
    this.sayName = function () {
        console.log(this.name);
    };

    setTimeout(function () {
        console.log(this.name); // Undefined because 'this' refers to global object
    }, 1000); 
}

const G = new Person("GFG"); // Constructor Function
G.sayName(); 

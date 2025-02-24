const person = {
    name: "Ankit",
    greet: function () {
        console.log('Hello', this.name);
    }
};

const greet = person.greet;
greet();


const vehicle = {
    owner: "Ankit",
    company: "Alto",
    specifier: function (owner, company, defaults = "Poor") {
        console.log(this.owner + " owns " + this.company);
        console.log(owner + " owns " + company);
    }
};

const specifier = vehicle.specifier.bind(vehicle);
specifier();

const callSpecifier = vehicle.specifier;
callSpecifier.call(vehicle, "Shreya", "Creta");

const applySpecifier = vehicle.specifier;
applySpecifier.apply(vehicle, ["Riya", "BMW", "Rich"]);

{
    const name = "Name";
    console.log(name);
}


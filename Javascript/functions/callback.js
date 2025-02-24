const preCall = (argument, callback) => {   
    return callback(argument + 1);
};

const callback = (argument) => {
    return argument << 1;
};

console.log(preCall(2, callback));
const promise1 = () => {
    return new Promise((resolve, reject) => {
        resolve("Promise 1");
    });
};

const promise2 = () => {
    return new Promise((resolve, reject) => {
        resolve("Promise 2");
    });
};

const resolved = async () => {
    const promises = await Promise.all([promise1(), promise2]); // promise 1 called but not promise 2
    console.log(promises);
}

resolved();
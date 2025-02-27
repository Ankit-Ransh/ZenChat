// setTimeout(() => {
//     console.log("Step 1");
//     setTimeout(() => {
//         console.log("Step 2");
//         setTimeout(() => {
//             console.log("Step 3");
//         }, 1000);
//     },1000);
// },1000);
/* This makes just code unreadable */

const promise = (x) => {
    return new Promise((resolve, reject) => {
        resolve(`Step ${x}`);
    })
}

const resolvedHell = async () => {
    const resolvedPromises = await Promise.all([
        promise(1),
        promise(2),
        promise(3)
    ]);

    return resolvedPromises;
}

resolvedHell().then(console.log);
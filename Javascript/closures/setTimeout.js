console.time("Starting");

function createTimer () {
    for(let i = 1; i <= 3; ++i) {
        setTimeout(function () {
            console.log("Console ", i);
        }, 3000);
    }
}
createTimer();

function createTimerArr () {
    for(let i = 1; i <= 3; ++i) {
        setTimeout(() => {
            console.log(`Timer is ${i}`);
        }, 3000);
    }
}
createTimerArr();

console.timeEnd();


/*
    * Event loop task is to take top element of the queue and process it in call stack *
    ** We have two queues 
        1) Message Queue
        2) Call stack


    when execution starts, 
        Message Queue --> 
        Call stack --> createTimer, createTimerArr
    
    After 3 second delay,   
        Message Queue --> setTimeout with 3 second delay 
            delay(console.log(Console 1)), delay(console.log(Console 2)), delay(console.log(Console 3))
            delay(console.log(Timer 1)), delay(console.log(Timer 2)), delay(Timer.log(Console 3))
        Call stack --> createTimer, createTimerArr

    Just after 3 seconds
        Message Queue --> 
        Call stack --> delay(console.log(Console 1)), delay(console.log(Console 2)), delay(console.log(Console 3))
            delay(console.log(Timer 1)), delay(console.log(Timer 2)), delay(Timer.log(Console 3))

    event loop will pick one by one only but it will happen within 1 second.
*/
function takeOrder(callback) {
    setTimeout(() => {
        console.log("1. Order taken");
        callback();
    }, 1000);
}

function prepareFood(callback) {
    setTimeout(() => {
        console.log("2. Food prepared");
        callback();
    }, 2000);
}

function packFood(callback) {
    setTimeout(() => {
        console.log("3. Food packed");
        callback();
    }, 1000);
}


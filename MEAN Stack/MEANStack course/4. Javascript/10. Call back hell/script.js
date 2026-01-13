// console.log("One");
// console.log("Second");
// setTimeout(function (){
//     console.log("This message will come after 3 seconds");
// },3000)
// console.log("Third");

function getCandies(callback1){
    setTimeout(() => {
        const candy = "🍬"
        console.log("in get candy method",candy);
        // return candy
        callback1(candy)
    }, 3000);
}

function handovermethod(candy,callback2){
    setTimeout(() =>{
        const key = candy+"🔑"
        console.log("in our handover method",key);
        callback2(key)
    },3000)
}

function onboarding(key ,callback3){
    setTimeout(() =>{
        const onboarded = key+"🏠"
        console.log("in our onboarding method",onboarded);
        callback3(onboarded)
    },3000)
}

// console.log(getCandies());
getCandies((candy) =>{
    handovermethod(candy,(key)=>{
        onboarding(key,(onboarded) =>{
                console.log("Welcome to our restaurant",onboarded);
                
        })
    })
    
    
})


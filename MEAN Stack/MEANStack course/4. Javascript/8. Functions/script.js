// // 
// // some other code snippet
// //
// const a = 10;
// const b = 2;
// // const aPlusB = a + b;
// // console.log("Result: ", aPlusB);
// let resultaandb = sum(a,b)
// // 
// // some other code snippet
// //
// const x = 12;
// const y = 6;
// // const xPlusY = x + y;
// // console.log("Result: ", xPlusY);
// console.log(sum(x,y));
// // 
// // some other code snippet
// //
// const l = 20;
// const k = 4;
// // const lPlusK = l + k;
// // console.log("Result: ", lPlusK);
// sum(l,k)
// //
// // some other code snippet
// //
// //function dec
// // function sum(r,k)
// // {
// //     const result = r+k;
// //     // console.log("result", result);
// //     return result;
// // }

// function sum(r,k)
// {
//     const result = r+k;
//     console.log("result", result);
//     return result;
// }
// //func call 
// sum(20,30)

// function greet()
// {
//     console.log("Welcome to our application  :-)");
// }
// greet()

// function greet1(username)
// {
//     console.log("Welcome to our application  :->",username);
// }
// greet1("Vedant")

// // Anonymous function / func expression

// let summation = function (r,k)
// {
//     const result = r+k;
//     return result;
// }

// console.log(summation(20,30));

//nested functions
let num;
function addsquares(a,b)
{
    const x = square(a);
    const y = square(b);
    function square(num)
    {
        let res = 2
        return num*num;
    }return x+y
    // console.log(square(2));
    
}
console.log(addsquares(2,3));

// console.log(square(2));
// addsquares(2,3)
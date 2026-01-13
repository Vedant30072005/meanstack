// // named functions

// function greet()
// {
//     console.log("hello everyone");
    
// }
// greet()

// // anonymous functions

// let greet2 = function ()
// {
//     console.log("hello everyone");
    
// }
// greet2()

// // Arrow functions

// let greet3 = () =>
// {
//     console.log("hello everyone");
    
// }
// greet3()

// const square = (num) =>
// {
//     return num*num
// }
// console.log(square(3));

// const square = (num) => num*num
// console.log(square(4))

// const calculate = (a,b,operation) => {
//     return operation(a,b)
// }

// const summation = calculate(2,3,function(n1,n2){
//     return n1+n2
// })
// console.log(summation)

// to print the first negative number

const arr = [9,2,5,7,3,8,-1,-6,-4];
const printthefirstnegativenumber = (num) => num<0
// const printthefirstnegativenumber = (num)
// {
//     return num<0
// }

// const result = arr.find(printthefirstnegativenumber)
// console.log(result);

arr.forEach((num,index)=>{
    console.log("Element",num, "index", index);
    
})
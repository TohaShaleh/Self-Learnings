
// When We need to perform an action for each element in an Array 
// But don’t need to return a new array.

let arr=['toha','afrin','priya apu','prema apu','anika apu'];

arr.forEach((item,idx) => {
     let a=item.toUpperCase();
     console.log(`${a} is at : ${idx} `);
    
});



// When We want to transform each element of an array and obtain a new array 
// With the transformed values.

let arr1=[1,2,3,4,5,6,7,9]
let arr2=arr1.map((val)=>{
      return val*3
})
console.log(`${arr1}    ${arr2} `);


// Creates a new array with all elements that pass the test 
// implemented by the provided function.

let arr3=arr1.filter((item)=>{
    return item%3==0;
})
console.log(`${arr1}    ${arr3} `);


// When We want to aggregate array elements into a single value

let sum=arr1.reduce((previous,current)=>{
    return previous+current;

})

let product=arr1.reduce((prev,curr)=>{
    return prev*curr;

})
console.log(`The sum is : ${sum} and the product is : ${product} `);



// To Sort any array of string 
// et sorted=arr.sort();


// To Sort any numeriacal array of elements 
// By the use of sort method , it will change the main array !! 

let ar=[4,3,6,9,0,3,10,5];
ar.sort((a,b)=>{
    return a-b;
})

console.log(ar);

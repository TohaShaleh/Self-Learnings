
let arr=['toha','afrin','priya apu','prema apu','anika apu'];



arr.forEach((item,idx) => {
     let a=item.toUpperCase();
     console.log(`${a} is at : ${idx} `);

    
});

let arr1=arr.map((item)=>{
    return `item.concat(item)`;
})

console.log(arr1);

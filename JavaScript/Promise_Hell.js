const getdata=(id)=>{
    return new Promise((resolve,reject)=>{
        setTimeout(() => {
            console.log("Student id : ", id);
            if(id%2==0)
                {
                   resolve(`Student id : ${id} is Even `);
                }
            else
            {
                reject(`Student id : ${id} is Odd  and Good Bye`);
            }
           
            
        }, 1000);
    })
}

// Promise Hell Start From Here 
console.log("Taking student with id : 2 ");
getdata(2)
    .then((res)=>{
        console.log(res)
        console.log("Now Taking student with id : 6 ")
        return getdata(6)
    })
    .then((res)=>{
        console.log(res)
        console.log("Now Taking student with id : 10")
        return getdata(10)
    })
    .then((res)=>{
        console.log(res)
        console.log("Now Taking student with id : 13")
        return getdata(13)
    })
    .catch((err)=>{
        console.log(err)
    })
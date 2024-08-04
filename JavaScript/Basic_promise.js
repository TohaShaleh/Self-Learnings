
//  Generally any Function or API Return us a promise

//  Promise is Returned As an Object 

//  Promise can be in 3 States : 1. Pending or Undefined  |  2.Resolved or Fullfilled  |  3.Rejected or Error

var promise1 = new Promise((resolve,reject)=>{
    console.log("Hi there , it's toha");
    var a=prompt('Enter what you want succes or error : ');
    if(a=='succes')
        {
             return resolve("Yesss Succeed ");
        }
    else if(a=='error')
    {
        reject("Error man");
    }

})

promise1
   .then((res)=>{
    console.log(res);
   })
   .catch((err)=>{
    console.log(err);
   })




// Another example of Promise below : 

const getdata=(id)=>{
    return new Promise((resolve,reject)=>{
        setTimeout(() => {
            console.log("Student id : ", id);
           resolve(`Found Student with student id : ${id}`);
           // reject(`Not Found Student with student id : ${id} , Try Later !!! `);
            
        }, 1000);
    })
}

let promise2=getdata(30);
promise2
    .then((result)=>{
        console.log(result);  // This will print
    })
    
    .catch((error)=>{
        console.log(error);
    })




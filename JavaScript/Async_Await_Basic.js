// Async function always returns a promise 
// Await Pauses the execution of it's surrounding Async Function untill the promise is settled 
// Await is always written inside the Async Function 


// One common example can be , in FaceBook at first it takes Username
// if the Username is Right , then it takes the Password from User ...
 
function api(num){
    return new Promise((resolve,reject)=>{
        setTimeout(() => {
            console.log(`Weather Data Found at channel ${num} `);
            if(num<50000)
                {
                    resolve(`Succes`);
                }
            else
               {
                    reject(`Error`);
               }
        }, 1500);

    })
}


async function getweather(){
    await api(10001);
    await api(20003);
    await api(40007);
    await api(30008);
    console.log("hello ");

}

getweather();


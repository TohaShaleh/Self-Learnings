

function getdata(id,name,getnext){
    setTimeout(() => {
        console.log("Student Id : ", id)
        console.log("Student Name : ", name)
        if(getnext)     // Check Wheather getdata Function passed or not 
            {
                getnext();
            }
        else
        {
            console.log("CallBack function has not been passed as argument ! ");
        }
        
    }, 1300);
}

//  Basic Callback function 
//  getdata(31,"Toha",function()   // This is the Callback function which is passed as argument to another function 
//    {
//         getdata(20,"Badhon")     // Here Callback function is not sent 
//    });


//Callback Hell
console.log("Calling Pavel --- ");
getdata(61,"pavel",()=>{

    console.log("Calling Tanvir --- ")
    getdata(2,"Tanvir",()=>{

        console.log("Calling Salman -- ")
        getdata(102,"Salman",()=>{

            console.log("Calling Nurullah -- ");
            getdata(50,'Nurullah',()=>{

                console.log("Calling Shimul --- ");
                getdata(21,"Shimul");
                
            })
        })
    })
})
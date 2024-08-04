

function getdata(id,name,getnext){
    setTimeout(() => {
        console.log("Student Id : ", id)
        console.log("Student Name : ", name)
        if(getnext)     // Check Wheather getdata Function passed or not 
            {
                getnext();
            }
        
    }, 1300);
}

getdata(1,"Toha",function()   // This is the Callback function which is passed as argument to another function 
  {
       getdata(2,"Afrin")     // Here Callback function is not sent 
  });
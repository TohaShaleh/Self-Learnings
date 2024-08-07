let newbtn=document.querySelector("#btn");

newbtn.onclick=()=>{
    console.log("Hi , i am from JS file event handling");
}



// node.addEventListener("Event",Callback)
// We will always use addEventlistener ....

newbtn.addEventListener("click",()=>{
    console.log("First time call vai! ");
})


const del=()=>{
    console.log("Second time call vai ! ");
}
newbtn.addEventListener("click",del);


newbtn.addEventListener("click",()=>{
    console.log(" Second time was delete and i am Third time call vai ! ");
})


// Now to delete the Event
// here we have used "del" function so that it takes same location in memory ..
// so it is easy to delete 

newbtn.removeEventListener("click",del);



// Question : Create a toggle button that changes the screen to dark-mode when clicked
// then Changes into Light mode when clicked again ..

let body1="white";
let btn2=document.querySelector("#btn2");

//  btn2.addEventListener("click",()=>{
//     if(body1=="dark"){
//         body1="white";
//         document.querySelector("body").style.backgroundColor="white";
        
//     }
//     else if(body1=="white"){
//         body1="dark";
//         document.querySelector("body").style.backgroundColor="black";
//     }
//     console.log(body1);
    
// })




// Solving this problem by ClassList using CSS file

let body=document.querySelector("body");
btn2.addEventListener("click",()=>{
    if(body1=="dark"){
        body1="white";
        body.classList.add("white")
        body.classList.remove("dark")
        
    }
    else if(body1=="white"){
        body1="dark";
        body.classList.add("dark");
        body.classList.remove("white")
    }
    console.log(body1);
    
})





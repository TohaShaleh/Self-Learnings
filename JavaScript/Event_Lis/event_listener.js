let newbtn=document.querySelector("#btn");

newbtn.onclick=()=>{
    console.log("Hi , i am from JS file event handling");
}



// node.addEventListener("Event",Callback)
// We will always use addEventlistener ....

newbtn.addEventListener("click",()=>{
    console.log("Hi i am from addEventlistener ! ");
})


const del=()=>{
    console.log("Second time call vai ! ");
}
newbtn.addEventListener("click",del);


newbtn.addEventListener("click",()=>{
    console.log("Third time call vai ! ");
})


// Now to delete the Event
// here we have used "del" function so that it takes same location in memory ..
// so it is easy to delete 

newbtn.removeEventListener("click",del);



// Question : Create a toggle button that changes the screen to dark-mode when clicked
// then Changes into Light mode when clicked again ..
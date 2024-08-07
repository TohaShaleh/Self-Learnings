let id=document.createElement("h2");
id.innerText="Hi i am a new heading 2.o ! ";
console.log(id);

document.getElementById("div1").style.backgroundColor="red"; // Takes one single elememt

// It returns an HTMLCollection (a collection of elements), Like an Array 
// and we need to iterate over this collection 
// to apply styles to each element

let para=document.getElementsByClassName("heading");
para[1].style.color="white";   // it makes green the second element with className "Heading"


// It makes all the elements with "heading" class blue background color ...
for(let i=0;i<para.length;i++)
    {
        para[i].style.backgroundColor="blue";
    }

// The above operation we can also do with querySelectorAll 

let para1=document.querySelectorAll(".heading").forEach((element)=>{
    element.style.color="yellow";
})



// If we want to take only the first element of "heading" class , then :

let para2=document.querySelector(".heading");
para2.innerHTML="<u>hi i am new text with underline</u>"

// Change the innertext of the p tag 
let pa=document.getElementsByTagName("p");
Array.from(pa).forEach((element)=>{         // We can also use For ... Of here 
    element.innerText=element.innerText + " I am added ! ";
})


// add a "div" as the first element inside the Div tag

let new_div=document.createElement("div");
new_div.innerHTML="<h3>Hi i am under arrest !! </h3>";

document.querySelector("#div1").prepend(new_div);
// document.querySelector("#div1").after(new_div);
// document.querySelector("#div1").before(new_div);
// document.querySelector("#div1").append(new_div);

document.getElementById("sp").style.backgroundColor="black";
document.getElementById("sp").style.color="white";


// Node.style.properties 
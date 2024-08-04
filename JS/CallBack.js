
// A Callback is a function that passed as an argument to another function .

function Disp(a,b,getnext){
    setTimeout(() => {
        console.log("hello world ! ");
        if(getnext)
            {
                console.log('Two numbers are ', a , 'and ', b);
                getnext(a,b);
            }
        else
        {
            console.log("CallBack Function ase nai vai !");
        }
        
    },1000);
}

function Disp1(c,d){
    console.log("Ans their Sum : ", c+d);
}

Disp(100,200,Disp1);
Disp(20,10);
Disp(1,4,Disp1);

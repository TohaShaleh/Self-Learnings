import React, { useState } from 'react'

const App = () => {
  const [curr, setCurr] = useState(0)    // for the counter app
  const [input,setInput] = useState()   // control the input valu

  const updatevalue=(event)=>{
    
    if(Number(event.target.value)==NaN)
      {
        alert("Please enter a number");
      }
    setInput(Number(event.target.value));
  }

  // Handle form submission for increasing the value
  const handleIncrease = (event) => {
    event.preventDefault(); // Prevent default form submission
    setCurr(curr + input); // Increase curr by input value
  };

  // Handle form submission for decreasing the value
  const handleDecrease = (event) => {
    event.preventDefault(); // Prevent default form submission
    setCurr(curr - input); // Decrease curr by input value
  };

  return (
    
    
   <div className="bg-blue-400 w-full h-screen flex justify-center items-center">

      <div className="bg-yellow-300 w-full flex flex-col justify-center items-center gap-10">

        <h1 className='mt-5 font-bold text-6xl'>Counter App</h1>

        <div>

          <form action="">
            <label htmlFor="take_number" className='text-3xl'>Enter what amount you want to increase or decrease : </label>
            <input type="number" 
              onChange={updatevalue} 
              value={input}
              placeholder='Enter a number '
              required
              className='w-[200px] p-5'
            />

          </form>
          
        </div>

        <h1 className='text-black-500 text-3xl'>{curr}</h1>

        <div className="flex gap-10">
          <button onClick={
            handleIncrease
          } className='bg-gray-300 h-9 rounded w-[160px] mb-5 hover:bg-gray-800 hover:text-white'>increase</button>
      
          <button onClick={
            handleDecrease
          } className='bg-gray-300 h-9 rounded w-[160px] mb-5 hover:bg-gray-800 hover:text-white'>Decrease</button>
        </div>

        <div className=''>
          <button onClick={()=>{
            setCurr(0);
          }} className='bg-red-400 w-[200px] h-12 p-3 m-4 hover:bg-red-900' > Reset

          </button>
        </div>

      </div>


      </div>

    
  )
}

export default App
"use client"
import React, { useState } from 'react'

const page = () => {

  const [title, settitle] = useState("")
  const [descrip, setdescrip] = useState("")
  const [store, setstore] = useState([]);

  
  //Taking Title input
  const take_title = (e) => {
    settitle(e.target.value);

  }

  //Taking description input
  const take_descrip = (e) => {
    setdescrip(e.target.value);

  }

  //Function to store title and description in Store array which is array of objects
  const add_title = (e) => {
    e.preventDefault();
    setstore([...store, { title, descrip }]);
    setdescrip("")
    settitle("")
  }

  //Function to delete the title and description by passing the specific index
const deletetask=(ind)=>{
  const delstore=[...store];
  delstore.splice(ind,1);
  setstore(delstore);

}
 


  return (
    <>
      <div className='w-full h-screen bg-slate-200'>

        <div>
          <h1 className='text-6xl font-bold text-center bg-green-500 w-full h-[100px] flex justify-center items-center'>My ToDo List</h1>
        </div>

        <form onSubmit={add_title} className='flex items-center justify-center'>
          <input type='text' placeholder='Enter Title Here' required
            value={title}
            onChange={take_title}
            className='w-[400px] rounded p-5 m-10 text-xl'
          />

          <input type='text' placeholder='Enter Description Here' required
            value={descrip}
            onChange={take_descrip}
            className='w-[400px] rounded p-5 m-10 text-xl'

          />

          <button type='submit' className='text-2xl rounded bg-blue-500 p-5 m-10 hover:bg-yellow-400'>Add Task</button>

        </form>

        {store.length == 0 ? (
          <h1 className='font-bold text-4xl text-center -translate-x-10 m-10'>The List is Empty</h1>
        ) : (
          <div className='m-7 bg-slate-400'>
            
              {store.map((item, ind) => {
                return (
                 
                  <div key={ind} className='flex justify-center items-center mb-7'>
                      
                      <h1 className='w-[300px] text-3xl'>{item.title}</h1>
                      <h1 className='w-[300px] text-2xl'>{item.descrip}</h1>

                         
                         // Added the Button for the delete task
                         <button onClick={()=>{
                        deletetask(ind)
                      }} className='bg-red-600 rounded hover:bg-green-500 p-3 m-3'>Delete Task</button>
                      
                  </div>
                 
                )
              })}
            
          </div>


        )}





      </div>

    </>
  )
}

export default page













// This is For Fully Responsive for all screens 

"use client"
import React, { useState } from 'react'

const page = () => {

  const [title, settitle] = useState("")
  const [descrip, setdescrip] = useState("")
  const [store, setstore] = useState([]);

  const take_title = (e) => {
    settitle(e.target.value);
  }

  const take_descrip = (e) => {
    setdescrip(e.target.value);
  }

  const add_title = (e) => {
    e.preventDefault();
    setstore([...store, { title, descrip }]);
    setdescrip("")
    settitle("")
  }

  const deletetask = (ind) => {
    const delstore = [...store];
    delstore.splice(ind, 1);
    setstore(delstore);
  }

  return (
    <>
      <div className='w-full min-h-screen bg-slate-200 p-5'> {/* Added padding for better spacing on small screens */}

        <div>
          <h1 className='text-4xl md:text-6xl font-bold text-center bg-green-500 w-full h-[80px] md:h-[100px] flex justify-center items-center'>
            My ToDo List
          </h1>
        </div>

        <form onSubmit={add_title} className='flex flex-col md:flex-row items-center justify-center gap-5 mt-5'>
          {/* Changed to flex-col on small screens, flex-row on medium and above */}
          <input type='text' placeholder='Enter Title Here' required
            value={title}
            onChange={take_title}
            className='w-full md:w-[400px] rounded p-3 md:p-5 text-lg md:text-xl' 
            // Adjusted width, padding, and font size for responsiveness
          />

          <input type='text' placeholder='Enter Description Here' required
            value={descrip}
            onChange={take_descrip}
            className='w-full md:w-[400px] rounded p-3 md:p-5 text-lg md:text-xl'
            // Adjusted width, padding, and font size for responsiveness
          />

          <button type='submit' className='w-full md:w-auto text-xl rounded bg-blue-500 p-3 md:p-5 hover:bg-yellow-400'>
            Add Task
          </button>
        </form>

        {store.length === 0 ? (
          <h1 className='font-bold text-2xl md:text-4xl text-center mt-10'>The List is Empty</h1>
        ) : (
          <div className='mt-7 bg-slate-400 p-3 rounded'>
            {store.map((item, ind) => {
              return (
                <div key={ind} className='flex flex-col md:flex-row justify-center items-center gap-5 mb-7'>
                  {/* Changed to flex-col on small screens, flex-row on medium and above */}
                  <h1 className='w-full md:w-[300px] text-2xl md:text-3xl text-center md:text-left'>
                    {item.title}
                  </h1>
                  <h1 className='w-full md:w-[300px] text-xl md:text-2xl text-center md:text-left'>
                    {item.descrip}
                  </h1>
                  <button onClick={() => deletetask(ind)}
                    className='bg-red-600 rounded hover:bg-green-500 p-2 md:p-3'>
                    Delete Task
                  </button>
                </div>
              )
            })}
          </div>
        )}
      </div>
    </>
  )
}

export default page

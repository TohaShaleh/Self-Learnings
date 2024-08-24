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

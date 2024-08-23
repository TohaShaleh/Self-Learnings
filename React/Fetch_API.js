"use client"

import axios from 'axios'
import React, { useState } from 'react'

const page = () => {

  const [images, setimages] = useState([])

  const getimages=async ()=>{

    try {

      const response=await axios.get('https://picsum.photos/v2/list');
      const data=response.data;
      setimages(data);
      console.log(images);
      
    }
    catch (error) {

      console.error("Error in image fetching!!");
      
    }
    

  }
  return (
    <>
    <button onClick={getimages} className='bg-green-400 text-white font-bold m-8 w-[130px] hover:bg-green-800'>Get Images</button>
    <div className='p-10'>
      {images.map((item,i)=>{
        return <img key={i} src={item.download_url} width={300} height={300}
                    className='rounded m-10 inline-block'
                 />

      })}
    </div>
    </>
    
  )
}

export default page
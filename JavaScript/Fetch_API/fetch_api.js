// Function to fetch and print data using async/await
const fetchAndPrintPosts = async() => {
    try {
        // Get the response in JSON formate , which is not readable data
        // Fetch (URL) is used to fetch a resorce which is data
        // Fetch method returns the first Promise  

        const response = await fetch('https://jsonplaceholder.typicode.com/posts');


        // Convert the response i.e JSON format data into JavaScript object , which are readable or usable data
        // By using json() method we convert JSON format data into usable data
        // and it also returns us a Promise thats why we have used await 
        const data = await response.json(); 
        
        data.forEach(post => {                   // Using each of the data separately 
            console.log(`Title: ${post.title}`);
            console.log(`Body: ${post.body}`);
            console.log('---');                  // Separator between posts
        });

    } catch (error) {                        // If any error occured then it returns 
        console.error('Error fetching data:', error);   // console.error is like console.log but specifically it used for errors

    }
}

// Call the async function 
fetchAndPrintPosts();

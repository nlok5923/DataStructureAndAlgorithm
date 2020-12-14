// using huffman coding for text compression

// most freq occuring charactes ki space kam kardi 
// may be less occuring character ki space bad jaye 

// get count of all characters 
// find two  characters with minimum count 
// club both the characters(adding count)
// removing both from the sorted list 
// clubing the sorted freq elements by considering the clubed elements too as inddividual elements
// making the huffman tree by repeating the above steps 
// give o to left and 1 to right
// move from root to the particular elements to get the huffman code that particular element
   
// decrypting the huffman code 
// no code prefix can be someone else character's code
// through huffman we assign uniqe code to each character 


// Thought of implementation 

// 1) count freqeucy of character : maintain count of each character 
// 2) Club the two minimum values elevery time after clubing the value treat the clubbed value as a single element.
// 3) Use priority queue to get two minimum value every time 
// 4) figure out unique code for each character from passing to root from the each leaf to get the huffman code concat 0 while moving left and use 1 while moving right
// 5) Save all code corresponding to chracter using hashmap
// 6) treat them a bits not a byte 



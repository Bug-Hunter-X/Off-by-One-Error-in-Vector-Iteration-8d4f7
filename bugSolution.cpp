std::vector<int> myVector; 

// ... some code that adds elements to myVector ...

for (int i = 0; i < myVector.size(); ++i) { //Corrected loop condition
  std::cout << myVector[i] << " ";
}

//This corrected code avoids the out-of-bounds access by ensuring the loop iterates only up to the last valid index.
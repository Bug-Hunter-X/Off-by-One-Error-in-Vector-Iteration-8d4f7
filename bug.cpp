std::vector<int> myVector; 

// ... some code that adds elements to myVector ...

for (int i = 0; i <= myVector.size(); ++i) { //Error prone loop condition
  std::cout << myVector[i] << " ";
}

//This code is likely to cause a crash due to accessing memory beyond the vector's bounds, because the loop condition should be i < myVector.size()
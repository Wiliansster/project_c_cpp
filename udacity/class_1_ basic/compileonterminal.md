# Compile on c++

g++ main.cpp -o main.out
./main.out

where main.cpp is the name of project

# print the size of different variable types

sizeof (variable type) ie: sizeof(int)

## include the "fstream" library

- Create a stream (input, output, both)
- ofstream myfile (for writing to a file)
- ifstream myfile (for reading a file)
- fstream myfile (for reading and writing a file)
- Open the file  myfile.open(“filename”)
- Write or read the file
- Close the file myfile.close()

# Header Files

- Header files contain information about how to do a task.
 - the main program conatins information about wath to do.
- Header files have extension '.hpp'.

# use IO

- std::cout for writing to console
- std::cin reading from the console

# 'getline' 

it will retrieve characters from the 'std::cin' source and store them in the variabel called varaiableName. It will retrieve all characters until the newline or '\n' is detectd.

std::getline(std::cin, variableName);

### string
1. Include the streamstring library 
```cpp
#include<sstream>
```
2. Use getline to get the string from the user
```cpp
std::getline(std::cin, stringVarible);
```
3. Convert the string variable to a float variable
```cpp
std::stringstream(stringVariable) >> numericVariable;
```
  
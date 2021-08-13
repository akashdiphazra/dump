## <center> Dynamic Memory Allocation: </center>
          
## What is dynamic memory allocation? 
*Dynamic Memory Allocation is the process of assingning the memory space during runtime or execution time. 
    A good understanding of how dynamic memory really works in C++ is essential to becoming a good C++ programmer.
Memory in your C++ program is divided into two parts −*

#### 1) The stack − All variables declared inside the function will take up memory from the stack.

#### 2) The heap − This is unused memory of the program and can be used to allocate the memory dynamically when program runs.
*Many times, you are not aware in advance how much memory you will need to store particular information in a defined 
variable and the size of required memory can be determined at run time.
You can allocate memory at run time within the heap for the variable of a given type using a special operator in 
C++ which returns the address of the space allocated. This operator is called new operator. If you are not in need 
of dynamically allocated memory anymore, you can use delete operator, which de-allocates memory that was previously 
allocated by new operator.*                                                                                                      

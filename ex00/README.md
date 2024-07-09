# Module 02 - Smart Pointer
- class template that provides automatic memory management for dynamically allocated objects.
- It is a type of RAII (Resource Acquisition Is Initialization) object that ensures that memory allocated to an object is automatically freed when the smart pointer goes out of scope.

- Pointers are used for accessing the resources which are external to the program.
- If we use a pointer to the resource, we’ll be able to change the original resource. (not the copied ones!)

### Problems with pointers
#### memory
The memory that’s wasted can’t be used again. 
#### Memory Leaks: 
- This occurs when memory is repeatedly allocated by a program but never freed. This leads to excessive memory consumption and eventually leads to a system crash. 
#### Dangling Pointers:
- A pointer pointing to a memory location that has been deleted (or freed) is called a dangling pointer. 
- It points to the deleted object.	
- Dangling pointer errors can only be avoided just by initializing the pointer to one NULL value.

### Smart pointer
When the object is destroyed it frees the memory as well. So, we don’t need to delete it as Smart Pointer will handle it.


# Pointer and References
1. Pass by Pointers <br>
1.1. The **adress-of operaotr** `&` returns the **memmory address** of the it's operand.
1.2. The **indicator operator** `*` retuns the value of where to pointer is point to. <br><br>

```
#include <iostream>
 
using namespace std;
 
int main () {
   int  var;
   int  *ptr;
   int  val;

   var = 3000;

   // take the address of var
   ptr = &var;

   // take the value available at ptr
   val = *ptr;
   cout << "Value of var :" << var << endl; // Value of var :3000
   cout << "Value of ptr :" << ptr << endl; // Value of ptr :0x7fff5fbff7fc
   cout << "Value of val :" << val << endl; // Value of val :3000

   return 0;
}
```<br>

2. Pass by References <br>
2.1. When we pass by refrerence, we are passing the **alias** of the variable. This is an alternative to passing by pointers, so we don't need to dereference the pointer. <br>
2.2. References and pointer edit the original variable. <br>
``
#include <iostream>
using namespace std;

void duplicate(int& b)
{
    b*=2;
}

int main()
{
    int x = 25;
    cout << "The original value of x is " << x << endl;
    duplicate(x);
    cout << "The new value of x is " << x;
    return 0;
}
``` 
<br>

3. pass by value <br>
3.1 When we pass by value, we are passing the **copy** of the variable. <br>

- In order to increment a pointer, we need to dereference it first. Make sure to put the dereference operator and the value to increment by in brackets. <br>

```
// More code 

void happyBirthdayWithPointer(unsigned* pet_age_ptr)
{
  (*pet_age_ptr)++;
}

// More code
```
4. [why do I see different values of array size in main vs other functions?](https://www.youtube.com/live/Wgr9Ly85sdc?feature=share&t=979) <br>
5. [Memmory Management](https://youtu.be/_8-ht2AKyH4) <br>
5.1. Heap <br>
5.2. Stack <br>
5.3. Static <br>
5.4. Global <br>
6. struc <br>
6.1. struct is a user defined data type that can hold different data types. <br>

7. Namespaces and scoping<br>

8. Function overloading <br>
8.1. Function overloading is when you have multiple functions with the same name but different parameters. <br>

9. Strings <br>
9.1. Read only strings <br>
```
#include <iostream>
const char* name = "John";
```
9.2. Character arrays <br>
```
#include <iostream>
char name[] = "John";
```
9.3. String in c++  <br>
```
#include <string>
std::string name = "John";
name = "Luke";
```

# Inheritance

- Process in which an object can acquire all the properties and behaviors of its parent.

- Derived Class - Class which inherits.

- Base Class - Class whose members are inherited.

- Types of inheritance in C++ :
 
    1. Single
    2. Multiple
    3. Hierarchical  
    4. Multilevel
    5. Hybrid
    
- Syntax : 

    `class derived-class-name : visibility base-class-name {
        * class body *
    }`

- Visibility can be of three types :

    1. `private` can be accessed only by its class functions.
    2. `public` can be accessed by any function in the program.
    3. `protected` members can be accessed only by the base class and the derived class. This can be used as an advantage for data hiding.

- Visibility by default is `private` in C++.

- `Private` members cannot be inherited.



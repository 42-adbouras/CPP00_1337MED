### Table of Contents

- [Introduction](#introduction)
  * [Namespaces:](namespaces:) 
- [ex00. Megaphone](#ex00-megaphone)
	* [Example](#example)
- [ex01. My Awesome PhoneBook](#ex01-my-awesome-phonebook)
	* [Example](#example-1)
- [ex02. The Job Of Your Dreams](#ex02-the-job-of-your-dreams)
	* [Example](#example-2)
- [Installation](#installation)
- [References](#references)
- [Summary](#summary)

## Introduction
C++ is a powerful, high level programming language that supports both procedural and Object Oriented Programming paradigms.\
Created by Bjarne Stroustrup as an extension of the C programming language, or "C with Classes" (source: [Wikipedia](https://en.wikipedia.org/wiki/C++)).\
	The goal of these modules is to introduce us to Object-Oriented Programming.
This will be the starting point of our C++ journey. Many languages are recommended to learn OOP. 42 decided to choose C++ since it’s derived from your old friend C.\
Because this is a complex language, and in order to keep things simple, our code should comply with the C++98 standard.
We are aware modern C++ is way different in a lot of aspects. So if you want to
become a proficient C++ developer, it’s up to you to go further after the 42 Common
Core!\
We will discover new concepts step-by-step. The exercises will progressively increase
in complexity.\

- Namespaces:\
	Namespase is a declarative region that provides a scope to the identifiers (the names of types, functions, variables, etc) inside it.\
Namespaces are used in C++ to avoid name collisions. They allow you to group entities like classes, functions, and variables under a unique identifier.
The standard library uses the `std` namespace. You can access it by using `std::` or by including `using namespace std;` at the beginning of your code.
```cpp
#include <iostream>
using namespace std;

int main( void ) {
    cout << "Hello, World!" << endl;
    return (0);
}
```
⚠️ Note that unless explicitly stated otherwise, the `using namespace <ns_name>` and
`friend` keywords are forbidden. Otherwise, your grade will be -42.. You would use instead:
```cpp
#include <iostream>

int main( void ) {
    std::cout << "Hello, World!" << std::endl;
    return (0);
}
```
- Classes:\
	A class in C++ is a user defined data type that encapsulates data and functions that operate on that data. It serves as a blueprint for creating an object.
Here's a more detailed look at classes and their components.
	- `Access Specifiers:`
Access specifiers determine the visibility of class members (attributes and methods). The three main access specifiers are:
		- `1. Public:` Members declared as public can be accessed from outside the class.
This is commonly used for methods that should be accessible to users of the class.
		```cpp
		class Car
 		{
		public:
    		std::string brand;	// Public attribute
    		void honk() { 	// Public method
       	 std::cout << brand << " says Honk!" << std::endl;
    		}
		};
		```
		- `2. Private:` Members declared as private can only be accessed within the class itself.
This is used to encapsulate and protect data from unintended access or modification.
		```cpp
  		class Car
  		{
		private:
  			std::string brand; // Private attribute
		public:
			void setBrand(std::string brand) { // Public method to modify private attribute
  				this->brand = brand;
  			}
  			void honk() {
        		std::cout << brand << " Honk Honk!" << std::endl;
  			}
		};
  		```
  		- `3. Protected:` Members declared as protected can be accessed within the class and by derived classes.
This is useful in inheritance.
		```cpp
  		class Vehicle {
		protected:
    		std::string brand;
		};
  		```






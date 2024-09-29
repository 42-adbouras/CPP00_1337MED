### Table of Contents

- [Introduction](#introduction)
	* [Namespaces:](namespaces:)
	* Classes:
    	* Access Specifiers:
    	* Constructors:
    	* Destructors:
    	* Member Functions:
	* Constructors:
	* Destructors:
 	* Member Functions:
 	* Standard Input/Output Streams:
  	* Initialization Lists:
  	* Static Members:
  	* Const Members:
- [ex00. Megaphone](#ex00-megaphone)
	* [Example](#example)
- [ex01. My Awesome PhoneBook](#ex01-my-awesome-phonebook)
	* [Example](#example-1)
- [ex02. The Job Of Your Dreams](#ex02-the-job-of-your-dreams)
	* [Example](#example-2)

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
	- `Constructors:`
A constructor is a special member function that is called when an object of a class is created. It typically initializes the object’s attributes. Constructors can be overloaded to provide different ways to initialize an object.

		- `Default Constructor:` No parameters.
		```cpp
  		class Car {
		public:
			std::string brand;
			Car() { // Default constructor
				brand = "Porsche";
			}
		};
		```
		- `Parameterized Constructor:` Takes parameters to initialize attributes.
		```cpp
  		class Car {
		public:
    		std::string brand;
    		Car(string brand) { // Parameterized constructor
        		this->brand = brand;
    		}
		};
  		```
  		- `Copy Constructor:` Initializes an object using another object of the same class.
    	```cpp
		class Car {
		public:
    		std::string brand;
    		Car(const Car &c) { // Copy constructor
        		brand = c.brand;
    		}
		};
		```
	- `Destructors:`
A destructor is a special member function called when an object goes out of scope or is explicitly deleted. It is used to free resources that the object may have acquired during its lifetime, such as dynamic memory.
	```cpp
 	class Car {
	public:
    	std::string brand;
    	Car(std::string b) : brand(b) {} // Constructor
    	~Car() { // Destructor
			std::cout << brand << " is being destroyed." << std::endl;
    	}
	};
	```
	- `Member Functions:`
Member functions can manipulate the data members of a class. They can also be declared as `const`, meaning they do not modify the object’s state.
	```cpp
 	class Car {
	public:
    	std::string brand;
    	Car(tsd::string b) : brand(b) {}
    
    	void display() const { // Const member function
     	   std::cout << "Brand: " << brand << std::endl;
    	}
	};
	```
	- `Standard Input/Output Streams:`
C++ uses streams for input and output. The standard library provides `std::cin` for input and `std::cout` for output. These are part of the `<iostream>` library.
	```cpp
 	#include <iostream>
 	int main( void ) {
    	int age;
 
    	std::cout << "Enter your age: ";
    	std::cin >> age;
 		std::cout << "You are " << age << " years old." << std::endl;
    	return (0);
	}
 	```
 	- `Initialization Lists:`
Initialization lists are used in constructors to initialize member variables before the constructor body runs. This is particularly useful for `const` and reference members.
	```cpp
 	class Point {
	public:
    	const int x;
    	const int y;
    
    	Point(int a, int b) : x(a), y(b) {} // Initialization list
	};
 	```
 	- `Static Members:`
Static members belong to the class rather than any specific object. They are shared among all instances of the class.
	```cpp
 	class Counter {
	public:
    	static int count;
    	Counter() { count++; }
	};

	int Counter::count = 0; // Definition of static member
 	```
 	- `Const Members:`
`const` members of a class cannot be modified after they are initialized. This is useful for defining constants or protecting data from accidental changes.
	```cpp
 	class Circle {
	public:
    	const double PI = 3.14159;
    	double radius;
    
    	Circle(double r) : radius(r) {}
	};
 	```
These are the basic concepts of C++ programming. Understanding these will help us build more complex and efficient applications.





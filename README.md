# Inheritance-in-Cpp
## Experiment No. 14 - C++ Inheritance Programs
**Name:** Varnika Maurya  
**PRN:** 2407123160  
**Tool Used:** VS Code

This experiment consists of multiple programs in C++ demonstrating the concepts of **inheritance**: single, multiple, multilevel, and hierarchical inheritance.

---

##  Program 1: Single Inheritance

###  **Theory**
Single inheritance is when a class (derived class) inherits from a single base class. This allows the derived class to reuse the properties and methods of the base class.

In this program:
- `Vehicle` is the base class with a method `color()` and attribute `brand`.
- `Car` is the derived class with its own attribute `model`.

###  **Algorithm**
1. Define base class `Vehicle` with a method and a data member.
2. Define derived class `Car` that inherits publicly from `Vehicle`.
3. In `main()`, create an object of `Car`.
4. Call the inherited method and access the inherited and derived attributes.

###  **Conclusion**
This program demonstrates **single inheritance**, allowing the derived class `Car` to access data and methods from the base class `Vehicle`.

---

##  Program 2: Multiple Inheritance

###  **Theory**
Multiple inheritance is when a class inherits from **more than one base class**. It helps in combining functionalities of multiple classes into a single derived class.

In this program:
- `Vehicle` and `Specs` are two base classes.
- `Car` inherits publicly from both.

###  **Algorithm**
1. Define class `Vehicle` with brand and a method.
2. Define class `Specs` with mileage and a method.
3. Define derived class `Car` that inherits from both.
4. In `main()`, create an object of `Car`.
5. Access methods and attributes from both base classes.

###  **Conclusion**
This program demonstrates **multiple inheritance**, where the derived class `Car` successfully accesses members from both `Vehicle` and `Specs`.

---

##  Program 3: Multilevel Inheritance

###  **Theory**
Multilevel inheritance is when a class is derived from a derived class, forming a chain of inheritance. This supports hierarchical layering of features.

In this program:
- `Food` → `Dish` → `Res` forms a multilevel inheritance chain.

###  **Algorithm**
1. Define base class `Food` with cuisine and method `type()`.
2. Define derived class `Dish` inheriting from `Food`.
3. Define another derived class `Res` inheriting from `Dish`.
4. In `main()`, create an object of `Res`.
5. Access inherited attributes and methods from all levels.

###  **Conclusion**
This program demonstrates **multilevel inheritance**, where a class inherits through a chain of base classes.

---

##  Program 4: Hierarchical Inheritance

###  **Theory**
Hierarchical inheritance is when **multiple classes inherit from a single base class**. Each derived class can access base class members independently.

In this program:
- `Jeans` is the base class.
- `Bootcut`, `WL`, and `Skinny` are derived from `Jeans`.

###  **Algorithm**
1. Define base class `Jeans` with an array and a method `brand()`.
2. Define three classes (`Bootcut`, `WL`, `Skinny`) inheriting from `Jeans`.
3. Each subclass defines a unique `color`.
4. In `main()`, create objects of each subclass.
5. Access inherited and individual attributes.

###  **Conclusion**
This program demonstrates **hierarchical inheritance**, where several derived classes inherit properties from a common base class independently.

---

##  Overall Conclusion
This experiment covered all major types of inheritance in C++:
- **Single Inheritance**
- **Multiple Inheritance**
- **Multilevel Inheritance**
- **Hierarchical Inheritance**

Each program reinforces how inheritance promotes **code reusability**, **logical class hierarchy**, and **modularity** in object-oriented programming.

---


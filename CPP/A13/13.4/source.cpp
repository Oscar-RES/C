/*
CH-230-A
13.4.cpp
Oscar Echeverria
oecheverri@jacobs-university.de
*/

#include<iostream>
using namespace std;
 
class A
{
  int x;
public:
  void setX(int i) {x = i;}
  void print() { cout << x; }
};
 
class B: virtual public A //added virtual keyword
{
public:
  B()  { setX(10); }
};
 
class C: virtual  public A //added virtual keyword
{
public:
  C()  { setX(20); }
};
 
class D: public B, public C {
};
 
int main()
{
    D d;
    d.print();
    return 0;
}

/*ERROR:
    The error in question is an ambiguous call,
    in this case, the compiler has no clue as to 
    what to print. This is due to the diamond inheritance
    in this problem, class D is inheriting from both class
    B and C, which have their own x member defined from their
    constructors, which causes a problem when a class inherits
    from both of them as there is an overlap.
*/

/*SOLUTION:
    make the inheritance of A from both the B and the C class
    virtual. This way there won't be clashing x members due to
    polymorphism. The end result will be 20 because that is the 
    last constructor being called.
*/
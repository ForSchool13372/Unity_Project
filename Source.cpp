#include <iostream>
using namespace std;

class Animal
{
	virtual void Speak() = 0;
};

class Dog : public Animal
{
public:
	void Speak()
	{
		cout << "Dog says woof!" << endl;
	}
};

int main()
{
	//Doesnt work cause abstract
	//Animal anim;

	Dog dog1;

	dog1.Speak();
}
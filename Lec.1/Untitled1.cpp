#include<iostream>
using namespace std;

class Animal
{
	public :
	virtual void sound() = 0;
//	{
//		cout << "class a ! sound" << endl;
//	}
//	
	virtual void move() = 0;
//	{
//		cout << "class a ! move" << endl;
//	}
};

class Dog : public Animal
{
	public :
	void sound()
	{
		cout << "class b sound" << endl;
	}
	
	void move()
	{
		cout << "class b move" << endl;
	}
};

class Bird : public Animal // public Dog
{
	public :
	void sound()
	{
		cout << "class c sound" << endl;
	}
	
	void move()
	{
		cout << "class c move" << endl;
	}
};

int main()
{
	Animal *a[2];
	Dog d1;
	Bird b1;
	
	a[0]= &d1;
	a[1]= &b1;
	
	a[0]->sound();
	a[0]->move();
	
	cout << endl;
	
	a[1]->sound();
	a[1]->move();
	return 0;
}

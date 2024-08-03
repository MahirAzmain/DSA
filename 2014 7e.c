#include<bits/stdc++.h
using namespace std;
class animal
{
public:
    virtual void treat()=0;
};
class cat:public animal
{
public:
    void treat()
    {
        cout<<"cat"<<endl;
    }
};
class dog:public animal
{
public:
    void treat()
    {
        cout<<"Dog"<<endl;
    }
    void bark()
    {
        cout<<"Woof"<<endl;
    }
};

void treatAnimal(animal *p)
{
    // Use a static variable to store the number of dogs treated
    static int dogCount = 0;
    // Use dynamic cast to check if p is a dog pointer
    dog *d = dynamic_cast<dog*>(p);
    // If d is not null, then p is a dog pointer
    if (d != nullptr)
    {
        // Increment the dog count
        dogCount++;
        // Call the bark method
        d->bark();
    }
    // Call the treat method
    p->treat();
    // Print the number of dogs treated
    cout << "Number of dogs treated: " << dogCount << endl;
}

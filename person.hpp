#ifndef person_
#define person_

class Person
{
public:
    Person();
    virtual void shower() = 0;
    virtual void work() = 0;
    virtual void eat() = 0;
    virtual void fun() = 0;
    virtual void sleep() = 0;
    virtual void print() = 0; //this will print all stats

protected:
    double energy;
    double happiness;
    double productivity;
    double health;
    double hygiene;

private:
    void updateAll(); //This will update all variables
};

#endif
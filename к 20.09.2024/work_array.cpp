struct person
{
public:
    person(std::string name, unsigned age): name{name}, age{age}
    { 
    }
    void print()
    {
        std::cout << "Name: " << name << "\tAge: " << age << std::endl;
    }
    ~person() 
    { 
        delete[] name, age; 
    } 
private:
    std::string name;
    unsigned age;
};
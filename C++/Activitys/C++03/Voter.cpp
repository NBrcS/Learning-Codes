#include <vector>
#include <iostream>
#include <exception>
using namespace std;

class Voter
{
    private:
        string name;
        int age;
        string title;

    public:
        Voter(string = "undefined", int = 0, string = "undefined");
        Voter(){}

        void setName(const string &name_) { name = name_; }
        void setAge(int age_) { age = age_; }
        void setTitle(const string &title_) { title = title_; }
        string getName() const { return name; }
        int getAge() const { return age; }
        string getTitle() const { return title; }

};

class VoterManagement
{
    private:
        vector<Voter*> voters;

        void verify_underAge(int);
        void verify_pendence(int);

    public:
        VoterManagement(){};
        ~VoterManagement(){}

        void register_Voter(string name_, int age_, string title_);
        void verify_Voter(int);

};

int main()
{
    int N, age;
    string name, title;

    VoterManagement management;

    cin >> N; cin.ignore();
    for(int i = 0; i < N; i++)
    {
        getline(cin, name);
        cin >> age;
        cin.ignore();
        getline(cin, title);

        management.register_Voter(name, age, title);
        management.verify_Voter(i);
    }

    return 0;
}

//Voter implements
Voter::Voter(string name_, int age_, string title_)
{
    name = name_;
    age = age_;
    title = title_;
}


//VoterManagement implements
void VoterManagement::verify_underAge(int index_)
{
    if(voters[index_]->getAge() < 16 && voters[index_]->getAge() != 0)
    {
        throw underflow_error("Eleitor " + voters[index_]->getName() + " não pode ser cadastrado\n");
    }
}

void VoterManagement::verify_pendence(int index_)
{

    if(voters[index_]->getAge() > 20)
    {
        throw overflow_error(("Eleitor " + voters[index_]->getName() + " com pendência\n"));
    }
}

void VoterManagement::register_Voter(string name_, int age_, string title_)
{
    auto* voter = new Voter(name_, age_, title_);

    voters.push_back(voter);
}

void VoterManagement::verify_Voter(int index_)
{
    try{
        verify_underAge(index_);
        verify_pendence(index_);
    }catch(const underflow_error e){
        cout << e.what();
    }catch(const overflow_error e){
        cout << e.what();
    }
    
}
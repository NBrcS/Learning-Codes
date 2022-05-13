#include <iostream>
#include <vector>

using namespace std;

class Entrance
{
    private: 
        int howMany;
        int entranceType;
        double unitaryValue;
        string dueDate;
        string name;
        string manufacter;

    public:
        Entrance(int = 0, int = 0, double = 0.0, string = "Undefined", string = "Undefined", string = "Undefined");
        virtual ~Entrance();


        int getHowMany() { return howMany; }
        void setHowMany(int howMany_) { howMany = howMany_; }

        int getEntranceType() { return entranceType; }
        void setEntranceType(int EntranceType_) { entranceType = EntranceType_; }

        double getUnitaryValue() { return unitaryValue; }
        void setUnitaryValue(double unitaryValue_) { unitaryValue = unitaryValue_; }

        string getDueDate() { return dueDate; }
        void setDueDate(string dueDate_) { dueDate = dueDate_; }

        string getName() { return name; }
        void setName(string name_) { name = name_; }

        string getManufacter() { return manufacter; }
        void setManufacter(string manufacter_) { manufacter = manufacter_; }
    
};

class Vaccine : public Entrance
{
    private:
        string type;
        int howManyDoses;
        int pause;

    public:
        Vaccine(string = "Undefined", int = 0, int = 0, int = 0, int = 0, double = 0.0, string = "Undefined", string = "Undefined", string = "Undefined");
        virtual ~Vaccine();

        int getHowManyDoses() { return howManyDoses; }
        void setHowManyDoses(int howManyDoses_) { howManyDoses = howManyDoses_; }
    
        string getType() { return type; }
        void setType(string type_) { type = type_; }

        int getPause() { return pause; }
        void setPause(int pause_) { pause = pause_; }

        
};

class Medical : public Entrance
{
    private:
        string dosage;
        string management;
        string availability;
        
    public:
        Medical(string = "Undefined", string = "Undefined", string = "Undefined", int = 0, int = 0, double = 0.0, string = "Undefined", string = "Undefined", string = "Undefined");
        virtual ~Medical();

        string getDosage() { return dosage; }
        void setDosage(string dosage_) { dosage = dosage_; }

        string getManagement() { return management; }
        void setManagement(string management_) { management = management_; }

        string getAvailability() { return availability; }
        void setAvailability(string availability_) { availability = availability_; }   

};

class IPE : public Entrance
{
    private:
        string type;
        string description;

    public:
        IPE(string = "Undefined", string = "Undefined", int = 0, int = 0, double = 0.0, string = "Undefined", string = "Undefined", string = "Undefined");
        virtual ~IPE();
        
        string getType() { return type; }
        void setType(string type_) { type = type_; }

        string getDescription() { return description; }
        void setDescription(string description_) { description = description_; }

};

class Local
{
    private:
        int type;
        string name;
        Entrance* entranceArr[3];
        vector<Entrance*> entranceVec;

    public:
        Local(int = 0, string = "Undefined");
        ~Local();


        int getType() { return type; }
        void setType(int type_) { type = type_; }

        string getName() { return name; }
        void setName(string name_) { name = name_; }


        void addEntranceArr(Entrance*, int);
        void addEntranceVec(Entrance*);
        
};

int main()
{
    string name, dueDate, manufacter, entranceType, type, dosage, management, availability, desc;
    int howMany, howManyDoses, pause;
    double unitaryValue;

    Local local;
    Entrance* generic;

    for(int i = 0; i < 3; i++)
    {
        getline(cin, name);
        cin >> howMany
            >> unitaryValue;
        cin.ignore();
        getline(cin, dueDate);
        getline(cin, manufacter);

        if(i == 0)
        {
            getline(cin, type);
            cin >> howManyDoses
                >> pause;
            cin.ignore();

            generic = new Vaccine(type, howManyDoses, pause, howMany, 1, unitaryValue, dueDate, name, manufacter);
        }
        else if(i == 1)
        {
            getline(cin, dosage);
            getline(cin, management);
            getline(cin, availability);

            generic = new Medical(dosage, management, availability, howMany, 2, unitaryValue, dueDate, name, manufacter);
        }
        else if(i == 2)
        {
            getline(cin, type);
            getline(cin, desc);

            generic = new IPE(type, desc, howMany, 3, unitaryValue, dueDate, name, manufacter);
        }

        local.addEntranceArr(generic, i);
        local.addEntranceVec(generic);
    }

    delete &local;

    return 0;
}


//Entrance implemets
Entrance::Entrance(int howMany_, int entranceType_, double unitaryValue_, string dueDate_, string name_, string manufacter_)
{
    howMany = howMany_;
    entranceType = entranceType_;
    unitaryValue = unitaryValue_;
    dueDate = dueDate_;
    name = name_;
    manufacter = manufacter_;
}

Entrance::~Entrance()
{
    cout << "Deletando Insumos" << endl;
}


//Vaccine implements
Vaccine::Vaccine(string type_, int howManyDoses_, int pause_, int howMany_, int entranceType_, double unitaryValue_, string dueDate_, string name_, string manufacter_)
        :Entrance(howMany_, entranceType_, unitaryValue_, dueDate_, name_, manufacter_)
{
    type = type_;
    howManyDoses = howManyDoses_;
    pause = pause_;
}

Vaccine::~Vaccine() 
{
    cout << "Deletando Vacina" << endl;
} 


//Medical implements
Medical::Medical(string dosage_, string management_, string availability_, int howMany_, int entranceType_, double unitaryValue_, string dueDate_, string name_, string manufacter_)
        :Entrance(howMany_, entranceType_, unitaryValue_, dueDate_, name_, manufacter_)
{
    dosage = dosage_;
    management = management_;
    availability = availability_;
}

Medical::~Medical()
{
    cout << "Deletando Medicamento" << endl;
}


//IPE implements
IPE::IPE(string type_, string description_, int howMany_, int entranceType_, double unitaryValue_, string dueDate_, string name_, string manufacter_)
    :Entrance(howMany_, entranceType_, unitaryValue_, dueDate_, name_, manufacter_)
{
    type = type_;
    description = description_;
}

IPE::~IPE()
{
    cout << "Deletando EPI" << endl;

}


//Local implements
Local::Local(int type_, string name_)
{   
    type = type_;
    name = name_;
}
Local::~Local()
{
    cout << "Deletando Local" << endl;

    for(int i = 0; i < 3; i++)
    {        
        delete(entranceArr[i]);
    }


    /*
    *
    *          Using destructor
    * 
    */
    /*
    cout << "(erase) begin the loop" << endl;
    int size = entranceVec.size();
    for (int i = 0; i < size; i++)
    {

        cout << "(erase) loop " << endl;
        entranceVec.back()->~Entrance();

        cout << "(erase) end loop " << endl;
    }

    cout << "(erase) end all loop" << endl;
    */

    /*
    *
    *       Using clear()
    *   
    */
    /*
    cout << "Begin of clear" << end;
    entranceVec.clear();

    cout << "end of clear" << end;
    */

   /*
    *
    *           Using delete[]
    *
    */
    /*
    cout << "(erase) begin the loop" << endl;
    int size = entranceVec.size();
    for (int i = 0; i < size; i++)
    {

        cout << "(erase) loop " << endl;
        delete &entranceVec[i];

        cout << "(erase) end loop " << endl;
    }

    cout << "(erase) end all loop" << endl;
    */


    /*
    *
    *           Using delete&
    * 
    */
    /*
    cout << "(erase) begin the loop" << endl;
    int size = entranceVec.size();
    for (int i = 0; i < size; i++)
    {

        cout << "(erase) loop " << endl;
        delete &entranceVec.at(i);

        cout << "(erase) end loop " << endl;
    }

    cout << "(erase) end all loop" << endl;
    */


    /*
    *
    *           Using pop_back()
    * 
    */
    /*
    cout << "(erase) begin the loop" << endl;
    while (!entranceVec.empty())
    {

        cout << "(erase) loop " << endl;
        entranceVec.pop_back();

        cout << "(erase) end loop " << endl;
    }

    cout << "(erase) end all loop" << endl;
    */
    
}

void Local::addEntranceArr(Entrance* ent_, int index_)
{
    entranceArr[index_] = ent_;
}

void Local::addEntranceVec(Entrance* ent_)
{
    entranceVec.push_back(ent_);
}

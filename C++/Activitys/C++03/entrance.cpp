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
        ~Entrance();


        int getHowMany() const { return howMany; }
        void setHowMany(int howMany_) { howMany = howMany_; }

        int getEntranceType() const { return entranceType; }
        void setEntranceType(int EntranceType_) { entranceType = EntranceType_; }

        double getUnitaryValue() const { return unitaryValue; }
        void setUnitaryValue(double unitaryValue_) { unitaryValue = unitaryValue_; }

        string getDueDate() const { return dueDate; }
        void setDueDate(const string &dueDate_) { dueDate = dueDate_; }

        string getName() const { return name; }
        void setName(const string &name_) { name = name_; }

        string getManufacter() const { return manufacter; }
        void setManufacter(const string &manufacter_) { manufacter = manufacter_; }
    
};

class Vaccine : public Entrance
{
    private:
        string type;
        int howManyDoses;
        int pause;

    public:
        Vaccine(string = "Undefined", int = 0, int = 0, int = 0, int = 0, double = 0.0, string = "Undefined", string = "Undefined", string = "Undefined");
        ~Vaccine();

        int getHowManyDoses() const { return howManyDoses; }
        void setHowManyDoses(int howManyDoses_) { howManyDoses = howManyDoses_; }
    
        string getType() const { return type; }
        void setType(string type_) { type = type_; }

        int getPause() const { return pause; }
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
        ~Medical();

        string getDosage() const { return dosage; }
        void setDosage(const string &dosage_) { dosage = dosage_; }

        string getManagement() const { return management; }
        void setManagement(const string &management_) { management = management_; }

        string getAvailability() const { return availability; }
        void setAvailability(const string &availability_) { availability = availability_; }   

};

class IPE : public Entrance
{
    private:
        string type;
        string description;

    public:
        IPE(string = "Undefined", string = "Undefined", int = 0, int = 0, double = 0.0, string = "Undefined", string = "Undefined", string = "Undefined");
        ~IPE();
        
        string getType() const { return type; }
        void setType(string type_) { type = type_; }

        string getDescription() const { return description; }
        void setDescription(const string &description_) { description = description_; }

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


        int getType() const { return type; }
        void setType(int type_) { type = type_; }

        string getName() const { return name; }
        void setName(const string &name_) { name = name_; }


        void addEntranceArr(Entrance*, int);
        void addEntranceVec(Entrance*);
        
};

int main()
{
    string name, dueDate, manufacter, entranceType, type, dosage, management, availability, desc;
    int howMany, howManyDoses, pause;
    double unitaryValue;

    Local* local;
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
            cout << "first (loop)" << endl;

            getline(cin, type);
            cin >> howManyDoses
                >> pause;
            cin.ignore();

            generic = new Vaccine(type, howManyDoses, pause, howMany, 1, unitaryValue, dueDate, name, manufacter);
        }
        else if(i == 1)
        {
            cout << "Second (loop)" << endl;

            getline(cin, dosage);
            getline(cin, management);
            getline(cin, availability);

            generic = new Medical(dosage, management, availability, howMany, 2, unitaryValue, dueDate, name, manufacter);
        }
        else if(i == 2)
        {
            cout << "thirdy (loop)" << endl;

            getline(cin, type);
            getline(cin, desc);

            generic = new IPE(type, desc, howMany, 3, unitaryValue, dueDate, name, manufacter);
        }

        cout << "(loop) End of if`s" << endl;

        local->addEntranceArr(generic, i);

        cout << "(loop) pass addArr" << endl;
        local->addEntranceVec(generic);
    }

    delete(local);

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
    entranceVec.clear();
    vector<Entrance*>().swap(entranceVec);
}

void Local::addEntranceArr(Entrance* ent_, int index_)
{
    cout << "(loop) addArr method" << endl;

    entranceArr[index_] = ent_;

    cout << "(loop) pass method" << endl;
}

void Local::addEntranceVec(Entrance* ent_)
{
    cout << "(loop) addVec" << endl;

    entranceVec.push_back(ent_);
}

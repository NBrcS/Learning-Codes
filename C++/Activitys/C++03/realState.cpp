#include <vector>
#include <iostream>
using namespace std;

class Immobile
{
    protected:
        string name, state;
        int type;
        double price;

    public:
        Immobile(int = 0);
        virtual ~Immobile();

        void setName(string name){ this->name = name; };
        void setState(string state) { this->state = state; };
        void setType(int type) { this->type = type; };
        void setPrice(double price) { this->price = price; };
        string getName() { return this->name; };
        string getState() { return this->state; };
        int getType() { return this->type; };
        double getPrice() { return this->price; };


        virtual void printAtributes(){};
        virtual void readAtributes(){};
};

class House : public Immobile
{
    private:
        int floorNumber;
        int roomsNumber;
        double landArea;
        double builtUpLandArea;

    public:
        House() : Immobile(1){};
        virtual ~House();

        void setFloorNumber(int fNumber) { this->floorNumber = fNumber; };
        void setRoomsNumber(int rNumber) { this->roomsNumber = rNumber; };
        void setLandArea(double lArea) { this->landArea = lArea; };
        void setBuiltUpLandArea(double bArea) { this->builtUpLandArea = bArea; };
        int getFloorNumber() { return this->floorNumber; };
        int getRoomsNumber() { return this->roomsNumber; };
        double getLandArea() { return this->landArea; };
        double getBuiltUpLandArea() { return this->builtUpLandArea; };

        void printAtributes();
        void readAtributes();
};

class Apartament : public Immobile
{
    private:
        double area;
        double condominiumValue;
        int roomsNumber;
        int floor;
        int parkingSpaces;

    public:
        Apartament() : Immobile(2){};
        virtual ~Apartament();

        void setArea(double area) { this->area = area; };
        void setCondominiumValue(double cValue) { this->condominiumValue = cValue; };
        void setRoomsNumber(int rNumber) { this->roomsNumber = rNumber; };
        void setFloor(int floor) { this->floor = floor; };
        void setParkingSpaces(int pSpace) { this->parkingSpaces = pSpace; };
        double getArea() { return this->area; };
        double getCondominiumValue() { return this->condominiumValue; };
        int getRoomsNumber() { return this->roomsNumber; };
        int getFloor() { return this->floor; };
        int getParkingSpaces() { return this->parkingSpaces; };

        void printAtributes();
        void readAtributes();

};

class Terrain : public Immobile
{
    private:
        double area;

    public:
        Terrain() : Immobile(3){};
        virtual ~Terrain();

        void setArea(double area) { this->area = area; };
        double getArea() { return this->area; };

        void printAtributes();
        void readAtributes();
};

class RealState
{
    private:
        vector<Immobile*> realState;

    public:
        RealState(){}
        ~RealState();

        void addImmobileVec(Immobile*);
        void searchImmobileVec(string);
};

int main()
{
    int N, type;
    string search;

    cin >> N;
    Immobile* generic = new Immobile(0);
    RealState realState;

    while(N--)
    {
        cin >> type;
        cin.ignore();

        switch ( type ) 
        {
            case 1:
                generic = new House();
                break;
            case 2:
                generic = new Apartament();
                break;
            case 3:
                generic = new Terrain();
                break;
            default:
                break;
        }
        generic->readAtributes();
        realState.addImmobileVec(generic);

    }
    getline(cin, search);
    realState.searchImmobileVec(search);

    return 0;
}


//Immobile implements
//the most of methods are setters and getters, were implementeds inline
Immobile::Immobile(int type)
{
    this->type = type;

    switch (type) 
    {
        case 0:
            this->name = "Undefined";

            break;
        case 1:
            this->name = "Casa";

            break;
        case 2:
            this->name = "Apartamento";

            break;
        case 3:
            this->name = "Terreno";

            break;
        default:
            break;
    }
}
Immobile::~Immobile()
{
    cout << "Deletando Imovel" << endl;
}

//House implements
House::~House()
{
    cout << "Deletando Casa" << endl;
}

void House::printAtributes()
{
    cout << this->getName() << " para " << this->getState() << ". "
         << this->getFloorNumber() << " pavimentos, " << this->getRoomsNumber() << " quartos, "
         << this->getLandArea() << "m2 de área de terreno e " << this->getBuiltUpLandArea() << "m2 de área construída. R$ "
         << this->getPrice() << "." << endl;;

}
void House::readAtributes()
{
    cin >> this->price;
    cin.ignore();

    getline(cin, this->state);

    cin >> this->floorNumber
        >> this->roomsNumber
        >> this->landArea
        >> this->builtUpLandArea;

    cin.ignore();
}


//Apartament implements
Apartament::~Apartament()
{
    cout << "Deletando Apartamento" << endl;
}

void Apartament::printAtributes()
{
    cout << this->getName() << " para " << this->getState() << ". "
         << this->getArea() << "m2 de área, " << this->getRoomsNumber() << " quartos, "
         << this->getFloor() << " andar(es), " << this->getCondominiumValue() << " de condomínio, "
         << this->getParkingSpaces() << " vaga(s) de garagem. R$ "
         << this->getPrice() << "." << endl;

}
void Apartament::readAtributes()
{
    cin >> this->price;
    cin.ignore();

    getline(cin, this->state);

    cin >> this->area
        >> this->roomsNumber
        >> this->floor
        >> this->condominiumValue
        >> this->parkingSpaces;
    cin.ignore();
}


//Terrain implements
Terrain::~Terrain()
{
    cout << "Deletando Terreno" << endl;
}

void Terrain::printAtributes()
{
    cout << this->getName() << " para " << this->getState() << ". "
         << this->getArea() << "m2 de área de terreno. R$ "
         << this->getPrice() << "." << endl;
}
void Terrain::readAtributes()
{
    cin >> this->price;
    cin.ignore();
    
    getline(cin, this->state);

    cin >> this->area;
    cin.ignore();

}
    
//RealState implements
RealState::~RealState()
{
    cout << "Deletando Imobiliária" << endl;

    for(int i = 0; i < realState.size(); i++)
    {
        delete(realState[i]);
    }
}


void RealState::addImmobileVec(Immobile* immobile)
{
    realState.push_back(immobile);
}

void RealState::searchImmobileVec(string search)
{
    for(Immobile* im : realState)
    {
        if(im->getName().find(search) != -1 ||
           im->getState().find(search) != -1 )
        {
            im->printAtributes();
        }
    }
}

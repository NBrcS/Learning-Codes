#include <iostream>

using namespace std;

class Immobile{
    protected:
        string name, state;
        int type;
        double price;

    public:
        Immobile(int = 0);

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

class House : public Immobile{
    private:
        int floorNumber;
        int roomsNumber;
        double landArea;
        double builtUpLandArea;

    public:
        House() : Immobile(1){};

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

class Apartament : public Immobile{
    private:
        double area;
        double condominiumValue;
        int roomsNumber;
        int floor;
        int parkingSpaces;

    public:
        Apartament() : Immobile(2){};

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

class Terrain : public Immobile{
    private:
        double area;

    public:
        Terrain() : Immobile(3){};

        void setArea(double area) { this->area = area; };
        double getArea() { return this->area; };

        void printAtributes();
        void readAtributes();
};

int main(){
    int N, type;

    cin >> N;
    Immobile *immobile = new Immobile(0);

    while(N--){
        cin >> type;
        cin.ignore();

        switch ( type ) {
            case 1:
                immobile = new House();

                immobile->readAtributes();
                immobile->printAtributes();

                break;
            case 2:
                immobile = new Apartament();

                immobile->readAtributes();
                immobile->printAtributes();

                break;
            case 3:
                immobile = new Terrain();

                immobile->readAtributes();
                immobile->printAtributes();
                break;
            default:
                break;
        }

    }
    return 0;
}


//Immobile implements
//the most of methods are setters and getters, were implementeds inline
Immobile::Immobile(int type){
    this->type = type;

    switch (type) {
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

//House implements
void House::printAtributes(){
    cout << this->getName() << " para " << this->getState() << ". ";
    cout << this->getFloorNumber() << " pavimentos, " << this->getRoomsNumber() << " quartos, ";
    cout << this->getLandArea() << "m2 de área de terreno e " << this->getBuiltUpLandArea() << "m2 de área construída. ";
    cout << "R$ " << this->getPrice() << "." << endl;;

}
void House::readAtributes(){
    cin >> this->price;
    cin.ignore();

    getline(cin, this->state);

    cin >> this->floorNumber;
    cin >> this->roomsNumber;
    cin >> this->landArea;
    cin >> this->builtUpLandArea;

    cin.ignore();
}


//Apartament implements
void Apartament::printAtributes(){
    cout << this->getName() << " para " << this->getState() << ". ";
    cout << this->getArea() << "m2 de área, " << this->getRoomsNumber() << " quartos, ";
    cout << this->getFloor() << " andar(es), " << this->getCondominiumValue() << " de condomínio, ";
    cout << this->getParkingSpaces() << " vaga(s) de garagem. ";
    cout << "R$ " << this->getPrice() << "." << endl;;

}
void Apartament::readAtributes(){
    cin >> this->price;
    cin.ignore();

    getline(cin, this->state);

    cin >> this->area;
    cin >> this->roomsNumber;
    cin >> this->floor;
    cin >> this->condominiumValue;
    cin >> this->parkingSpaces;

    cin.ignore();
}


//Terrain implements
void Terrain::printAtributes(){
    cout << this->getName() << " para " << this->getState() << ". ";
    cout << this->getArea() << "m2 de área de terreno. ";
    cout << "R$ " << this->getPrice() << "." << endl;
}
void Terrain::readAtributes(){
    cin >> this->price;
    cin.ignore();
    
    getline(cin, this->state);

    cin >> this->area;
    cin.ignore();

}
    

#include <vector>
#include <iostream>
using namespace std;

template <class T>
class Statistical
{
    private:
        vector<T> vec;

    public:
        Statistical(){}
        virtual ~Statistical(){}

        T getVec_FirstPos() const { return vec[0]; };
        void addVec_LastPos(T data_) const { vec.push_back(data_); };


        int biggerIndex(vector<T> vec_)
        {
            int bigger = -1000;

            for(T gen : vec_)
            {
                if(gen > bigger)
                {
                    bigger = gen;
                }
            }

            return bigger;
        }
        int lowestIndex(vector<T> vec_)
        {
            int lowest = 1000;

            for(T gen : vec_)
            {
                if(gen < lowest)
                {
                    lowest = gen;
                }
            }

            return lowest;
        }
        double average(vector<T> vec_)
        {
            double sum = 0;

            for(T gen : vec_)
            {
                sum += gen;
            }

            return (sum / vec_.size());
        }
        virtual string toString() = 0;
};

template <class T>
class Book : public Statistical
{
    private:
        string title;
        int pages;

    public:
        Book(string title_ = "Undefined", int pages_ = 0)
        {
            title = title_;
            pages = pages_;
        }
        virtual ~Book(){}

        void setPages(int pages_) { pages = pages_; }
        void setTitle(const string &title_) { title = title_; }
        int getPages() const { return pages; }
        string getTitle() const { return title; }

        string toString()
        {
            string out;

            out = title + ", paginas" + to_string(getTotal());

            return out;
        }
        int getTotal()
        {
            return pages;
        }

};

template <class T>
class Request : public Statistical
{
    private:
        double unitaryValue;
        int quantity;

    public:
        Request(double unitaryValue_ = 0.0, int quantity_ = 0)
        {
            unitaryValue = unitaryValue_;
            quantity = quantity_;
        }
        virtual ~Request(){}

        void setUnitaryValue(double unitaryValue_) { unitaryValue = unitaryValue_; }
        void setQuantity(int quantity_) { quantity = quantity_; }
        double getUnitaryValue() const { return unitaryValue; }
        int getQuantity() const { return quantity; }

        string toString()
        {   
            string out;

            out = "R$ " + to_string(unitaryValue) + ", quant: " + to_string(quantity) + ", total: R$" + to_string(getTotal());

            return out;
        }
        double getTotal()
        {
            return unitaryValue * quantity;
        }
        
};

int main()
{
    cout << "compil" << endl;

    return 0;
}
#include <vector>
#include <iomanip>
#include <exception>
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


        int biggestIndex(vector<T> vec_)
        {
            int index = 0;
            double biggest = vec_[0].getTotal();

            for(int i = 0; i < vec_.size(); i++)
            {
                if(vec_[i].getTotal() > biggest)
                {
                    biggest = vec_[i].getTotal();
                    index = i;
                }
            }

            return index;
        }
        int lowestIndex(vector<T> vec_)
        {
            int index = 0;
            double lowest = vec_[0].getTotal();

            for(int i = 0; i < vec_.size(); i++)
            {
                if(vec_[i].getTotal() < lowest)
                {
                    lowest = vec_[i].getTotal();
                    index = i;
                }
            }

            return index;
        }
        double average(vector<T> vec_)
        {
            double sum = 0;

            for(int i = 0; i < vec_.size(); i++)
            {
                sum += vec_[i].getTotal();
            }

            return (sum / vec_.size());
        }
};

class Book
{
    private:
        string title;
        int pages;

    public:
        Book(string title_, int pages_)
        {
            title = title_;
            pages = pages_;
        }
        virtual ~Book(){}

        void setPages(int pages_) { pages = pages_; }
        void setTitle(const string &title_) { title = title_; }
        int getPages() const { return pages; }
        string getTitle() const { return title; }

        void toString() 
        {
            cout << title << ", páginas: " << getTotal();
        }
        int getTotal()
        {
            return pages;
        }

};

class Request
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

        void toString()
        {   
            cout << "R$ " << unitaryValue << ", quant: " << quantity << ", total: R$ " << this->getTotal();
        }
        double getTotal()
        {
            return unitaryValue * quantity;
        }
        
};

int main()
{
    int N, quantity, index_low, index_bigg;
    double value;
    string title;
    Statistical<Request> statisticalRequests;
    Statistical<Book> statisticalBooks;

    vector<Request> requests;
    vector<Book> books;

    cin >> N;
    while(N--)
    {
        cin >> value
            >> quantity; 
        requests.push_back(Request(value, quantity));
    }

    cin >> N; cin.ignore();
    while(N--)
    {
        getline(cin, title);
        cin >> quantity; cin.ignore();

        books.push_back(Book(title, quantity));
    }

    index_bigg = statisticalRequests.biggestIndex(requests);
    index_low = statisticalRequests.lowestIndex(requests);
    cout << "Maior: ";
    requests[index_bigg].toString();
    cout << endl;
    cout << "Menor: ";
    requests[index_low].toString();
    cout << endl;
    cout << "Média: " << statisticalRequests.average(requests) << endl;
    
    index_bigg = statisticalBooks.biggestIndex(books);
    index_low = statisticalBooks.lowestIndex(books);
    cout << "Maior: ";
    books[index_bigg].toString();
    cout << endl;
    cout << "Menor: ";
    books[index_low].toString();
    cout << endl;
    cout << "Média: " << statisticalBooks.average(books) << endl;

    return 0;
}
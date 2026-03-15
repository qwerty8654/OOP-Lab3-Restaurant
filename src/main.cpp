#include <iostream>
#include <string>

using namespace std;

class Dish                              //описує страву з меню ресторану
{
private:                               //означає, що ці змінні можна використовувати тільки всередині класу (не можна змінювати напряму з main)
    string name;                          //поля
    double price;

public:

    Dish() : Dish("Unknown dish", 0.0) {}                     //конструктор або функція, яка створює об'єкт

    Dish(string n, double p = 0.0) : name(n), price(p) {}                    //конструктор дозволяє задати назву і ціну

    void showDish()                           //Метод - функція класу. виводить інформацію про страву
    {
        cout << "Dish: " << name << " Price: " << price << endl;
    }

    ~Dish()                           //деконструктор викликається коли об'єкт знищюється або програма завершується
    {
        cout << "Dish deleted\n";
    }
};

class Customer                       //опис клієнта ресторану
{
private:
    string name;                   //поля
    int tableNumber;

public:

    Customer() : Customer("Guest", 0) {}             //конструктор без параметрів

    Customer(string n, int t = 0) : name(n), tableNumber(t) {}

    void showCustomer()                          //виводить інформацію про клаєнта
    {
        cout << "Customer: " << name << " Table: " << tableNumber << endl;
    }

    ~Customer()
    {
        cout << "Customer deleted\n";
    }
};

class Order                           //описує замовлення в ресторані
{
private:
    string dishName;                   //поля
    int quantity;

public:

    Order() : Order("Unknown", 1) {}                   //конструктор

    Order(string d, int q = 1) : dishName(d), quantity(q) {}                    //конструктор з параметрами

    void showOrder()
    {
        cout << "Order: " << dishName << " Quantity: " << quantity << endl;
    }

    ~Order()
    {
        cout << "Order deleted\n";
    }
};

int main()                          //програма починає працювати тут
{
    Dish d1;                         //створення обєктів
    Dish d2("Pizza", 120);

    Customer c1;
    Customer c2("Emma", 5);

    Order o1;
    Order o2("Pizza", 2);

    d1.showDish();                  //показує інформацію про страви
    d2.showDish();

    c1.showCustomer();                   //показує інформацію про клієнтів
    c2.showCustomer();

    o1.showOrder();                  //показує інформацію про замовлення
    o2.showOrder();

    return 0;
}

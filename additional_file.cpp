#include <iostream>
#include <time.h>
using namespace std;

/*1. Paradigme de programare. Concepte de bază ale programării orientate obiect:*/
/*
class Jar {

  public:
    // Setter
    void Fill_water(int s) {
      water_volume = s;
    }
    // Getter
    int Get_water() {
      return water_volume;
    }

  private:
    // Private attribute
    int water_volume;
};

int main() {
  Jar jar1;
  jar1.Fill_water(1000);
  cout << jar1.Get_water();
  return 0;
}*/

/*2. Elemente ale limbajului C++ din perspectiva implementării principiilor POO:*/
/*class Jar 
{

  public:
    // Setter
    void Fill_water(int quantity)
    {
      water_volume += quantity;
    }
    // Getter
    int Get_water()
    {
      return water_volume;
    }

  private:
    // Private attribute
    int water_volume{0};
};
class Pool : public Jar
{
    public:
        void Fill_more_water(Jar &jar1)
        {
            for(int i = 0; i < 10; i++)
            {
                jar1.Fill_water(1000);
            }
            total_quantity = jar1.Get_water();
        }

    int Get()
    {
        return total_quantity;
    }

    private:
        int total_quantity;

};
int main() {
  Jar jar1;
  Pool vara_vara;
  jar1.Fill_water(1000);
  cout <<"full water = " << jar1.Get_water() << endl;
  vara_vara.Fill_more_water(jar1);
  cout <<"full water = " << vara_vara.Get() << endl;

  
  return 0;
}*/

/*3. Clase. Constructori și destructori. Apelul constructorilor:*/
/*class Jar 
{

  public:
    string water_name;
    Jar(){

    }
    Jar(int val,string w_name)
    {
        cout << "Constructor called for " << w_name << endl;
        water_volume += val;
        water_name = w_name;
    }

    ~Jar()
    {
        cout << "Dstructor called for " << water_name << endl;
    }
  private:
    // Private attribute
    int water_volume{0};
};

int main() {
    Jar jar1(10,"Adriatica");
    Jar jar2(10,"Mediteranean");
    Jar jar3(10,"Black");

  
  return 0;
}*/

/*4. Funcții și clase friend. Clase friend:*/


class Truck;
class Car;

class Car
{
    public: 
        string brand;

        friend void Get_a_rand_nr(Car &obj); //friend function declaration

        friend class Truck;

        void Get_car_name()
        {
            count = (rand() % 10) + 5;
            brand.resize(count);
            for(int i = 0; i < count; i++)
            {
                brand[i] = alfab[rand() % (sizeof(alfab) - 1)];
            }
        }

        void Set_Truck_class_number(Truck &big_car);

        int Get_car_numbers()
        {
            return number;
        }

    protected:
        int count;

    private:
        int number;
        string alfab = "abcdefghijklmnopqrstuvwxyz";
};


void Get_a_rand_nr(Car& obj)
{   
    obj.number = (rand() % 10000) + 1;
}

class  Truck
{
    friend class Car;

    public:
        
        void printing(Car &obj)
        {
            obj.Get_car_name();
        }

        int Get_rand_number()
        {
            return rand() % 10;
        }

        int Get_private_val()
        {
            return rand_nr;
        }

    private:
        int rand_nr;
};

void Car::Set_Truck_class_number(Truck &big_car)
{
    big_car.rand_nr = big_car.Get_rand_number();
}


int main()
{
    Car Fiat;
    Truck bass;
    srand(time(0));

    bass.printing(Fiat);
    cout << "Car brand created from Truck class (brand): " << Fiat.brand << endl << endl;
    Fiat.Set_Truck_class_number(bass);
    cout << "This is Truck private value created with Car class (rand_nr) : "<< bass.Get_private_val() << endl << endl;


    Get_a_rand_nr(Fiat); // frend function
    cout << "Friend function's result rom class Car (number):  " << Fiat.Get_car_numbers() << endl; 

    return 0;
}
#include<iostream>
#include<conio.h>
using namespace std;

class Circle
{
    private :

        float Rad, Area, Circum;

        void Area_Of_Circle();
        void Circumference_Of_Circle();

    public :

        Circle();
        Circle(float R);
        Circle(Circle &cRef);

        void Accept_Radius();
        void Display_Details();

        ~Circle();
};

/// Constructor Definitions

Circle :: Circle()                   /// Default Constructor - Definition
{
    Rad = Area = Circum = 0.0;
    cout << "\n Inside Default Constructor." << endl;
}

Circle :: Circle(float R)            /// Parameterized Constructor - Definition
{
    Rad = R;
    Area = Circum = 0.0;
    cout << "\n Inside Parameterized Constructor1." << endl;

    Area_Of_Circle();
    Circumference_Of_Circle();
}


Circle :: Circle(Circle &cRef)            /// Copy Constructor - Definition
{
    Rad = cRef.Rad;
    Area = cRef.Area;
    Circum = cRef.Circum;

    cout << "\n Inside Copy Constructor." << endl;
}


/// Member Functions Definitions
void Circle :: Area_Of_Circle()
{
    Area = 3.14 * Rad * Rad;
    cout << "\n Area Calculated." << endl;
}

void Circle :: Circumference_Of_Circle()
{
    Circum = 2 * 3.14 * Rad;
    cout << "\n Circumference Calculated." << endl;
}

void Circle :: Accept_Radius()
{
    cout << "\n Enter a Radius : ";
    cin >> Rad;

    Area_Of_Circle();
    Circumference_Of_Circle();
}

void Circle :: Display_Details()
{
    cout << "\n ========== ***** ========== \n ";

    cout << "\n Radius of Circle        : " << Rad;         /// Private Data Member
    cout << "\n Area of Circle          : " << Area;        /// Public Data Member
    cout << "\n Circumference of Circle : " << Circum;      /// Public Data Member

    cout << "\n ========== ***** ========== \n ";
}

Circle :: ~Circle()
{
    cout << "\n Inside Destructor Object Deleted : " << Rad;
}

///

int main()
{
    Circle Cir1;        /// Object Created with Default Constructor

    Cir1.Accept_Radius();
    getch();
    Cir1.Display_Details();
    /// //////////////////////////////////////////////////////////////////////////

    Circle Cir2(5.3);      /// Object Created with Parameterized Constructor
    getch();
    Cir2.Display_Details();

    /// //////////////////////////////////////////////////////////////////////////

    Circle Cir3(Cir1);      /// Object Created with Copy Constructor

    Cir3.Display_Details();

    /// /////////////////////////////////////////////////////////////////////////
    Cir1.Accept_Radius();

    Cir1.Display_Details();

    Cir3.Display_Details();

    getch();
    return 0;
}

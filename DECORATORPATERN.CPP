#include <iostream>

using namespace std;

class A{
    public:
    virtual void greeting() {
        cout << "Hola";
    }
};

class AwithX: public A {
  public:
    void greeting() {
        A::greeting();
        greeting_X();
    };
  private:
    void greeting_X() {
        cout << " que tal!!";
    }
};

class AwithY: public A {
  public:
    /*virtual*/
    void greeting() {
        A::greeting();
        greeting_Y();
    }
  protected:
    void greeting_Y() {
        cout << " mucho gusto";
    }
};

class AwithZ: public A {
  public:
    /*virtual*/
    void greeting() {
        A::greeting();
        greeting_Z();
    }
  protected:
    void greeting_Z() {
        cout << " mi nombre es pancracio";
    }
};

class AwithXY: public AwithX, public AwithY
{
  public:
    /*virtual*/
    void greeting() {
        AwithX::greeting();
        AwithY::greeting_Y();
    }
};

class AwithXYZ: public AwithX, public AwithY, public AwithZ
{
  public:
    /*virtual*/
    void greeting() {
        AwithX::greeting();
        AwithY::greeting_Y();
        AwithZ::greeting_Z();
    }
};

int main(){
    AwithX anX;
    AwithXY anXY;
    AwithXYZ anXYZ;
    anX.greeting();
    cout << '\n';
    anXY.greeting();
    cout << '\n';
    anXYZ.greeting();
    cout << '\n';
return 0;
}










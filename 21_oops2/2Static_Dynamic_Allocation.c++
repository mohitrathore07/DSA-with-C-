#include <iostream>
using namespace std;

class Player {
    private: // class varialbes should be private
    int health;
    int score;
    int age;
    bool isAlive;

    public: // getter setters
    int getHealth() {
        return health;
    }
    int getScore() {
        return score;
    }
    int getAge() {
        return age;
    }
    bool getisAlive() {
        return isAlive;
    }
    void setHealth(int health) {
        this->health = health;
    }
    void setScore(int score) {
        this->score = score;
    }
    void setAge(int age) {
        this->age = age;
    }
    void setisAlive(bool isAlive) {
        this->isAlive = isAlive;
    }
};

int main() {

    Player a;
    Player b; // static memory allocated , compile time

    Player *urvi = new Player; // run time , dynamic allocation // new Player obj store krega and *urvi uska address hold kregi 
    
    // 1st way
    Player urviObject = *urvi; // since urvi me address h obj ka so distructure krke obj diya

    urviObject.setAge(44);
    urviObject.setHealth(71);
    urviObject.setisAlive(false);
    urviObject.setScore(88);

    // or we can do like this

    (*urvi).setAge(78); // direct address pr 

    // or we can do 
    int urviage = urvi->getAge(); // direct address pr jake work 

    cout<<urviage<<endl;
}
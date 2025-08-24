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

// taking object into functions 
int addScore(Player a , Player b) {
    return a.getScore() + b.getScore();
}

// return type is object

Player getMaxScorePlayer(Player a , Player b) {
    if(a.getScore() > b.getScore()) {
        return a;
    }
    else 
        return b;
}

int main() {

    Player p1;
    Player p2;

    p1.setAge(18);
    p1.setHealth(55);
    p1.setisAlive(true);
    p1.setScore(88);

    p2.setAge(17);
    p2.setHealth(44);
    p2.setisAlive(false);
    p2.setScore(70);

    // passing object to function
    int score = addScore(p1 , p2);
    cout<<"Score is: "<<score<<endl;

    // object type function called
    Player newplayer = getMaxScorePlayer(p1, p2);
    cout<<newplayer.getScore();
    return 0;
}
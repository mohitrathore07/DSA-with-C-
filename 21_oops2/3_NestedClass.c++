/*
#include <iostream>
using namespace std;

class Gun {
    public: 
        int ammo;
        int damage;
        int scope;
};

class Player {
    private: 
    int health;
    int score;
    int age;
    bool isAlive;
    Gun gun; // object of Gun
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

    // get for gun 
    int getAmmo() {
        return gun.ammo;
    }
    int getDamage() {
        return gun.damage;
    }
    
    int getScope() {
        return gun.scope;
    }

    void setScope(int scope) {
         this->gun.scope = scope;
    }
    void setAmmo(int ammo) {
         this->gun.ammo = ammo;
    }
    void setDamage(int damage) {
         this->gun.damage = damage;
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
    Player p1;

    p1.setAge(45);
    p1.setHealth(75);
    p1.setScore(88);
    p1.setisAlive(true);

    p1.setAmmo(100);
    p1.setDamage(77);
    p1.setScope(2);

    cout<<p1.getAge()<<endl;
    cout<<p1.getAmmo()<<endl;
    cout<<p1.getDamage()<<endl;
    cout<<p1.getHealth()<<endl;
    cout<<p1.getisAlive()<<endl;
    cout<<p1.getScope()<<endl;
    cout<<p1.getScore()<<endl;
    return 0;
}
*/


// or it can be like this
#include <iostream>
using namespace std;


class Player {

    public:
     class Healmet {
        int hp;
        int level;

        public: 
            void setHp(int hp) {
                this->hp = hp;
            }
            void setLevel(int level) {
                this->level = level;
            }

            int getHp() {
                return hp;
            }
            
            int getLevel() {
                return level;
            }
    };


    private: 
    int health;
    int score;
    int age;
    bool isAlive;
    Healmet healmet; // isi class me object

    public:
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

    // each time new object for new player dynamic allocation

    void setHelmet(int level) {
        Healmet *helmet = new Healmet;
        helmet->setLevel(level);
        int health = 0;

        if(level == 1) 
            health = 25;
        
        else if(level == 2) 
            health = 35;
        
        else if(level == 3) 
            health = 50;
        else 
            cout<<"error , invalid level"<<endl;

        helmet->setHp(health);
        this->healmet = *helmet;
    }

    // Healmet getHelmet () {
    //     return healmet;
    // }

    void getHelmet () {
        cout<<healmet.getHp()<<endl;
        cout<<healmet.getLevel()<<endl;
    }
};

int main() {
    Player p1;

    p1.setAge(45);
    p1.setHealth(75);
    p1.setScore(88);
    p1.setisAlive(true);

    p1.setHelmet(2);
    
    // to get nested obj we have to do something 
    // Healmet helmet123 = p1.getHealmet();  we can't do like this
    
    // Player::Healmet healmet1 = p1.getHelmet(); // we have to do this 

    // or 
    p1.getHelmet();
    return 0;
}
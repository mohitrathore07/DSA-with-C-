/*



#include <iostream>
using namespace std;

class Player {
    private: 
    int health;
    int score;
    int age;
    bool isAlive;

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
};

int main() {

    Player p1;
    Player p2;

    p1.setAge(45);
    p1.setHealth(75);
    p1.setScore(88);
    p1.setisAlive(true);

    p2.setAge(45);
    p2.setHealth(75);
    p2.setScore(88);
    p2.setisAlive(true);

    Player *urvi = new Player; 
    Player urviObject = *urvi; 
    urviObject.setAge(44);
    urviObject.setHealth(71);
    urviObject.setisAlive(false);
    urviObject.setScore(88);

    Player players[3] = {p1 , p2 , *urvi};

    cout<<players[0].getScore();
    return 0;
}
*/


// create a class creator add name age , matches he played and avg runs. then create array that holds record of 20 such cricketers and WAP to read these recordss

#include <iostream>
#include <vector>
using namespace std;

class Cricketers {
    private:
    char name; 
    int no_of_matches;
    int avg_score;
    int age;
    

    public: 
    char getName() {
        return name;
    }

    int getAvgScore() {
        return avg_score;
    }
    int getAge() {
        return age;
    }
    int getNoOfMatches() {
        return no_of_matches;
    }

    void setName(char name) {
        this->name = name;
    }
    void setAvgScore(int avg_score) {
        this->avg_score = avg_score;
    }
    void setAge(int age) {
        this->age = age;
    }
    void setNoOfMatches(int no_of_matches) {
        this->no_of_matches = no_of_matches;
    }
};



int main() {
    Cricketers player1;
    Cricketers player2;
    Cricketers player3;
    Cricketers player4;
    Cricketers player5;

    player1.setAge(18);
    player1.setAvgScore(5555);
    player1.setName('Rohit');
    player1.setNoOfMatches(55);

    player2.setAge(18);
    player2.setAvgScore(5555);
    player2.setName('Rohit');
    player2.setNoOfMatches(55);

    player2.setAge(18);
    player2.setAvgScore(5555);
    player2.setName('Rohit');
    player2.setNoOfMatches(55);

    player2.setAge(18);
    player2.setAvgScore(5555);
    player2.setName('Rohit');
    player2.setNoOfMatches(55);

    player2.setAge(18);
    player2.setAvgScore(5555);
    player2.setName('Rohit');
    player2.setNoOfMatches(55);


    /*
    dynamic work*/

    vector<Cricketers> listplayers;
    for(int i = 0; i < 2; i++) {
        Cricketers *cricketer = new Cricketers;
        // cricketer->name = ;

        listplayers.push_back(*cricketer);
    }
    Cricketers cricket[] = {player1 , player2 , player3, player4, player5};


    return 0;
}

#include <string>
#include <vector>
class player
{
    private:
        std::string _pseudo;
        int _score[5] = {0,30,90,40,60};

    public:
        Player(std::string nom);
        int _getscore1 ();
        int _getscore2 ();
        int _getscore3 ();
        int _getscore4 ();
        int _getscore5 ();
        int printBestScore();
        int printScoreTotal();
        Player();
        Player(std::string pseudo, int score_1, int score_2, int score_3, int score_4, int score_5)
}
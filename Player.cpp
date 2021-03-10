#include <iostream>
#include <string>
#include <vector>

Player(std::string pseudo, int score_1, int score_2, int score_3, int score_4, int score_5)


void Player::addScore(int score, int chanson)
{
    if (score > _score[chanson])
    {
        _score[chanson] = score;
    }
}

void Player::averageScore()
{
    int moyenne = 0;
    int chansonJoue = 0;
    for (int i = 0; i<5; i++)   
    
}

void Player::printScore()
{
    for (int i = 0; i<5; i++)   
    {
        if (_score[i]> 50)
        {
            std::cout << "911 Damso " << i << " : " << _score[i] << std::endl;
        }

        else
        {
            std::cout << "911 Damso " << i << " : Rejouer :" << std::endl;
        }
        
    }
}
int Player :: getscore1()
{
    return score_1; 
}

int Player :: getscore2()
{
    return score_2; 
}

int Player :: getscore3()
{
    return score_3; 
}

int Player :: getscore4()
{
    return score_4; 
}

int Player :: getscore5()
{
    return score_5; 
}

void Player::printBestScore()
{
    int bestScore = 0;
    for (int i = 0; i<5; i++)   
   
    std::cout << "Meilleur score : " << bestScore << std::endl;
}

void Player::printScoreTotal()
{
    int scoreTotal = 0;
    for (int i = 0; i<5; i++)
    {
        if (_score[i]> 50)
        {
            scoreTotal += _score[i];
        }
    }

    std::cout << "Score Total : " << scoreTotal << std::endl;
}

Player::Player(std::string pseudo) : _pseudo (pseudo)
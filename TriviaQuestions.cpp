#include <iostream>
#include <stdlib.h> // include system pause
#include <string> // use string var

const char isTrue = 't';
const char isFalse = 'f';
char myAnswer;

std::string triviaBot = "TriviaBot: "; // Display character named "TriviaBot" before the dialogue 
std::string gamePlayer = "User: "; // Display character named "TriviaBot" before the dialogue 

// Questions true or false
class TriviaQuest {
public:

    std::string ansCorrect = "Correct, ";
    std::string ansWrong = "Wrong, ";

    int myScore = 0; // +1 is added to myScore after each correct answer

    void showQuestion1() {
        // Give out instruction.
        std::cout << triviaBot << "Instructions. Type 't' if true and 'f' if false. \n";
        system("pause");

        // Start Question 1
        std::cout << "\n" << triviaBot << "1. An atom is the smallest particle. t/f \n";
        std::cout << gamePlayer;
        std::cin >> myAnswer;

        // Executes codes depending on myAnswer
        if (myAnswer == isTrue)
        {
            std::cout << "\n" << triviaBot << ansWrong + "an atom is not the smallest particle as there subatomic particles that are smaller. \n";
            system("pause"); // Pause first
            showQuestion2(); // Proceed to next question
        }
        else if (myAnswer == isFalse)
        {
            std::cout << "\n" << triviaBot << ansCorrect + "its false, there are subatomic particles that are smaller than an atom. \n";
            myScore++; // +1 is added to myScore
            system("pause");
            showQuestion2();
        }
        else if (myAnswer != isTrue || isFalse)
        {
            std::cout << "\n" << "Wrong Input. Go to next." << std::endl;
            system("pause");
            showQuestion2();
        }

    }

    void showQuestion2() {

        // Start Question 2
        std::cout << "\n" << triviaBot << "2. Arachnophobia is the fear of bathing. t/f \n";
        std::cout << gamePlayer;
        std::cin >> myAnswer;

        if (myAnswer == isTrue)
        {
            std::cout << "\n" << triviaBot << ansWrong + "its false, ablutophobia is the fear of bathing. \n";
            system("pause");
            showQuestion3();
        }
        else if (myAnswer == isFalse)
        {
            std::cout << "\n" << triviaBot << ansCorrect + "ablutophobia is the fear of bathing. \n";
            myScore++;
            system("pause");
            showQuestion3();
        }
        else if (myAnswer != isTrue || isFalse)
        {
            std::cout << "\n" << "Wrong Input. Go to next." << std::endl;
            system("pause");
            showQuestion3();
        }
    }

    void showQuestion3() {

        // Start Question 3
        std::cout << "\n" << triviaBot << "3. Boiling water is 100 degrees Celsius. t/f \n";
        std::cout << gamePlayer;
        std::cin >> myAnswer;

        if (myAnswer == isTrue)
        {
            std::cout << "\n" << triviaBot << ansCorrect + "it is equivalent to 212 degrees Fahrenheit. \n";
            myScore++;
            system("pause");
            showQuestion4();
        }
        else if (myAnswer == isFalse)
        {
            std::cout << "\n" << triviaBot << ansWrong + "its true, it is equivalent to 212 degrees Fahrenheit. \n";
            system("pause");
            showQuestion4();
        }
        else if (myAnswer != isTrue || isFalse)
        {
            std::cout << "\n" << "Wrong Input. Go to next." << std::endl;
            system("pause");
            showQuestion4();
        }
    }

    void showQuestion4() {

        // Start Question 4
        std::cout << "\n" << triviaBot << "4. Butterflies taste things with their wings. t/f \n";
        std::cout << gamePlayer;
        std::cin >> myAnswer;

        if (myAnswer == isTrue)
        {
            std::cout << "\n" << triviaBot << ansWrong + "its false, butterflies taste with their feet. \n";
            system("pause");
            showQuestion5();
        }
        else if (myAnswer == isFalse)
        {
            std::cout << "\n" << triviaBot << ansCorrect + "butterflies taste with their feet. \n";
            myScore++;
            system("pause");
            showQuestion5();
        }
        else if (myAnswer != isTrue || isFalse)
        {
            std::cout << "\n" << "Wrong Input. Go to next." << std::endl;
            system("pause");
            showQuestion5();
        }
    }

    void showQuestion5() {

        // Start Question 5
        std::cout << "\n" << triviaBot << "5. Colorblind people can see color. t/f \n";
        std::cout << gamePlayer;
        std::cin >> myAnswer;

        if (myAnswer == isTrue)
        {
            std::cout << "\n" << triviaBot << ansCorrect + "some colorblind people can see very narrow ranges of color. \n";
            myScore++;
            system("pause");
            myOverallScore();
        }
        else if (myAnswer == isFalse)
        {
            std::cout << "\n" << triviaBot << ansWrong + "its true, some colorblind people can see very narrow ranges of color. \n";
            system("pause");
            myOverallScore();
        }
        else if (myAnswer != isTrue || isFalse)
        {
            std::cout << "\n" << "Wrong Input. Go to next." << std::endl;
            system("pause");
            myOverallScore();
        }
    }
    void myOverallScore() {
        // Shows your overall score of the test. 
        std::cout << "\nYour total score are: " << myScore << "/5" << std::endl;
        system("pause");
    }
};

void triviaIntro() {

    const char yes = 'y';
    const char no = 'n';
    char response;

    std::cout << triviaBot << "Are you ready for some trivia questions? y/n \n";
    std::cin >> response;

    // Executes code depending on the response
    if (response == yes)
    {
        std::cout << "\n";
        TriviaQuest StartNew; // Access TriviaQuest's Questions
        StartNew.showQuestion1(); // Start at Question 1
    }
    else if (response == no) {
        std::string reply; // add reply to answer why not?

        std::cout << triviaBot << "Awwh, why not? \n";
        std::cout << gamePlayer;
        std::cin >> reply; // Give a reason not to continue.
        std::cout << triviaBot << "Okay then, come and play when your ready!" << std::endl;
    }

    return;
}

int main() {

    system("color A"); // Text color: light green

    triviaIntro(); // Start code at intro

    return 0;
}

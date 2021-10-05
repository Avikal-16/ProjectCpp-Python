#include<iostream>
#include<cstdlib>
#include<ctime>

using namespace std;

int main()
{
    srand(time(nullptr));

    bool guessNumber = false;
    int guessCount = 0;
    int OurGuess;
    int computerNumber = rand()% 100 + 1;

    while(!guessNumber)
        {
            cout<<"Enter your guess: "<<endl;
            cin>> OurGuess;

                if(OurGuess > 100 || OurGuess < 1)
                    {
                        cout<<"It is a wasted guess. You must pick a number between 1 and 100 inclusive!" <<endl;
                        guessCount++;
                        continue;
                    }
                if(OurGuess == computerNumber)
                    {
                        cout<<"Congratulations! Your guess is correct, thanks for playing !! " <<endl;
                        guessNumber = true;
                    }
                else if(OurGuess > computerNumber)
                    {
                       cout<<"Your guess is higher then the actual number, try your luck again !! " <<endl;     
                    }
                else
                    {
                        cout<<"Your guess is too low,try your luck again !!" <<endl;
                   
                    }//end if else
                guessCount++;
        }//end while

    return 0;
}

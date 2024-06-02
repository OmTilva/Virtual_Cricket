#include <bits/stdc++.h>
using namespace std;

const char HEADS = 'h';
const char TAILS = 't';
const char BAT = 'b';
const char FIELD = 'f';
int player;
int computer;
int run = 0;
int run2 = 0;
int target;
class virtual_cricket
{
    char a; // a-> player
    char b; // b-> computer
    char coin;
    char select;
    char select2;

public:
    void toss();
    void toss_coin();
    void toss_winner();
    void selection();
    void innings1();
    void innings2();
};
void virtual_cricket::toss()
{
    cout << setw(50) << "TOSS." << endl;
    cout << "player chosses:";
    cin >> a;
    while (a != HEADS && a != TAILS)
    {
        cout << "INVALID SELECTION!" << endl;
        cout << "Please select anyone from(t/h)" << endl;
        cout << "player chose:";
        cin >> a;
    }
    // computer toss choice
    if (a == TAILS)
    {
        b = HEADS;
    }
    else
    {
        b = TAILS;
    }
    cout << "\ncomputer chose:" << b << endl;
}
void virtual_cricket::toss_coin()
{

    srand(time(0));
    int x1 = rand() % 2 + 1;
    if (x1 == 1)
    {
        coin = TAILS;
    }
    else if (x1 == 2)
    {
        coin = HEADS;
    }
    cout << "\ncoin tossed:" << coin << endl;
}
void virtual_cricket::toss_winner()
{
    if (coin == a)
    {
        cout << "\nplayer wins the toss" << endl;
    }
    else if (coin == b)
    {
        cout << "\ncomputer wins the toss" << endl;
    }
}

void virtual_cricket ::selection()
{
    if (coin == a)
    {
        cout << "Enter b to bat first or f to field first." << endl;
        cout << "player opts to:";
        cin >> select;
    }
    else
    {
        int x2 = rand() % 2 + 1;
        if (x2 == 1)
        {
            select2 = BAT;
        }
        else if (x2 == 2)
        {
            select2 = FIELD;
        }
        cout << "computer opts to:" << select2 << endl;
    }
}
void virtual_cricket::innings1()
{
    if (select == BAT)
    {
        cout << "\nplayer:";
        cin >> player;
        run = run + player;

        srand(time(0));
        computer = rand() % 6 + 1;

        cout << "computer:" << computer << endl;
        if (player == computer)
        {
            cout << "\nplayer gets out on " << run - player << endl;
            target = (run - player) + 1;
        }
        else
            target = run + 1;
    }
    if (select == FIELD)
    {
        cout << "\nplayer:";
        cin >> player;

        srand(time(0));
        computer = rand() % 6 + 1;

        cout << "computer:" << computer << endl;
        run = run + computer;
        if (player == computer)
        {
            cout << "computer gets out on " << run - computer << endl;
            target = (run - computer) + 1;
        }
        else
            target = run + 1;
    }
    if (select2 == BAT)
    {
        cout << "\nplayer:";
        cin >> player;

        srand(time(0));
        computer = rand() % 6 + 1;

        cout << "computer:" << computer << endl;
        run = run + computer;
        if (player == computer)
        {
            cout << "computer gets out on " << run - computer << endl;
            target = (run - computer) + 1;
        }
        else
            target = run + 1;
    }
    if (select2 == FIELD)
    {
        cout << "\nplayer:";
        cin >> player;
        run = run + player;

        srand(time(0));
        computer = rand() % 6 + 1;

        cout << "computer:" << computer << endl;
        if (player == computer)
        {
            cout << "\nplayer gets out on " << run - player << endl;
            target = (run - player) + 1;
        }
        else
            target = run + 1;
    }
}
void virtual_cricket::innings2()
{
    if (select == BAT)
    {
        cout << "\nplayer:";
        cin >> player;

        srand(time(0));
        computer = rand() % 6 + 1;

        cout << "computer:" << computer << endl;
        run2 = run2 + computer;
        if (player == computer)
        {
            cout << "\ncomputer gets out on " << run2 - computer << endl;
            cout << setw(50) << "\nplayer wins the match by " << target - (run2 - computer) << "runs" << endl;
        }
        else if (run2 >= target)
        {
            cout << setw(50) << "\ncomputer wins the match" << endl;
        }
    }
    if (select == FIELD)
    {
        cout << "\nplayer:";
        cin >> player;
        run2 = run2 + player;

        srand(time(0));
        computer = rand() % 6 + 1;

        cout << "computer:" << computer << endl;
        if (player == computer)
        {
            cout << "\nplayer gets out on " << run2 - player << endl;
            cout << setw(50) << "\ncomputer wins the match by " << target - (run2 - player) << "runs" << endl;
        }
        else if (run2 >= target)
        {
            cout << setw(50) << "\nplayer wins the match" << endl;
        }
    }
    if (select2 == BAT)
    {
        cout << "\nplayer:";
        cin >> player;
        run2 = run2 + player;

        srand(time(0));
        computer = rand() % 6 + 1;

        cout << "computer:" << computer << endl;
        if (player == computer)
        {
            cout << "\nplayer gets out on " << run2 - player << endl;
            cout << setw(50) << "\ncomputer wins the match by" << target - (run2 - player) << "runs" << endl;
        }
        else if (run2 >= target)
        {
            cout << setw(50) << "\nplayer wins the match" << endl;
        }
    }
    if (select2 == FIELD)
    {
        cout << "\nplayer:";
        cin >> player;

        srand(time(0));
        computer = rand() % 6 + 1;
        cout << "computer:" << computer << endl;
        run2 = run2 + computer;

        if (player == computer)
        {
            cout << "\ncomputer gets out on " << run2 - computer << endl;
            cout << setw(50) << "\nplayer wins the match by " << target - (run2 - computer) << "runs" << endl;
        }
        else if (run2 >= target)
        {
            cout << setw(50) << "\ncomputer wins the match" << endl;
        }
    }
}
int main()
{
    virtual_cricket v;
    int overs;
    int balls;
    cout << setw(50) << "VIRTUAL CRICKET." << endl;
    cout << "Enter No Of Overs In Game:";
    cin >> overs;
    balls = overs * 6;
    v.toss();
    v.toss_coin();
    v.toss_winner();
    cout << setw(50) << "SELECTION." << endl;
    v.selection();
    cout << setw(50) << "MATCH BEGINS" << endl;
    cout << setw(50) << "INNINGS 1" << endl;
    for (int i = 1; i <= balls; i++)
    {
        v.innings1();
        if (player == computer)
        {
            break;
        }
    }
    cout << setw(50) << "End Of Innings 1" << endl;
    cout << "\n" <<setw(45) << "TARGET:" << target << endl;
cout<< "\n"<< setw(48)<< "INNINGS 2"<< endl;
    for (int f = 1; f < balls; f++)
    {
        v.innings2();
        if (player == computer)
        {
            break;
        }
        if (run2 >= target)
        {
            break;
        }
    }
    return 0;
}
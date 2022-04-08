#include <bits/stdc++.h>
#include <windows.h>
#include <ctime>
using namespace std;
// function to wish user
void wishme()
{
    time_t now = time(0);
    tm *time = localtime(&now);
    if (time->tm_hour < 12)
    {
        cout << "GOOD MORNING SIR" << endl;
    }
    else if (time->tm_hour > 12 && time->tm_hour < 16)
    {
        cout << "GOOD AFTERNOON SIR" << endl;
    }
    else if (time->tm_hour > 16 && time->tm_hour < 24)
    {
        cout << "GOOD EVENING SIR" << endl;
    }
}
void datetime()
{
    time_t now = time(0);
    char *dt = ctime(&now);
    cout << "THE DATE AND TIME IS " << endl
         << dt << endl;
}

int main()
{
    // system('cls');
    cout << "\t\t\t<-----------------------------------W E L C O M E ----------------------------------->" << endl;
    cout << "\t\t\t<-----------------------------------I M VIRTUAL ASSISTANCE ----------------------------------->" << endl;
    cout << "\t\t\t<-----------------------------------MY NAME IS JARVIS ----------------------------------->" << endl;
    cout << "\t\t\t<-----------------------------------I AM HERE TO HELP YOU ----------------------------------->" << endl
         << endl;

    char password[20];
    char ch[100];
    do
    {
        cout << "|---------------------|" << endl;
        cout << "| ENTER YOUR PASSWORD |" << endl;
        cout << "|----------------------|" << endl
             << endl;
        string phrase = " Enter your password";
        string command = "espeak \" " + phrase + "\"";
        const char *charCommand = command.c_str();
        system(charCommand);

        gets(password);

        STARTUPINFO startInfo = {0};
        PROCESS_INFORMATION processInfo = {0};

        if (strcmp(password, "apt") == 0)
        {
            cout << "COREECT PASSWORD" << endl;
            string phrase = " correct password";
            string command = "espeak \" " + phrase + "\"";
            const char *charCommand = command.c_str();
            system(charCommand);

            cout << "\n<-------------------------------------------------------------------------------->\n";
            wishme();
            do
            {
                cout << "\n<-------------------------------------------------------------------------------->\n";
                cout << endl
                     << "HOW CAN I HELP YOU SIR................" << endl
                     << endl;
                cout << "ENTER YOUR QUERY ----->" << endl;
                gets(ch);
                cout << endl;
                // cout<<" HERE IS THE RESULT OF YOUR QUESTION ...>";
                if (strcmp(ch, "hi") == 0 || strcmp(ch, "hey") == 0 || strcmp(ch, "hello") == 0)
                {
                    cout << "HELLO SIR" << endl;
                    string phrase = " hello sir";
                    string command = "espeak \" " + phrase + "\"";
                    const char *charCommand = command.c_str();
                    system(charCommand);
                }
                else if (strcmp(ch, "bye") == 0 || strcmp(ch, "stop") == 0 || strcmp(ch, "exit") == 0)
                {
                    cout << "GOOD BYE SIR, HAVE A NICE DAY:)" << endl;
                    string phrase = " GOOD BYE SIR HAVE A NICE DAY";
                    string command = "espeak \" " + phrase + "\"";
                    const char *charCommand = command.c_str();
                    system(charCommand);
                    exit(0);
                }
                else if (strcmp(ch, "who are you") == 0 || strcmp(ch, "tell me about you") == 0 || strcmp(ch, "about you") == 0)
                {
                    cout << "I am virtual assistant created by Team Ashish, Poonam and Tanuja" << endl;
                    string phrase = " I am virtual assistant created by Team Ashish, Poonam and Tanuja";
                    string command = "espeak \" " + phrase + "\"";
                    const char *charCommand = command.c_str();
                    system(charCommand);
                }
                else if (strcmp(ch, "how are you") == 0 || strcmp(ch, "whatsup") == 0 || strcmp(ch, "how was your day") == 0)
                {
                    cout << "I am good sir, tell me how can I help you" << endl;
                    string phrase = " I am good sir, tell me how can I help you";
                    string command = "espeak \" " + phrase + "\"";
                    const char *charCommand = command.c_str();
                    system(charCommand);
                }
                else if (strcmp(ch, "tell a joke") == 0 || strcmp(ch, "joke") == 0 || strcmp(ch, "tell me a joke") == 0)
                {
                    cout << "Why are cricket stadium so cool?" << endl
                         << "because every seat has a fan in it" << endl;
                    string phrase = " Why are cricket stadium so cool  because every seat has a fan in it";
                    string command = "espeak \" " + phrase + "\"";
                    const char *charCommand = command.c_str();
                    system(charCommand);
                }
                else if (strcmp(ch, "one more") == 0 || strcmp(ch, "more") == 0)
                {
                    cout << "what do you call the rose that goes to the moon?" << endl
                         << "gulab ja moon" << endl;
                    string phrase = "what do you call the rose that goes to the moon gulab ja moon";
                    string command = "espeak \" " + phrase + "\"";
                    const char *charCommand = command.c_str();
                    system(charCommand);
                }

                else if ((ch, "time") == 0 || strcmp(ch, "date") == 0)
                {
                    datetime();
                    string phrase = "";
                    string command = "espeak \" " + phrase + "\"";
                    const char *charCommand = command.c_str();
                    system(charCommand);
                }
                else if (strcmp(ch, "open notepad") == 0)
                {
                    cout << "opening notepad" << endl;
                    system("start notepad.exe");
                    string phrase = "opening notepad";
                    string command = "espeak \" " + phrase + "\"";
                    const char *charCommand = command.c_str();
                    system(charCommand);
                }
                else if (strcmp(ch, "open google") == 0)
                {
                    cout << "opening google" << endl;
                    system("start https://www.google.com");
                    string phrase = "opening google";
                    string command = "espeak \" " + phrase + "\"";
                    const char *charCommand = command.c_str();
                    system(charCommand);
                }
                else if (strcmp(ch, "open youtube") == 0)
                {
                    cout << "opening youtube" << endl;
                    system("start https://www.youtube.com");
                    string phrase = "opening youtube";
                    string command = "espeak \" " + phrase + "\"";
                    const char *charCommand = command.c_str();
                    system(charCommand);
                }

                else
                {
                    cout << "Sorry  I am not able to understand you, please try again" << endl;
                    string phrase = "Sorry  I am not able to understand you  ";
                    string phrase1 = "please try again";
                    string command = "espeak \" " + phrase + "" + phrase1 + "\"";
                    const char *charCommand = command.c_str();
                    system(charCommand);
                }

            } while (1);
        }
        else
        {
            cout << "IN-COREECT PASSWORD" << endl;
        }

    } while (1);
    return 0;
}

#include <iostream>
#include <cstring>


using namespace std;

void chatbot() {
        char input[128];
    cout << "===== Hello! I am a simple chatbot. Type 'Bye' to quit. =====" << endl;
    while (true) {
        cout << "You: ";
        gets(input);

        if (strcmp(input, "Hello") == 0) {
            cout << "Chatbot: Hi there!" << endl;
        }
        else if (strcmp(input, "how are you?") == 0) {
            cout << "Chatbot: I Am Fine, Thanks For Asking. What about you?" << endl;
        }
        else if (strcmp(input, "what can you do?") == 0) {
            cout << "Chatbot: I Can Perform Basic Calculations, Like Addition, Subtraction, Division And Multiplication\n Tell jokes too, interesting right?\n Wannna hear one? it will be fun i promise 🤞 just enter tell me a joke." << endl;
        }
        else if (strcmp(input, "Do you have feelings?") == 0) {
            cout << "Chatbot: I am a Chatbot And Chatbot Don't Have Feelings 😁😑 "<< endl;
        }
        else if (strcmp(input, "tell me a joke") == 0) {
            cout << "Chatbot: What's The Difference Between Batman And a Black Man?"<< endl;
            cout << "Answer: Batman Can Go Out In Public At Night Without Robin. Funny Right 😂🤣 \n \t Enter more to continue with the jokes"<< endl;
        }
        else if (strcmp(input, "what are you doing?") == 0) {
            cout << "Chatbot: Nothing Serious, Just Chatting With You.\n Why Do You Ask?, Have Something in mind?" << endl;
        }
        else if (strcmp(input, "i need help with addition") == 0) {
            cout << "Chatbot: Sounds Great, Let's Begin." << endl;
            int num1, num2;
            cout << "Chatbot: Please Enter The First Number: ";
            cin >> num1;
            cout << "Chatbot: Please Enter The Second Number: ";    
            cin >> num2;
            cout << "Chatbot: The Answer Is: "<<num1 + num2<<endl;
        }
        else if (strcmp(input, "i need help with multiplication") == 0) {
            cout << "Chatbot: Sounds Great, Let's Begin." << endl;
            int num1, num2;
            cout << "Chatbot: Please Enter The First Number: ";
            cin >> num1;
            cout << "Chatbot: Please Enter The Second Number: ";    
            cin >> num2;
            cout << "Chatbot: The Answer Is: "<< num1 * num2<<endl;
        }
        else if (strcmp(input, "i need help with division") == 0) {
            cout << "Chatbot: Sounds Great, Let's Begin." << endl;
            int num1, num2;
            cout << "Chatbot: Please Enter The First Number: ";
            cin >> num1;
            cout << "Chatbot: Please Enter The Second Number: ";    
            cin >> num2;
            cout << "Chatbot: The Answer Is: "<<num1 / num2<<endl;
        }
        else if (strcmp(input, "i need help with subtraction") == 0) {
            cout << "Chatbot: Sounds Great, Let's Begin." << endl;
            int num1, num2;
            cout << "Chatbot: Please Enter The First Number: ";
            cin >> num1;
            cout << "Chatbot: Please Enter The Second Number: ";    
            cin >> num2;
            cout << "Chatbot: The Answer Is: "<<num1 - num2<<endl;
        }
        else if (strcmp(input, "what is your name?") == 0) {
            cout << "Chatbot: I Am C.H.E.C.Y, Which Stands For Chatbot Helping Everyone with Calculations, Yo!" << endl;
            string name;
            cout << "Chatbot: What About You?" << endl;
            cout << "You: ";cin >> name;
            cout << "Chatbot: Nice To Meet You " << name << "!" << endl;
        }
        else if (strcmp(input, "thank you") == 0) {
            cout << "Chatbot: You Are Welcome, I am Happy To Help 😁" << endl;
        }
        else if (strcmp(input, "bye") == 0) {
            cout << "Chatbot: Goodbye! Have a great day!" << endl;
            break;
        }
        else {
            cout << "Chatbot: I'm sorry, I don't understand that." << endl;
        }
    }


}
int main() {
    chatbot();
    return 0;
}
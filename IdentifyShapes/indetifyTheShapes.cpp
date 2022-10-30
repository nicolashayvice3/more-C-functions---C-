#include <iostream>

using namespace std;

int width = 2;
int height = 6;

void displaySquare(){
    cout<<" ■ \n";
}

void displayTriangle(){
    cout<<" ▲ \n";
}

void displayRectangle(int width, int height){

    int rectangleDiameter = width*height;

    cout<<" ▬ \n";
    cout<<" this rectangle has a diameter of " << rectangleDiameter << "Planck units \n";
}

int main(){
    int choice;
    bool gameOn = true;
    while (gameOn != false){
        cout << "*******************************\n";
        cout << " 1 - Play the game.\n";
        cout << " 2 - Final Score.\n";
        cout << " 3 - Exit.\n";
        cout << " Enter your choice and press return: ";

        cin >> choice;

        switch (choice){
            case 1:
            cout << "game start!\n";
            displayTriangle();
            break;
            case 2:
            cout << "Your final Score\n";
            break;
            case 3:
            cout << "End of Program.\n";
            gameOn = false;
            break;
            default:
            cout << "Not a Valid Choice. \n";
            cout << "Choose again.\n";
            cout << " Enter your choice and press return: ";
            cin >> choice;
            break;
    }

    }
    return 0;
}

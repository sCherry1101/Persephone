#include <iostream>
#include <string>

int main(){

    std::cout << "╔════════════════════════════╗\n";
    std::cout << "║       Persephone           ║\n";
    std::cout << "╚════════════════════════════╝\n";
    std::cout << "Loading...\n";
    std::cout << "Welcome! Enter your name:";

    std::string name;
    std::cin >> name;
    std::cout << "Hello " << name << "\n";

    int choice=0;

    while (choice !=6) {
    std::cout << "╔════════════════════════════╗\n";
    std::cout << "║  Press enter to continue...║\n";
    std::cout << "╚════════════════════════════╝\n";
    std::cout << "╔════════════════════════════╗\n";
    std::cout << "║           Menu             ║\n";
    std::cout << "╠════════════════════════════╣\n";
    std::cout << "║ 1. Login to spotify        ║\n";
    std::cout << "║ 2. Profile                 ║\n";
    std::cout << "║ 3. Themes                  ║\n";
    std::cout << "║ 4. Commands                ║\n";
    std::cout << "║ 5. Exit                    ║\n";
    std::cout << "║ 6. Log out                 ║\n";
    std::cout << "╚════════════════════════════╝\n";
    
    std::cout << "Choice:";
    std::cin  >> choice;

    if (choice==1){
        std::cout<< "Login selected\n";
    }
    else if (choice==2){
        std::cout<< "Profile selected\n";
    }
    else if (choice==3){
        std::cout<< "Themes selected\n";
    }
    else if (choice==4){
        std::cout<< "Commands selected\n";
    }
    else if (choice==5){
        std::cout<< "Exit selected\n";
    }
    else if (choice==6){
        std::cout<< "Log out selected\n";
    }
    else{
        std::cout<< "Invalid choice, please try again.\n";
    }

}
    return 0;

}

//i have ZERO c++ experience so the first few commits ?? yes its gonna be like this and i learn by making projects 
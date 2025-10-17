#include <iostream>

int main() {

       int menu[8];
       double number[9];

     while (true) { // Main Menu
        std::cout << "[1] Process with 2\n"; // 2 2 
        std::cout << "[2] Process with 3\n"; // 3 3 3
        std::cout << "[3] Process with 4\n"; // 4 4 4 4
        std::cout << "[4] Process with 5\n"; // 5 5 5 5 5
        std::cout << "[5] Process with 6\n"; // 6 6 6 6 6 6
        std::cout << "[6] Process with 7\n"; // 7 7 7 7 7 7 7
        std::cout << "[7] Process with 8\n"; // 8 8 8 8 8 8 8 8
        std::cout << "[0] Exit\n"; // Exit
        std::cin >> menu[0];
        std::cout << "\n";


         if (menu[0] == 0) break;

         switch (menu[0]) {
            case 1:  // Process with 2
                std::cout << "[1] Do addition with 2\n";
                std::cout << "[2] Do multiplication with 2\n";
                std::cin >> menu[1];
                std::cout << "\n";

                if (menu[1] == 1 || menu[1] == 2) {
                    std::cout << "Enter 2 numbers: ";
                    std::cin >> number[0] >> number[1];
                    std::cout << "\n";

                    if (menu[1] == 1)
                        std::cout << "Sum: " << number[0] + number[1] << "\n";
                    else
                        std::cout << "Multiplication: " << number[0] * number[1] << "\n";
                } else {
                    std::cout << "Invalid selection.\n";
                }
                break;

            case 2:  // Process with 3
                std::cout << "[1] Do addition with 3\n";
                std::cout << "[2] Do multiplication with 3\n";
                std::cin >> menu[2];
                std::cout << "\n";

                if (menu[2] == 1 || menu[2] == 2) {
                    std::cout << "Enter 3 numbers: ";
                    std::cin >> number[0] >> number[1] >> number[2];
                    std::cout << "\n";

                    if (menu[2] == 1)
                        std::cout << "Sum: " << number[0] + number[1] + number[2] << "\n";
                    else
                     std::cout << "Multiplication: " << number[0] * number[1] * number[2] << "\n";
                } else {
                     std::cout << "Invalid selection.\n";
                }
                  break;

            case 3:  // Process with 4
                std::cout << "[1] Do addition with 4\n";
                std::cout << "[2] Do multiplication with 4\n";
                std::cin >> menu[3];
                std::cout << "\n";

                if (menu[3] == 1 || menu[3] == 2) {
                    std::cout << "Enter 4 numbers: ";
                    std::cin >> number[0] >> number[1] >> number[2] >> number[3];
                    std::cout << "\n";

                    if (menu[3] == 1)
                        std::cout << "Sum: " << number[0] + number[1] + number[2] + number[3] << "\n";
                    else
                        std::cout << "Multiplication: " << number[0] * number[1] * number[2] * number[3] << "\n";
                } else {
                    std::cout << "Invalid selection.\n";
                }
                break;

            case 4:  // Process with 5
                std::cout << "[1] Do addition with 5\n";
                std::cout << "[2] Do multiplication with 5\n";
                std::cin >> menu[4];
                std::cout << "\n";

                if (menu[4] == 1 || menu[4] == 2) {
                    std::cout << "Enter 5 numbers: ";
                    std::cin >> number[0] >> number[1] >> number[2] >> number[3] >> number[4];
                    std::cout << "\n";

                    if (menu[4] == 1)
                        std::cout << "Sum: " << number[0] + number[1] + number[2] + number[3] + number[4] << "\n";
                    else
                        std::cout << "Multiplication: " << number[0] * number[1] * number[2] * number[3] * number[4] << "\n";
                } else {
                    std::cout << "Invalid selection.\n";
                }
                break;

            case 5:  // Process with 6
                std::cout << "[1] Do addition with 6\n";
                std::cout << "[2] Do multiplication with 6\n";
                std::cin >> menu[5];
                std::cout << "\n";

                if (menu[5] == 1 || menu[5] == 2) {
                    std::cout << "Enter 6 numbers: ";
                    std::cin >> number[0] >> number[1] >> number[2] >> number[3] >> number[4] >> number[5];
                    std::cout << "\n";

                    if (menu[5] == 1)
                        std::cout << "Sum: " << number[0] + number[1] + number[2] + number[3] + number[4] + number[5] << "\n";
                    else
                        std::cout << "Multiplication: " << number[0] * number[1] * number[2] * number[3] * number[4] * number[5] << "\n";
                } else {
                    std::cout << "Invalid selection.\n";
                }
                break;

            case 6: // Process with 7
                std::cout << "[1] Do addition with 7\n";
                std::cout << "[2] Do multiplication with 7\n";
                std::cin >> menu[6];
                std::cout << "\n";

                if (menu[6] == 1 || menu[6] == 2) {
                    std::cout << "Enter 7 numbers: ";
                    std::cin >> number[0] >> number[1] >> number[2] >> number[3] >> number[4] >> number[5] >> number[6];
                    std::cout << "\n";

                    if (menu[6] == 1)
                        std::cout << "Sum: " << number[0] + number[1] + number[2] + number[3] + number[4] + number[5] + number[6] << "\n";
                    else
                        std::cout << "Multiplication: " << number[0] * number[1] * number[2] * number[3] * number[4] * number[5] * number[6] << "\n";
                } else {
                    std::cout << "Invalid selection.\n";
                }
                break;

            case 7: // Process with 8
                std::cout << "[1] Do addition with 8\n";
                std::cout << "[2] Do multiplication with 8\n";
                std::cin >> menu[7];
                std::cout << "\n";

                if (menu[7] == 1 || menu[7] == 2) {
                    std::cout << "Enter 8 numbers: ";
                    std::cin >> number[0] >> number[1] >> number[2] >> number[3] >> number[4] >> number[5] >> number[6] >> number[7];
                    std::cout << "\n";

                    if (menu[7] == 1)
                        std::cout << "Sum: " << number[0] + number[1] + number[2] + number[3] + number[4] + number[5] + number[6] + number[7] << "\n";
                    else
                        std::cout << "Multiplication: " << number[0] * number[1] * number[2] * number[3] * number[4] * number[5] * number[6] * number[7] << "\n";
                } else {
                    std::cout << "Invalid selection.\n";
                }
                break;

            default:
                std::cout << "Invalid selection!\n";
                break;
        }

               std::cout << "\n";
    }

        std::cout << "Program terminated.\n";
         return 0;
}

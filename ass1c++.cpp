#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

void quiz() {
    vector<string> questions = {
        "1. What is the capital of France?",
        "2. Who wrote 'Romeo and Juliet'?",
        "3. What is the chemical symbol for water?",
        "4. Who painted the Mona Lisa?",
        "5. What is the largest mammal?",
        "6. What is the tallest mountain in the world?",
        "7. What is the powerhouse of the cell?",
        "8. What is the currency of Japan?",
        "9. Who developed the theory of relativity?",
        "10. What is the chemical formula for table salt?"
    };

    vector<vector<string>> options = {
        {"A. London", "B. Paris", "C. Rome", "D. Madrid"},
        {"A. William Shakespeare", "B. Charles Dickens", "C. Jane Austen", "D. Mark Twain"},
        {"A. H2O", "B. CO2", "C. NaCl", "D. O2"},
        {"A. Vincent van Gogh", "B. Leonardo da Vinci", "C. Pablo Picasso", "D. Michelangelo"},
        {"A. Elephant", "B. Blue Whale", "C. Giraffe", "D. Polar Bear"},
        {"A. Mount Everest", "B. K2", "C. Kilimanjaro", "D. Matterhorn"},
        {"A. Nucleus", "B. Mitochondria", "C. Chloroplast", "D. Ribosome"},
        {"A. Dollar", "B. Euro", "C. Yen", "D. Pound"},
        {"A. Isaac Newton", "B. Albert Einstein", "C. Galileo Galilei", "D. Stephen Hawking"},
        {"A. NaCl", "B. H2O", "C. CO2", "D. NH3"}
    };

    vector<string> answers = {"B", "A", "A", "B", "B", "A", "B", "C", "B", "A"};

    int score = 0;

    for (size_t i = 0; i < questions.size(); ++i) {
        cout << questions[i] << endl;
        for (const auto& option : options[i]) {
            cout << option << endl;
        }
        string user_answer;
        cout << "Enter your answer (A, B, C, or D): ";
        cin >> user_answer;
        transform(user_answer.begin(), user_answer.end(), user_answer.begin(), ::toupper);
        if (user_answer == answers[i]) {
            cout << "Correct!" << endl;
            score++;
        } else {
            cout << "Incorrect!" << endl;
        }
        cout << endl;
    }

    cout << "Your total score is: " << score << endl;

    if (score >= 8) {
        cout << "Excellent performance!" << endl;
    } else if (score >= 5) {
        cout << "Average performance." << endl;
    } else {
        cout << "Poor performance." << endl;
    }
}

int main() {
    quiz();
    return 0;
}
#include <iostream>
#include <string>
using namespace std;

int main() {
    
    string members1[] {
        "John",
        "Samuel",
        "Rashid",
        "Rodriguez"
    };

    // Printing out members1
    cout << "Printing out members1:" << endl;
    for (const auto& member : members1) {
        cout << member << endl;
    }

    // Updating predictions
    string predictions[] {
        "a lot of kinds running in the backyard!",
        "a lot of empty beer bottles on your work table.",
        "you Partying too much with kids wearing weird clothes.",
        "you running away from something really scary",
        "clouds gathering in the sky and an army standing ready for war",
        "dogs running around in a deserted empty city",
        "a lot of cars stuck in a terrible traffic jam",
        "you sitting in the dark typing lots of lines of code on your dirty computer",
        "you yelling at your boss. And oh no! You get fired!",
        "you laughing your lungs out. I've never seen this before.",
        "Uhm, I don't see anything!"
    };

    cout << endl;
    cout << "Prediction: " << predictions[5] <<endl;

    return 0; 
}

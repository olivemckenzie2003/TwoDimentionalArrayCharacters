#include <iostream>

int main(){

	
    char members1 [][name_length] {
        "John",
        "Samuel",
        "Rashid",
        "Rodriguez"
    };
    
    //Printing out members1
    std::cout << "Printing out members1 (C-string literals) : " << std::endl;
    for (size_t i {0}; i < std::size(members1) ; ++i){
        std::cout << members1[i] << std::endl;
    }
    */
   


    //Updating our prediction declaration in the fortune teller game
    char predictions [] [90] {
        "a lot of kinds running in the backyard!",
        "a lot of empty beer bootles on your work table.",
        "you Partying too much with kids wearing weird clothes.",
        "you running away from something really scary",
        "clouds gathering in the sky and an army standing ready for war",
        "dogs running around in a deserted empty city",
        "a lot of cars stuck in a terrible traffic jam",
        "you sitting in the dark typing lots of lines of code on your dirty computer",
        "you yelling at your boss. And oh no! You get fired!",
        "you laughing your lungs out. I've never seen this before." ,
        "Uhm , I don't see anything!"
        
    };
    
	std::cout << std::endl;
    std::cout << "Prediction : " << predictions[5] << std::endl;
 

   
    return 0;
}
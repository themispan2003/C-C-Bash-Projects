#include <iostream>

int main(){
    
    char unit;
    double temperature;

    std::cout<<"\nTemperature Convertion\n";
    std::cout<<"\nF/f for fahreneiht and C/c for celsius degrees.\n";
    std::cout<<"\nGive me the unit you want to convert to: ";
    std::cin>>unit;

    if(unit == 'f' || unit == 'F'){
        std::cout<<"\nGive me the temperature in celsius degrees: ";
        std::cin>>temperature;
        temperature = (1.8 * temperature) + 32;
        std::cout<<"\nTemperature is " << temperature << " fahreneiht.\n";
    }
    else if(unit == 'c' || unit == 'C'){
        std::cout<<"\nGive me the temperature in fahreneiht: ";
        std::cin>>temperature;
        temperature = (temperature-32) / 1.8;
        std::cout<<"\nTemperature is " << temperature << " celsius degrees.\n";
    }
    else {
        std::cout<<"Illegal Choice! Give me f or F for fahreneiht and c or C for celsius degrees!";
    }
    return 0;
}
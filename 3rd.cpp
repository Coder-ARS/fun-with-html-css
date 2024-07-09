#include <iostream>
#include <cmath>
using namespace std;

int resx(int x) {
    return log(x)*100;
}
    int resy(int y) {
    return log(y)*100;
}
    int resz(int z) {
    return log(z)*100;
}
string generateBrown(int value, int& red, int& green, int& blue) {
    if (value < 1) {
        value = 1;
    } else if (value > 20) {
        value %= 20;
    }

    switch (value) {
        case 1:
            return "Red";
        case 2:
            return "Blue";
        case 3:
            return "Green";
        case 4:
            return "Yellow";
        case 5:
            return "Orange";
        case 6:
            return "Purple";
        case 7:
            return "Pink";
        case 8:
            return "Cyan";
        case 9:
            return "Magenta";
        case 10:
            return "Lime";
        case 11:
            return "Teal";
        case 12:
            return "Brown";
        case 13:
            return "Gray";
        case 14:
            return "White";
        case 15:
            return "Black";
        case 16:
            return "Gold";
        case 17:
            return "Silver";
        case 18:
            return "Turquoise";
        case 19:
            return "Violet";
        case 20:
            return "Maroon";
        default:
            return "black";
    }
}
int main() 
{
    int red=0;
    int blue =0;
    int green= 0;
    int left=0;
    int top=0;
    int height=100;
    int width=100;
    int rad=100;
    
    
    for (int i = 0 ; i <= 100 ; i++){
  generateBrown(i, red, green, blue);
      
      cout << ".box" << i <<"{"<<"\n";
     cout << "    height :" << height << "vh ;" << "\n";
    cout << "    width :" << width << "vh ;" << "\n";
    cout << "    background-color: "<< generateBrown(i, red, green, blue)<< "; \n";
    cout << "    position: fixed;" << "\n" << "    border-radius: " <<rad << "% ; \n";
    cout << "    left: " << left << "px ;" << "\n";
    cout << "    top: " << top << "px ;" << "\n";
    cout <<"}" <<"\n";
      height--;
     width--;
     left++;
     top++;
     
    }
    for (int i = 0 ; i<=100;i++){
      cout<<"<div "<<"class= "<<"\"box"<<i<<"\""<<" >"<<"</div>"<<"\n";
    }
    return 0;
}

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
            return "black";
        case 2:
            return "red";
        case 3:
            return "green";
        case 4:
            return "yellow";
        case 5:
            return "blue";
        case 6:
            return "magenta";
        case 7:
            return "cyan";
        case 8:
            return "white";
        case 9:
            return "gray";
        case 10:
            return "pink";
        case 11:
            return "brown";
        case 12:
            return "orange";
        case 13:
            return "purple";
        case 14:
            return "turquoise";
        case 15:
            return "silver";
        case 16:
            return "lime";
        case 17:
            return "teal";
        case 18:
            return "navy";
        case 19:
            return "maroon";
        case 20:
            return "olive";
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
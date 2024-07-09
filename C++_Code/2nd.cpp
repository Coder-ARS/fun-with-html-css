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
void generateBrown(int value, int& red, int& green, int& blue) {
    if (value < 1) {
        value = 1;
    } else if (value > 20) {
        value %= 20;
    }

    red = static_cast<int>(120 + value * 3);
    green = static_cast<int>(80 + value * 2);
    blue = static_cast<int>(45 + value * 5);
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
    generateBrown(i, red, green, blue); red%=255;
    green%=255;
    blue%=255;
      
      cout << ".box" << i <<"{"<<"\n";
     cout << "    height :" << height << "vh ;" << "\n";
    cout << "    width :" << width << "vh ;" << "\n";
    cout << "    background-color: rgb(" << red << "," << green << "," << blue << ")" << "; \n";
    cout << "    position: fixed;" << "\n" << "    border-radius: " <<i << "% ; \n";
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
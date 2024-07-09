#include <iostream>
using namespace std;

int main() 
{
    /* CSS Down */
    int x=0;
    int y =0;
    int z= 0;
    int left=0;
    int top=0;
    int height=100;
    int width=100;
    int rad=0;
    for (int i = 0 ; i <= 100 ; i++){
      x%=255;
      y%=255;
      z%=255;
      rad%=100;
      cout << ".box" << i <<"{"<<"\n";
      cout << "    height :" << height << "vh ;" << "\n";
      cout << "    width :" << width << "vh ;" << "\n";
      cout << "    background-color: rgb(" << x << "," << y << "," << z << ")" << "; \n";
      cout << "    position: fixed;" << "\n" << "    border-radius: " <<rad << "% ; \n";
      cout << "    left: " << left << "px ;" << "\n";
      cout << "    top: " << top << "px ;" << "\n";
      cout <<"}" <<"\n";
      height--;
      width--;
      left++;
      top++;
      x+=87;
      y+=64;
      z+=25;
      rad+=7;
    }
    /* HTML Down */
    for (int i = 0 ; i<=100;i++){
      cout<<"<div "<<"class= "<<"\"box"<<i<<"\""<<" >"<<"</div>"<<"\n";
    }
    return 0;
}

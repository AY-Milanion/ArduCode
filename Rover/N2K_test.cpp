#include "N2K_Parse.h"

int main()
{
N2K_Data N2K;
N2K.parse_json();
std::cout << "LifeAmount = " << N2K.get_lng() <<"\r\n";
return 0;
}
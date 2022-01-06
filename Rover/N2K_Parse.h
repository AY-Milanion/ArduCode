
#include <cstdint>
#include <iostream>
#include <memory>
#include <string>

#include <curl/curl.h>
#include <jsoncpp/json/json.h>

class N2K_Data{
public:
float lat;
float lng;
float cog;

bool parse_json();
float get_lng();
float get_lat();
float get_cog();
float get_heading();
float get_speed();
float get_rpm();
float get_voltage();
float get_engine_temp();


};

bool N2K_Data::parse_json(){
N2K_Data::lng = 55.347563;
N2K_Data::lat= 25.874903;
N2K_Data::cog = 268.77;
return true;
}

float N2K_Data::get_lng(){
//std::cout << "Longitude: = " << N2K_Data::lng << "\r\n";
return N2K_Data::lng;
}

float N2K_Data::get_lat(){
  //std::cout << "Latitude: = " << N2K_Data::lat <<"\r\n";
return N2K_Data::lat;
}

float N2K_Data::get_cog(){
return N2K_Data::cog;
}




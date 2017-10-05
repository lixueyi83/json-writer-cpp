/*************************************************************************
	> File Name: main.cpp
	> Author: 
	> Mail: 
	> Created Time: Tue 03 Oct 2017 04:43:05 PM PDT
 ************************************************************************/

#include <iostream>
#include <fstream>
#include <jsoncpp/json/json.h>
#include <jsoncpp/json/writer.h>

using namespace std;

int example_1()
{
    ofstream json_file("test1.json");

    Json::Value vec(Json::arrayValue);
    vec.append(Json::Value(1));
    vec.append(Json::Value(2));
    vec.append(Json::Value(3));

    Json::Value data;  
    data["competitors"]["home"]["name"] = "Liverpool";
    data["competitors"]["away"]["code"] = 89223;
    data["competitors"]["away"]["name"] = "Aston Villa";
    data["competitors"]["away"]["code"]=vec;

    json_file << data << endl;
    cout << data << endl;
    
    json_file.close();
    
    return 0;
}

int example_2()
{
    ofstream json_file("test2.json");

    Json::Value data;
    data["algorithm"] = "binary search";
    data["data structure 1"] = "linked list";
    data["container"] = "vector";
    data["data structure 2"] = "myStruct";
    data["data structure x"]["x"] = 1;
    data["data structure x"]["y"] = 2;
    data["data structure x"]["z"] = 3;
    data["data structure x"]["zyx"]["magic"] = "888";

    json_file << data << endl;
    cout << data << endl;
    
    json_file.close();

    return 0;
}

int main()
{
    example_1();
    cout << "----------------------------------------------" << endl;
    example_2();
}

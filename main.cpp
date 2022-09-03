


#include <iostream>
#include <fstream>


int main () {

    using json = nlohmann::json;
    const std::string db_filename = "team.json";

    std::ifstream team_db (db_filename);
    json data = json::parse (team_db);

    auto team = data["team"];

    for (auto &member: team) {
        std::cout << "ID :" << member["id"] << std::endl;
        std::cout << "Name : " << member["name"] << std::endl;
        std::cout << "Lastname :" << member["lastName"] << std::endl;
        std::cout << "Email :" << member["email"] << std::endl;
        std::cout << "Github link : :" << member["github"] << std::endl;
        std::cout << std::endl;

    }


    return 0;
}

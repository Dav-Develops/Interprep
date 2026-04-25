/*A map stores elements in "key/value" pairs.

Elements in a map are:

Accessible by keys (not index), and each key is unique.
Automatically sorted in ascending order by their keys.

Syntex:
map <keyDataType, ValueDataType> mapName = {{key1, value1}, {key2, value2}}
*/
#include <iostream>
#include <map>
using namespace std;

int main()
{
    // Create a map that will store the name and age of different people
    map<string, int> people = {{"John", 32}, {"Adele", 45}, {"Bo", 29}};

    // Get the value associated with the key "John"
    cout << "John is: " << people["John"] << "\n";

    // We can also access elements with the .at() function:
    cout << "Adele is: " << people.at("Adele") << "\n";
    people["John"] = 50;

    //Change any element or value 
    cout << "John is: " << people["John"]<<"\n"; // Now outputs John is: 50
    // OR change a value by using .at("john")=50;

    //Add new elements as:
    people["Jenny"]=22;
    people["Liam"]=24;

    //OR Add elements with .insert();
    people.insert({"Kasper",20});
    people.insert({"Anja",30});

    //Remove an element from map:
    people.erase("Anja");

    //.size() it returns the number of elements (or number of keys) in a set:
    cout<<"Set 'people' contains "<<people.size()<<" elements."<<"\n\n";

    //👉Lambda Function with map:
    [&](){ 
    //Capture 'people' map, and 'key, value' would be passed as parameter:
        for(const auto &[key, value]: people){
            cout<<key<<" : "<<value<<" "<<"\n";
        } //OR 
        // for(const auto p:people){
        //     cout<<p.first<<" : "<<p.second<<"\n";
        // }
        //.first refers to the map-keys and .second refers to the map-values.
    }(); //Here Lambda function is invoced with'()'. Since we used '&' in [capture_clause],
         //the function has access to it's higher scope data including map's keys and values.
    
         //Remove all elements from map:
    people.clear();

    //.empty() is used to check if a map is empty or not, returns 1 or 0 accordingly.
    cout<<people.empty()<<"\n";

    return 0;
}
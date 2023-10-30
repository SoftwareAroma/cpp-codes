#include <iostream>
#include <list>

using namespace std;

class YoutubeChannel{
public:
    string Name;
    string OwnerName;
    int SubscribersCount;
    list<string> PublishedVideoTitles;

    YoutubeChannel(string name, string ownerName){
        Name = name;
        OwnerName = ownerName;
        SubscribersCount = 0;
    }

    ~YoutubeChannel(){
        cout << "Destructor called for " << Name << endl;
    }
};

int Constructors() {
    YoutubeChannel ytChannel("Software Aroma", "Mia");
    ytChannel.PublishedVideoTitles = {"C++ Tutorial for Beginners", "Java Tutorial for Beginners"};

    cout << "Name: " << ytChannel.Name << endl;
    cout << "OwnerName: " << ytChannel.OwnerName << endl;
    cout << "SubscribersCount: " << ytChannel.SubscribersCount << endl;
    cout << "Videos: " << endl;
    for (string videoTitle: ytChannel.PublishedVideoTitles){
        cout << videoTitle << endl;
    }

    return 0;
}



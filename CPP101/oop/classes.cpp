#include <iostream>
#include <list>

using namespace std;

class YoutubeChannel
{
public:
    string Name;
    string OwnerName;
    int SubscribersCount;
    list<string> PublishedVideoTitles;
};

int Classes() {
    YoutubeChannel ytChannel;
    ytChannel.Name = "Miastudiosinc";
    ytChannel.OwnerName = "Musah";
    ytChannel.SubscribersCount = 1000;
    ytChannel.PublishedVideoTitles = {"C++ Tutorial for Beginners", "Java Tutorial for Beginners"};

    cout << "Name: " << ytChannel.Name << endl;
    cout << "OwnerName: " << ytChannel.OwnerName << endl;
    cout << "SubscribersCount: " << ytChannel.SubscribersCount << endl;
    cout << "Videos: " << endl;
    for (string videoTitle: ytChannel.PublishedVideoTitles)
    {
        cout << videoTitle << endl;
    }

    return 0;
}



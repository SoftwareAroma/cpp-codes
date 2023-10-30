#include <iostream>
#include <list>

using namespace std;

class YoutubeChannel{
private:
    string Name;
    string OwnerName;
    int SubscribersCount;
    list<string> PublishedVideoTitles;
public:
    YoutubeChannel(string name, string ownerName){
        Name = name;
        OwnerName = ownerName;
        SubscribersCount = 0;
    }

    string getName(){
        return Name;
    }

    void setName(string name){
        Name = name;
    }

    string getOwnerName(){
        return OwnerName;
    }

    void setOwnerName(string ownerName){
        OwnerName = ownerName;
    }

    void subscribe(){
        SubscribersCount++;
    }

    void unsubscribe(){
        if(SubscribersCount > 0)
            SubscribersCount--;
    }

    void publishVideo(string title){
        PublishedVideoTitles.push_back(title);
    }

    void getVideo(){
        for(string videoTitle: PublishedVideoTitles){
            cout << videoTitle << endl;
        }
    }

    void getInfo(){
        cout << "Name: " << Name << endl;
        cout << "OwnerName: " << OwnerName << endl;
        cout << "SubscribersCount: " << SubscribersCount << endl;
        cout << "Videos: " << endl;
        for (string videoTitle: PublishedVideoTitles){
            cout << videoTitle << endl;
        }
    }

    ~YoutubeChannel(){
        cout << "Destructor called for " << Name << endl;
    }
};

class CookingYoutubeChannel: public YoutubeChannel{
public:
    CookingYoutubeChannel(string name, string ownerName): YoutubeChannel(name, ownerName){

    }

    void practice(){
        cout << getOwnerName() << " is practicing cooking, learning new recipes, experimenting with spices..." << endl;
    }

};

int Inheritance() {
    CookingYoutubeChannel ytChannel = CookingYoutubeChannel("Home Aroma", "Mia");

    // add videos
    ytChannel.publishVideo("Gob3");
    ytChannel.publishVideo("Banku");
    ytChannel.publishVideo("Rice");

    ytChannel.subscribe();
    ytChannel.subscribe();

//    ytChannel.practice();

    ytChannel.getInfo();

    return 0;
}

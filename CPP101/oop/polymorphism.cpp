#include <iostream>
#include <list>

using namespace std;

class YoutubeChannel{
private:
    string Name;
    int SubscribersCount;
    list<string> PublishedVideoTitles;
protected:
    string OwnerName;
    int ContentQuality;
public:
    YoutubeChannel(string name, string ownerName){
        Name = name;
        OwnerName = ownerName;
        SubscribersCount = 0;
        ContentQuality = 0;
    }

    void increaseContentQuality(){
        ContentQuality++;
    }

    void reduceContentQuality(){
        ContentQuality--;
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

    void checkAnalytics(){
        if(ContentQuality < 5){
            cout << Name << " has bad quality content." << endl;
        }else{
            cout << Name << " has great quality content." << endl;
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

class SingersYoutubeChannel: public YoutubeChannel{
public:
    SingersYoutubeChannel(string name, string ownerName): YoutubeChannel(name, ownerName){

    }

    void practice(){
        cout << getOwnerName() << " is practicing vocals and taking new songs with their dance moves" << endl;
    }

};

int Polymorphism() {
    CookingYoutubeChannel cookingYoutubeChannel = CookingYoutubeChannel("Home Aroma", "Mia");
    SingersYoutubeChannel singersYoutubeChannel = SingersYoutubeChannel("Bhim Nation", "StoneBwoy");

    // add videos
    cookingYoutubeChannel.publishVideo("Gob3");
    cookingYoutubeChannel.publishVideo("Banku");
    cookingYoutubeChannel.publishVideo("Rice");

    cookingYoutubeChannel.practice();
    cookingYoutubeChannel.increaseContentQuality();
    singersYoutubeChannel.practice();
    singersYoutubeChannel.increaseContentQuality();
    singersYoutubeChannel.increaseContentQuality();
    singersYoutubeChannel.increaseContentQuality();
    singersYoutubeChannel.increaseContentQuality();
    singersYoutubeChannel.increaseContentQuality();
    singersYoutubeChannel.increaseContentQuality();
    singersYoutubeChannel.increaseContentQuality();
    singersYoutubeChannel.increaseContentQuality();

//    cookingYoutubeChannel.checkAnalytics();
//    singersYoutubeChannel.checkAnalytics();

    // pointers
    // A pointer of a base class can point to a derived class
    YoutubeChannel   * yt1 = &cookingYoutubeChannel;
    YoutubeChannel   * yt2 = &singersYoutubeChannel;

    // using pointers to access class methods
    yt1->checkAnalytics();
    yt2->checkAnalytics();

    return 0;
}



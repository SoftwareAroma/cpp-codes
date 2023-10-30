#include <iostream>
#include <list>

using namespace std;

struct YoutubeChannel {
    string Name;
    int SubscriberCount;

    YoutubeChannel(string name, int subscriberCount) {
        Name = name;
        SubscriberCount = subscriberCount;
    }

    bool operator==(const YoutubeChannel& rhs) const {
        return this->Name == rhs.Name;
    }
};

ostream& operator<<(ostream& COUT, YoutubeChannel& channel) {
    COUT << "Name: " << channel.Name << endl;
    COUT << "Subscribers: " << channel.SubscriberCount << endl;
    return COUT;
}

struct MyCollection{
    list<YoutubeChannel> Channels;
    void operator+=(YoutubeChannel& channel) {
        this->Channels.push_back(channel);
    }
    void operator-=(YoutubeChannel& channel) {
        if(this->Channels.size() == 0) {
            cout << "No channels to remove" << endl;
            return;
        }
        this->Channels.remove(channel);
    }
};

ostream &operator<<(ostream &COUT, MyCollection& collection) {
    for (auto channel : collection.Channels) {
        COUT << channel << endl;
    }
    return COUT;
}

int OperatorOverload() {

    YoutubeChannel codeBeauty = YoutubeChannel("CodeBeauty", 1000);
    YoutubeChannel softwareAroma = YoutubeChannel("SoftwareAroma", 1000);
    YoutubeChannel miaStudios = YoutubeChannel("MiaStudios", 1000);
//    cout << codeBeauty;
//    operator<<(cout, codeBeauty);
    MyCollection myCollection;
    myCollection += codeBeauty;
    myCollection += softwareAroma;
    myCollection += miaStudios;
    myCollection -= codeBeauty;
    cout << myCollection;
    return 0;
}



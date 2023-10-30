#include <iostream>
using namespace std;

class Club{
    private:
        string ClubName;
        string ClubAbr;
        int ClubNumber;
        int ClubStrenght;
        int ClubPosition;
        int GoalsConceded;
        int GoalsFor;
        int GoalDifference;
        int GamesPlayed;
        int GamesLost;
        int GamesWon;
        int GamesTied;
        int Points;
        int GoalAverage;
        int Round;
    public:
        Club(
            string _clubName, 
            string _clubAbr, 
            int _clubStrenght = 0, 
            int _goalsConceded = 0, 
            int _goalsFor = 0,
            int _gamesPlayed = 0, 
            int _gamesLost = 0, 
            int _gamesWon = 0, 
            int _gamesTied = 0, 
            int _points = 0, 
            int _goalAverage = 0, 
            int _round = 1
        ){
            ClubName = _clubName;
            ClubAbr = _clubAbr;
            ClubStrenght = _clubStrenght;
            GoalsConceded = _goalsConceded;
            GoalsFor = _goalsFor;
            GoalDifference = 0;
            GamesPlayed = _gamesPlayed;
            GamesLost = _gamesLost;
            GamesWon = _gamesWon;
            GamesTied = _gamesTied;
            Points = _points;
            Round = _round;
        };
        
        // Setters / Mutators   
        void setClubName(string _clubName){
            ClubName = _clubName;
        };
        void setClubAbr(string _clubAbr){
            ClubAbr = _clubAbr;
        };
        void setClubStrenght(int _clubStrenght){
            ClubStrenght = _clubStrenght;
        };
        void setGoalsConceded(int _goalsConceded){
            GoalsConceded += _goalsConceded;
        };
        void setGoalsFor(int _goalsFor){
            GoalsFor += _goalsFor;
        };
        void calculateGoalDifference(){
            GoalDifference = GoalsFor - GoalsConceded;
        };
        void setGamesPlayed(int _gamesPlayed){
            GamesPlayed += _gamesPlayed;
        };
        void setGamesLost(int _gamesLost){
            GamesLost += _gamesLost;
        };
        void setGamesWon(int _gamesWon){
            GamesWon += _gamesWon;
        };
        void setGamesTied(int _gamesTied){
            GamesTied += _gamesTied;
        };
        void setRound(int _round){
            Round = _round;
        };
        void setClubPosition(int _position){
            ClubPosition = _position;
        };
        void calculatePoints(){
            Points = (GamesWon * 3) + GamesTied;
        };


        // Getters
        string getClubName(){
            return ClubName;
        };
        string getClubAbr(){
            return ClubAbr;
        };
        int getClubStrenght(){
            return ClubStrenght;
        };
        int getGoalsConceded(){
            return GoalsConceded;
        };
        int getGoalsFor(){
            return GoalsFor;
        };
        int getGoalDifference(){
            return GoalDifference;
        };
        int getGamesPlayed(){
            return GamesPlayed;
        };
        int getGamesLost(){
            return GamesLost;
        };
        int getGamesWon(){
            return GamesWon;
        };
        int getGamesTied(){
            return GamesTied;
        };
        int getPoints(){
            return Points;
        };
        int getGoalAverage(){
            return GoalAverage;
        };
        int getRound(){
            return Round;
        };
        int getClubPosition() {
            return ClubPosition;
        };

        // club statistics 
    void ClubStatistics() {
        calculatePoints();
        calculateGoalDifference();
        cout << getClubPosition() << " " << getClubName() << " \t\t" << getGamesPlayed() << " \t" << getGamesWon() << " \t" << getGamesTied() << " \t" << getGamesLost() << " \t" << getGoalsFor() << " \t" << getGoalsConceded() << " \t" << getGoalDifference() << " \t" << getPoints() << endl;

    };
};

int main(){
    Club Liverpool = Club("Liverpool", "Liv");
    Liverpool.setClubPosition(1);
    Liverpool.setGamesLost(2);
    Liverpool.setGamesWon(3);
    Liverpool.setGamesPlayed(6);
    Liverpool.setGamesTied(1);
    Liverpool.ClubStatistics();

    return 0;
}


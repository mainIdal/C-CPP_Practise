#include<iostream>
#include<algorithm>
#include<string>
using namespace std;


class Flight{
	private:
		string flightName;
		string state;

		int launchHour, launchMin;
		int landHour, landMin;

		int duration;

	public:
		int getLaunchHour(){return launchHour;}
		int getLaunchMin(){return launchMin;}

		int getLandHour(){return landHour;}
		int getLandMin(){return landMin;}

		string getName(){return flightName;}

		string getState(){return state;}
		string setState(string state){this->state=state;}

		void calculateLanding(){
            landHour = (launchHour + duration / 60) % 24;
            landMin = (launchMin + duration % 60) % 60;
		}

	Flight(){

		state = "IDLE";

		cout<<"Enter the name of the flight: ";
		cin>>flightName;

		cout<<"Enter the departure time of the plane: ";
		cin>>launchHour;
		cin>>launchMin;

		cout<<"Enter the duration of the flight in minutes: ";
		cin>>duration;

		cout<<"\n";
		calculateLanding();
		}
};

class FlightSchedule{
	public:
		Flight flights[3];
		void method(void);
};

class LaunchController{
	protected:
		int launchHour1, launchHour2;
		int launchMin1, launchMin2;
	public:
		void launchSchedule(FlightSchedule* flight_list)
		{
            for (int i = 0; i < 2; i++)
            {
                for (int j = i+1; j < 3; j++)
                {
                    launchHour1 = flight_list->flights[i].getLaunchHour();
                    launchMin1 = flight_list->flights[i].getLaunchMin();
                    launchHour2 = flight_list->flights[j].getLaunchHour();
                    launchMin2 = flight_list->flights[j].getLaunchMin();
                    if (launchHour1 > launchHour2)
                        swap(flight_list->flights[i], flight_list->flights[j]);
                    else if (launchHour1 == launchHour2 && launchMin1 > launchMin2)
                        swap(flight_list->flights[i], flight_list->flights[j]);
                    else if (launchHour1 == launchHour2 && launchMin1 == launchMin2)
                    {
                        flight_list->flights[i].setState("Delayed");
                        flight_list->flights[j].setState("Delayed");
                    }
                }
            }
            cout << "Launch Order\n";
            for(int i = 0; i < 3; i++)
            {
                cout << flight_list->flights[i].getName() << " Launch at " << flight_list->flights[i].getLaunchHour() << ':' << flight_list->flights[i].getLaunchMin()<< " Flight State: " << flight_list->flights[i].getState() << endl;
            }
		}
};


class LandingController{
	protected:
		int landHour1, landHour2;
		int landMin1, landMin2;

	public:
		void landingSchedule(FlightSchedule* flight_list){
			for (int i = 0; i < 2; i++)
            {
                for (int j = i+1; j < 3; j++)
                {
                    landHour1 = flight_list->flights[i].getLandHour();
                    landMin1 = flight_list->flights[i].getLandMin();
                    landHour2 = flight_list->flights[j].getLandHour();
                    landMin2 = flight_list->flights[j].getLandMin();
                    if (landHour1 > landHour2)
                        swap(flight_list->flights[i], flight_list->flights[j]);
                    else if (landHour1 == landHour2 && landMin1 > landMin2)
                        swap(flight_list->flights[i], flight_list->flights[j]);
                    else if (landHour1 == landHour2 && landMin1 == landMin2)
                    {
                        flight_list->flights[i].setState("Delayed");
                        flight_list->flights[j].setState("Delayed");
                    }
                }
            }
            cout << "\nLanding Order\n";
			for(int i = 0; i < 3; i++)
            {
                cout << flight_list->flights[i].getName() << " Landing at " << flight_list->flights[i].getLandHour() << ':' << flight_list->flights[i].getLandMin()<< " Flight State: " << flight_list->flights[i].getState() << endl;
            }
		}
};

class FlightController : public LaunchController, public LandingController{
	private:
		FlightSchedule flight_schedule;

	public:
		FlightController()
		{
			FlightSchedule *X = &flight_schedule;
			launchSchedule(X);
			landingSchedule(X);
		}

		FlightSchedule* flights()
		{
			return &flight_schedule;
		}
};

int main(){
	FlightController flight;
	return 0;
}







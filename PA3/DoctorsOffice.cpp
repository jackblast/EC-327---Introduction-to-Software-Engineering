#include "DoctorsOffice.h"
#include <cmath>


DoctorsOffice::DoctorsOffice():Building(){
    display_code = 'D';
    vaccine_capacity = 100;
    num_vaccine_remaining = vaccine_capacity;
    dollar_cost_per_vaccine = 5.0;
    state = VACCINE_AVAILABLE;
    cout << "DoctorsOffice default constructed" << endl;
}
DoctorsOffice::DoctorsOffice(int in_id, double vaccine_cost, unsigned int vaccine_cap, Point2D in_loc):Building('D', in_id, in_loc){
    dollar_cost_per_vaccine = vaccine_cost;
    vaccine_capacity = vaccine_cap;
    num_vaccine_remaining = vaccine_capacity;
    state = VACCINE_AVAILABLE;
    cout << "DoctorsOffice Constructed" << endl;
}
bool DoctorsOffice::HasVaccine(){
    if(vaccine_capacity >= 1){
        return true;
    }else{
        return false;
    }
}
unsigned int DoctorsOffice::GetNumVaccineRemaining(){
    return num_vaccine_remaining;
}
bool DoctorsOffice::CanAffordVaccine(unsigned int vaccine, double budget){
    if (budget >= (dollar_cost_per_vaccine*vaccine)){
        return true;
    }else{
        return false;
    }
}
double DoctorsOffice::GetDollarCost(unsigned int vaccine){
    return (vaccine * dollar_cost_per_vaccine);
}

unsigned int DoctorsOffice::DistributeVaccine(unsigned int vaccine_needed){
    if(num_vaccine_remaining >= vaccine_needed){
        vaccine_needed = num_vaccine_remaining - vaccine_needed;
    }else{
        vaccine_needed = num_vaccine_remaining;
        num_vaccine_remaining = 0;
    }
    return vaccine_needed;
}

void DoctorsOffice::Update(){
    if (num_vaccine_remaining == 0){
        state = NO_VACCINE_AVAILABLE;
        display_code = 'd';
        cout << "DoctorsOffice (" << id_num << ") has run out of vaccine" << endl;
    }else{
        cout << "DoctorsOffice (" << id_num << ") has vaccines available" << endl;
    }
}
void DoctorsOffice::ShowStatus(){
    cout << "DoctorOffice Status: " << endl;
    cout << "Dollars per vaccine: " << dollar_cost_per_vaccine << endl ;
    cout <<  "has " << num_vaccine_remaining << " vaccine remaining" << endl;
}

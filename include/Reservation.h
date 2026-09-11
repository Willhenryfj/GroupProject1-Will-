#include <string>
#include <iostream>

class Reservation {

    private:
    // private attributes 
    std::string reservationID;
    std::string studentID;
    std::string name;
    std::string resourceID;
    std::string date; 

    public:
    //Constructor Declarations and Initializations 
    Reservation(std::string resID, std::string stuID, std::string n, std::string rescID, std::string d){{
        reservationID = resID;
        studentID = stuID;
        name = n;
        resourceID = rescID;
        date = d;
    }
    
    //Getters
    std::string getReservationID() 
    {
      return reservationID;
    }
    std::string getStudentID() 
    {
       return studentID;
    }
    std::string getName() 
    {
       return name;
    }
    std::string getResourceID() 
    {
       return resourceID;
    }
    std::string getDate() 
    {
       return date;
    }

     // Setters                                                                                      
    void setReservationID(std::string resID) 
    {
        reservationID = resID;
    }
    void setStudentID(std::string stuID) 
    {
       studentID = stuID;
    }
    void setName(std::string n) 
    {
        name = n;
    }
    void setResourceID(std::string rescID)
    {
        resourceID = rescID;
    }
    void setDate(std::string d)
    {
        date = d;
    }

    //Display Resource Information to the console
    void DisplayReservationInfo()
    {
        std::cout << "--- Reservation Details ---\n"
                  << "Reservation ID: " << reservationID << "\n"
                  << "Student ID:     " << studentID << "\n"
                  << "Name:           " << name << "\n"
                  << "Resource ID:    " << resourceID << "\n"
                  << "Date:           " << date << "\n"
                  << "---------------------------\n";
    }
};

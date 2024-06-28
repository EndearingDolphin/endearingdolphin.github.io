/*
    Name: Justin Fifarek
    Project: Appointment management app
    Module: Appointment header
*/
#pragma once

#include <iostream>
#include <string>
#include <ctime>

class Appointment {
private:
    std::string appointmentID;
    std::time_t appointmentDate;
    std::string appointmentDesc;
    static unsigned int nextID;

public:
    Appointment(std::time_t appointmentDate, std::string appointmentDesc);

    // Getters
    std::string getAppointmentID();
    std::time_t getAppointmentDate();
    std::string getAppointmentDesc();
    void setAppointmentDate(std::time_t appointmentDate);
    void setAppointmentDesc(const std::string& appointmentDesc);
};
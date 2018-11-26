/*
name: Lucas Goldman
date: 9/3/18
assignment: Create the Customer function definitions
*/
#include "Customer.hpp"
using namespace std;

	
    //initialize constructors
    
    Customer::Customer(){
	} 
    
	Customer::Customer(string name, string device, int wait_time){
		name_ = name;
		defective_device_ = device;
		wait_time_ = 0;
	}
	
	//return: name_
    string Customer::getName(){
    	return name_;
	}

    

    //return: defective_device_

    string Customer::getDevice(){
    	return defective_device_;
	}

    

    //return: wait_time_

    int Customer::getWaitTime(){
    	return wait_time_;
	}

    

    //post: wait_time_ = new_wait_time

    void Customer::updateWaitTime(int new_wait_time){
    	wait_time_ = new_wait_time;
	}

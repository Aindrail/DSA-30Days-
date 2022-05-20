/*
Define a class called Fuel_Manager that will be used to check the amount of fuel that is left in car after travelling a certain distance. The class have instance variables fuel_Capacity, fuel_in_tank, and efficiency. Include methods get_initial()-to store initial values of instance variables, add_fuel()-that calculates how much fuel can be filled depending upon the fuel already in the tank and the capacity of the tank, drive_distance() that returns how much distance can be travelled with the fuel available in the tank with the efficiency provided. Test the Fuel_Manager class though the object of the class.
*/

import java.io.*;
import java.util.Scanner;

class Fuel_Manager{
    double fuel_Capacity, fuel_in_tank, efficiency;
    
    public void get_initial(){
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter the fuel capacity of the car");
        fuel_Capacity = sc.nextDouble();
        System.out.println("Enter the fuel in the tank");
        fuel_in_tank = sc.nextDouble();
        System.out.println("Enter the efficiency of the car");
        efficiency = sc.nextDouble();
    }
    
    public double add_fuel(){
        double fuel_to_fill = fuel_Capacity - fuel_in_tank;
        return fuel_to_fill;
    }
    
    public double drive_distance(){
        double distance = fuel_in_tank / efficiency;
        return distance;
    }
}

public class j {
public static void main(String[] args) {
    Fuel_Manager fm = new Fuel_Manager();
    fm.get_initial();
   double maxAdd = fm.add_fuel();
    double driveDist = fm.drive_distance();
    System.out.println("The maximum amount of fuel that can be added is "+maxAdd);
    System.out.println("The maximum distance that can be travelled is "+driveDist);
}
    }
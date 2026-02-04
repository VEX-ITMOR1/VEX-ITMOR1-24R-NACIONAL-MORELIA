#include "main.h"
#include "pros/adi.hpp"
#include "pros/optical.hpp"
#include "pros/rotation.hpp"

pros::Motor intake11W(16, pros::v5::MotorGears::blue);
pros::Motor stage2(8, pros::v5::MotorGears::green);
pros::Motor bigroller(12, pros::v5::MotorGears::blue);
pros::Motor frontmotor(18, pros::v5::MotorGears::blue);
pros::Optical optico(21);

pros::adi::Pneumatics cargador('A', false);
pros::adi::Pneumatics lift1('B', false);
pros::adi::Pneumatics lift2('C', false);
pros::adi::Pneumatics tapa('D', false);


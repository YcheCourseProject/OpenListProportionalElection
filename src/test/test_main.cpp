//
// Created by cheyulin on 11/21/15.
//
#include "test_unit.h"

int main() {
    string in_file_name = "/home/cheyulin/gitrepos/Open-List-Proportional-Representation/input/input_example2_seatnum_1_group1_10_group2_10.txt";
    IOProcessor my_io_processor;
    Solver *my_solver = my_io_processor.GetSolver(in_file_name);

    TestUnit test_unit;

    test_unit.TestSeatNum(my_solver);

    test_unit.TestGroupsInit(my_solver);

    Group to_be_test_group;
    to_be_test_group.candidates_ ={2,4,5};
    test_unit.TestFindCertainGroup(to_be_test_group,my_solver->getFirst_party_());

    test_unit.TestStrategiesInit(my_solver->getSecond_party_());

    delete my_solver;

    return 0;
}

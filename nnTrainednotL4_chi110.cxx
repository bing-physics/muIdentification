#include "nnTrainednotL4_chi110.h"
#include <cmath>

double nnTrainednotL4_chi110::Value(int index,double in0,double in1,double in2,double in3,double in4,double in5,double in6,double in7) {
   input0 = (in0 - 113.073)/76.75;
   input1 = (in1 - 6.42429)/4.39917;
   input2 = (in2 - 95.5586)/58.2677;
   input3 = (in3 - -58.1108)/420.109;
   input4 = (in4 - 158773)/365408;
   input5 = (in5 - 0.170583)/0.61038;
   input6 = (in6 - 309.028)/173.532;
   input7 = (in7 - 156.236)/105.119;
   switch(index) {
     case 0:
         return neuron0x4c6ec10();
     default:
         return 0.;
   }
}

double nnTrainednotL4_chi110::Value(int index, double* input) {
   input0 = (input[0] - 113.073)/76.75;
   input1 = (input[1] - 6.42429)/4.39917;
   input2 = (input[2] - 95.5586)/58.2677;
   input3 = (input[3] - -58.1108)/420.109;
   input4 = (input[4] - 158773)/365408;
   input5 = (input[5] - 0.170583)/0.61038;
   input6 = (input[6] - 309.028)/173.532;
   input7 = (input[7] - 156.236)/105.119;
   switch(index) {
     case 0:
         return neuron0x4c6ec10();
     default:
         return 0.;
   }
}

double nnTrainednotL4_chi110::neuron0x490a410() {
   return input0;
}

double nnTrainednotL4_chi110::neuron0x490a750() {
   return input1;
}

double nnTrainednotL4_chi110::neuron0x4c69760() {
   return input2;
}

double nnTrainednotL4_chi110::neuron0x4c69aa0() {
   return input3;
}

double nnTrainednotL4_chi110::neuron0x4c6a4b0() {
   return input4;
}

double nnTrainednotL4_chi110::neuron0x4c6a7f0() {
   return input5;
}

double nnTrainednotL4_chi110::neuron0x4c6ab30() {
   return input6;
}

double nnTrainednotL4_chi110::neuron0x4c6ae70() {
   return input7;
}

double nnTrainednotL4_chi110::input0x4c6b1b0() {
   double input = -0.365574;
   input += synapse0x4c6b460();
   input += synapse0x4c6b4a0();
   input += synapse0x4c6b4e0();
   input += synapse0x4c6b520();
   input += synapse0x4c6b560();
   input += synapse0x4c6b5a0();
   input += synapse0x4c6b5e0();
   input += synapse0x4c6b620();
   return input;
}

double nnTrainednotL4_chi110::neuron0x4c6b1b0() {
   double input = input0x4c6b1b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnTrainednotL4_chi110::input0x4c6b660() {
   double input = 1.11305;
   input += synapse0x4c6b9a0();
   input += synapse0x4c6b9e0();
   input += synapse0x4c6ba20();
   input += synapse0x4c6ba60();
   input += synapse0x4c6baa0();
   input += synapse0x4c6bae0();
   input += synapse0x4c6bb20();
   input += synapse0x4c6bb60();
   return input;
}

double nnTrainednotL4_chi110::neuron0x4c6b660() {
   double input = input0x4c6b660();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnTrainednotL4_chi110::input0x4c6bba0() {
   double input = 4.79357;
   input += synapse0x4c6bee0();
   input += synapse0x4909fa0();
   input += synapse0x4907ce0();
   input += synapse0x49076e0();
   input += synapse0x4907720();
   input += synapse0x490aa90();
   input += synapse0x490aad0();
   input += synapse0x490ab10();
   return input;
}

double nnTrainednotL4_chi110::neuron0x4c6bba0() {
   double input = input0x4c6bba0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnTrainednotL4_chi110::input0x4c6c030() {
   double input = 3.68104;
   input += synapse0x4c6c370();
   input += synapse0x4c6c3b0();
   input += synapse0x4c6c3f0();
   input += synapse0x4c6c430();
   input += synapse0x4c6c470();
   input += synapse0x4c6c4b0();
   input += synapse0x4c6c4f0();
   input += synapse0x4c6c530();
   return input;
}

double nnTrainednotL4_chi110::neuron0x4c6c030() {
   double input = input0x4c6c030();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnTrainednotL4_chi110::input0x4c6c570() {
   double input = -0.908044;
   input += synapse0x4c6c8b0();
   input += synapse0x4c6bf20();
   input += synapse0x4c6bf60();
   input += synapse0x4c6bfa0();
   input += synapse0x4c6bfe0();
   input += synapse0x4c6cb00();
   input += synapse0x4c6cb40();
   input += synapse0x4c6cb80();
   return input;
}

double nnTrainednotL4_chi110::neuron0x4c6c570() {
   double input = input0x4c6c570();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnTrainednotL4_chi110::input0x4c6cbc0() {
   double input = 0.315737;
   input += synapse0x4c6cf00();
   input += synapse0x4c6cf40();
   input += synapse0x4c6cf80();
   input += synapse0x4c6cfc0();
   input += synapse0x4c6d000();
   input += synapse0x4c6d040();
   input += synapse0x4c6d080();
   input += synapse0x4c6d0c0();
   return input;
}

double nnTrainednotL4_chi110::neuron0x4c6cbc0() {
   double input = input0x4c6cbc0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnTrainednotL4_chi110::input0x4c6d100() {
   double input = -5.09908;
   input += synapse0x4c6d440();
   input += synapse0x4c6d480();
   input += synapse0x4c6d4c0();
   input += synapse0x4c6d500();
   input += synapse0x4c6d540();
   input += synapse0x4c6d580();
   input += synapse0x4c6d5c0();
   input += synapse0x4c6d600();
   return input;
}

double nnTrainednotL4_chi110::neuron0x4c6d100() {
   double input = input0x4c6d100();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnTrainednotL4_chi110::input0x4c6d640() {
   double input = 0.747366;
   input += synapse0x4c6d980();
   input += synapse0x4c6d9c0();
   input += synapse0x4c6da00();
   input += synapse0x4c6da40();
   input += synapse0x4c6da80();
   input += synapse0x4c6dac0();
   input += synapse0x4c6db00();
   return input;
}

double nnTrainednotL4_chi110::neuron0x4c6d640() {
   double input = input0x4c6d640();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnTrainednotL4_chi110::input0x4c6db40() {
   double input = -1.38709;
   input += synapse0x4907530();
   input += synapse0x4907570();
   input += synapse0x4c7b000();
   input += synapse0x490a220();
   input += synapse0x490a260();
   input += synapse0x490a2a0();
   input += synapse0x490a2e0();
   return input;
}

double nnTrainednotL4_chi110::neuron0x4c6db40() {
   double input = input0x4c6db40();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnTrainednotL4_chi110::input0x4c6c8f0() {
   double input = -0.0358938;
   input += synapse0x4c6e550();
   input += synapse0x4c6e590();
   input += synapse0x4c6e5d0();
   input += synapse0x4c6e610();
   input += synapse0x4c6e650();
   input += synapse0x4c6e690();
   input += synapse0x4c6e6d0();
   return input;
}

double nnTrainednotL4_chi110::neuron0x4c6c8f0() {
   double input = input0x4c6c8f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnTrainednotL4_chi110::input0x4c6e710() {
   double input = -1.9233;
   input += synapse0x4c6ea50();
   input += synapse0x4c6ea90();
   input += synapse0x4c6ead0();
   input += synapse0x4c6eb10();
   input += synapse0x4c6eb50();
   input += synapse0x4c6eb90();
   input += synapse0x4c6ebd0();
   return input;
}

double nnTrainednotL4_chi110::neuron0x4c6e710() {
   double input = input0x4c6e710();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnTrainednotL4_chi110::input0x4c6ec10() {
   double input = -0.632403;
   input += synapse0x4c6ef50();
   input += synapse0x4c6ef90();
   input += synapse0x4c6efd0();
   input += synapse0x4c6f010();
   return input;
}

double nnTrainednotL4_chi110::neuron0x4c6ec10() {
   double input = input0x4c6ec10();
   return (input * 1)+0;
}

double nnTrainednotL4_chi110::synapse0x4c6b460() {
   return (neuron0x490a410()*1.85577);
}

double nnTrainednotL4_chi110::synapse0x4c6b4a0() {
   return (neuron0x490a750()*3.01062);
}

double nnTrainednotL4_chi110::synapse0x4c6b4e0() {
   return (neuron0x4c69760()*-0.29209);
}

double nnTrainednotL4_chi110::synapse0x4c6b520() {
   return (neuron0x4c69aa0()*-4.64356);
}

double nnTrainednotL4_chi110::synapse0x4c6b560() {
   return (neuron0x4c6a4b0()*-4.5021);
}

double nnTrainednotL4_chi110::synapse0x4c6b5a0() {
   return (neuron0x4c6a7f0()*0.332342);
}

double nnTrainednotL4_chi110::synapse0x4c6b5e0() {
   return (neuron0x4c6ab30()*-2.31035);
}

double nnTrainednotL4_chi110::synapse0x4c6b620() {
   return (neuron0x4c6ae70()*-0.695219);
}

double nnTrainednotL4_chi110::synapse0x4c6b9a0() {
   return (neuron0x490a410()*-2.8723);
}

double nnTrainednotL4_chi110::synapse0x4c6b9e0() {
   return (neuron0x490a750()*-1.09623);
}

double nnTrainednotL4_chi110::synapse0x4c6ba20() {
   return (neuron0x4c69760()*1.21514);
}

double nnTrainednotL4_chi110::synapse0x4c6ba60() {
   return (neuron0x4c69aa0()*5.61304);
}

double nnTrainednotL4_chi110::synapse0x4c6baa0() {
   return (neuron0x4c6a4b0()*3.4022);
}

double nnTrainednotL4_chi110::synapse0x4c6bae0() {
   return (neuron0x4c6a7f0()*-2.48415);
}

double nnTrainednotL4_chi110::synapse0x4c6bb20() {
   return (neuron0x4c6ab30()*-3.00026);
}

double nnTrainednotL4_chi110::synapse0x4c6bb60() {
   return (neuron0x4c6ae70()*2.948);
}

double nnTrainednotL4_chi110::synapse0x4c6bee0() {
   return (neuron0x490a410()*1.51618);
}

double nnTrainednotL4_chi110::synapse0x4909fa0() {
   return (neuron0x490a750()*-1.31525);
}

double nnTrainednotL4_chi110::synapse0x4907ce0() {
   return (neuron0x4c69760()*-0.653573);
}

double nnTrainednotL4_chi110::synapse0x49076e0() {
   return (neuron0x4c69aa0()*-2.8794);
}

double nnTrainednotL4_chi110::synapse0x4907720() {
   return (neuron0x4c6a4b0()*0.105292);
}

double nnTrainednotL4_chi110::synapse0x490aa90() {
   return (neuron0x4c6a7f0()*4.92413);
}

double nnTrainednotL4_chi110::synapse0x490aad0() {
   return (neuron0x4c6ab30()*-1.48743);
}

double nnTrainednotL4_chi110::synapse0x490ab10() {
   return (neuron0x4c6ae70()*-0.0446694);
}

double nnTrainednotL4_chi110::synapse0x4c6c370() {
   return (neuron0x490a410()*2.85315);
}

double nnTrainednotL4_chi110::synapse0x4c6c3b0() {
   return (neuron0x490a750()*0.507953);
}

double nnTrainednotL4_chi110::synapse0x4c6c3f0() {
   return (neuron0x4c69760()*3.95902);
}

double nnTrainednotL4_chi110::synapse0x4c6c430() {
   return (neuron0x4c69aa0()*10.9102);
}

double nnTrainednotL4_chi110::synapse0x4c6c470() {
   return (neuron0x4c6a4b0()*-3.51785);
}

double nnTrainednotL4_chi110::synapse0x4c6c4b0() {
   return (neuron0x4c6a7f0()*1.16813);
}

double nnTrainednotL4_chi110::synapse0x4c6c4f0() {
   return (neuron0x4c6ab30()*-0.358876);
}

double nnTrainednotL4_chi110::synapse0x4c6c530() {
   return (neuron0x4c6ae70()*-0.469168);
}

double nnTrainednotL4_chi110::synapse0x4c6c8b0() {
   return (neuron0x490a410()*1.92686);
}

double nnTrainednotL4_chi110::synapse0x4c6bf20() {
   return (neuron0x490a750()*-1.28431);
}

double nnTrainednotL4_chi110::synapse0x4c6bf60() {
   return (neuron0x4c69760()*-3.98566);
}

double nnTrainednotL4_chi110::synapse0x4c6bfa0() {
   return (neuron0x4c69aa0()*8.70536);
}

double nnTrainednotL4_chi110::synapse0x4c6bfe0() {
   return (neuron0x4c6a4b0()*-0.909266);
}

double nnTrainednotL4_chi110::synapse0x4c6cb00() {
   return (neuron0x4c6a7f0()*-1.16205);
}

double nnTrainednotL4_chi110::synapse0x4c6cb40() {
   return (neuron0x4c6ab30()*-2.97378);
}

double nnTrainednotL4_chi110::synapse0x4c6cb80() {
   return (neuron0x4c6ae70()*7.5665);
}

double nnTrainednotL4_chi110::synapse0x4c6cf00() {
   return (neuron0x490a410()*1.62774);
}

double nnTrainednotL4_chi110::synapse0x4c6cf40() {
   return (neuron0x490a750()*-3.31365);
}

double nnTrainednotL4_chi110::synapse0x4c6cf80() {
   return (neuron0x4c69760()*3.05948);
}

double nnTrainednotL4_chi110::synapse0x4c6cfc0() {
   return (neuron0x4c69aa0()*-1.20323);
}

double nnTrainednotL4_chi110::synapse0x4c6d000() {
   return (neuron0x4c6a4b0()*-5.67289);
}

double nnTrainednotL4_chi110::synapse0x4c6d040() {
   return (neuron0x4c6a7f0()*0.277981);
}

double nnTrainednotL4_chi110::synapse0x4c6d080() {
   return (neuron0x4c6ab30()*1.99615);
}

double nnTrainednotL4_chi110::synapse0x4c6d0c0() {
   return (neuron0x4c6ae70()*0.871146);
}

double nnTrainednotL4_chi110::synapse0x4c6d440() {
   return (neuron0x490a410()*-6.9634);
}

double nnTrainednotL4_chi110::synapse0x4c6d480() {
   return (neuron0x490a750()*-1.92932);
}

double nnTrainednotL4_chi110::synapse0x4c6d4c0() {
   return (neuron0x4c69760()*1.46444);
}

double nnTrainednotL4_chi110::synapse0x4c6d500() {
   return (neuron0x4c69aa0()*-1.78175);
}

double nnTrainednotL4_chi110::synapse0x4c6d540() {
   return (neuron0x4c6a4b0()*-1.15757);
}

double nnTrainednotL4_chi110::synapse0x4c6d580() {
   return (neuron0x4c6a7f0()*-1.43945);
}

double nnTrainednotL4_chi110::synapse0x4c6d5c0() {
   return (neuron0x4c6ab30()*-0.054074);
}

double nnTrainednotL4_chi110::synapse0x4c6d600() {
   return (neuron0x4c6ae70()*2.16408);
}

double nnTrainednotL4_chi110::synapse0x4c6d980() {
   return (neuron0x4c6b1b0()*-7.6824);
}

double nnTrainednotL4_chi110::synapse0x4c6d9c0() {
   return (neuron0x4c6b660()*4.1535);
}

double nnTrainednotL4_chi110::synapse0x4c6da00() {
   return (neuron0x4c6bba0()*-4.15696);
}

double nnTrainednotL4_chi110::synapse0x4c6da40() {
   return (neuron0x4c6c030()*7.36671);
}

double nnTrainednotL4_chi110::synapse0x4c6da80() {
   return (neuron0x4c6c570()*-1.00388);
}

double nnTrainednotL4_chi110::synapse0x4c6dac0() {
   return (neuron0x4c6cbc0()*-5.03629);
}

double nnTrainednotL4_chi110::synapse0x4c6db00() {
   return (neuron0x4c6d100()*-0.428453);
}

double nnTrainednotL4_chi110::synapse0x4907530() {
   return (neuron0x4c6b1b0()*6.80685);
}

double nnTrainednotL4_chi110::synapse0x4907570() {
   return (neuron0x4c6b660()*-3.52855);
}

double nnTrainednotL4_chi110::synapse0x4c7b000() {
   return (neuron0x4c6bba0()*3.67291);
}

double nnTrainednotL4_chi110::synapse0x490a220() {
   return (neuron0x4c6c030()*-5.12038);
}

double nnTrainednotL4_chi110::synapse0x490a260() {
   return (neuron0x4c6c570()*-0.120411);
}

double nnTrainednotL4_chi110::synapse0x490a2a0() {
   return (neuron0x4c6cbc0()*4.26369);
}

double nnTrainednotL4_chi110::synapse0x490a2e0() {
   return (neuron0x4c6d100()*-2.0436);
}

double nnTrainednotL4_chi110::synapse0x4c6e550() {
   return (neuron0x4c6b1b0()*4.96566);
}

double nnTrainednotL4_chi110::synapse0x4c6e590() {
   return (neuron0x4c6b660()*-2.36802);
}

double nnTrainednotL4_chi110::synapse0x4c6e5d0() {
   return (neuron0x4c6bba0()*2.36972);
}

double nnTrainednotL4_chi110::synapse0x4c6e610() {
   return (neuron0x4c6c030()*-1.86828);
}

double nnTrainednotL4_chi110::synapse0x4c6e650() {
   return (neuron0x4c6c570()*-1.94332);
}

double nnTrainednotL4_chi110::synapse0x4c6e690() {
   return (neuron0x4c6cbc0()*2.46063);
}

double nnTrainednotL4_chi110::synapse0x4c6e6d0() {
   return (neuron0x4c6d100()*-2.69399);
}

double nnTrainednotL4_chi110::synapse0x4c6ea50() {
   return (neuron0x4c6b1b0()*-4.73049);
}

double nnTrainednotL4_chi110::synapse0x4c6ea90() {
   return (neuron0x4c6b660()*1.90009);
}

double nnTrainednotL4_chi110::synapse0x4c6ead0() {
   return (neuron0x4c6bba0()*1.09443);
}

double nnTrainednotL4_chi110::synapse0x4c6eb10() {
   return (neuron0x4c6c030()*-0.887702);
}

double nnTrainednotL4_chi110::synapse0x4c6eb50() {
   return (neuron0x4c6c570()*-1.06993);
}

double nnTrainednotL4_chi110::synapse0x4c6eb90() {
   return (neuron0x4c6cbc0()*-2.13506);
}

double nnTrainednotL4_chi110::synapse0x4c6ebd0() {
   return (neuron0x4c6d100()*-1.05717);
}

double nnTrainednotL4_chi110::synapse0x4c6ef50() {
   return (neuron0x4c6d640()*1.69015);
}

double nnTrainednotL4_chi110::synapse0x4c6ef90() {
   return (neuron0x4c6db40()*2.52305);
}

double nnTrainednotL4_chi110::synapse0x4c6efd0() {
   return (neuron0x4c6c8f0()*-1.89792);
}

double nnTrainednotL4_chi110::synapse0x4c6f010() {
   return (neuron0x4c6e710()*1.03631);
}


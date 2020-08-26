#include "nnTrainedchi110.h"
#include <cmath>

double nnTrainedchi110::Value(int index,double in0,double in1,double in2,double in3,double in4,double in5,double in6,double in7,double in8,double in9) {
   input0 = (in0 - 109.06)/182.164;
   input1 = (in1 - 11.9859)/9.86404;
   input2 = (in2 - 0.755051)/0.260439;
   input3 = (in3 - 74.9089)/108.261;
   input4 = (in4 - 44.8504)/98.94;
   input5 = (in5 - 0.340147)/0.288728;
   input6 = (in6 - 78.5706)/175.308;
   input7 = (in7 - 140.337)/263.675;
   input8 = (in8 - 36.7363)/44.6973;
   input9 = (in9 - 3.32777)/2.88647;
   switch(index) {
     case 0:
         return neuron0x433edc0();
     default:
         return 0.;
   }
}

double nnTrainedchi110::Value(int index, double* input) {
   input0 = (input[0] - 109.06)/182.164;
   input1 = (input[1] - 11.9859)/9.86404;
   input2 = (input[2] - 0.755051)/0.260439;
   input3 = (input[3] - 74.9089)/108.261;
   input4 = (input[4] - 44.8504)/98.94;
   input5 = (input[5] - 0.340147)/0.288728;
   input6 = (input[6] - 78.5706)/175.308;
   input7 = (input[7] - 140.337)/263.675;
   input8 = (input[8] - 36.7363)/44.6973;
   input9 = (input[9] - 3.32777)/2.88647;
   switch(index) {
     case 0:
         return neuron0x433edc0();
     default:
         return 0.;
   }
}

double nnTrainedchi110::neuron0x4430a00() {
   return input0;
}

double nnTrainedchi110::neuron0x44303f0() {
   return input1;
}

double nnTrainedchi110::neuron0x4430730() {
   return input2;
}

double nnTrainedchi110::neuron0x4343870() {
   return input3;
}

double nnTrainedchi110::neuron0x4343bb0() {
   return input4;
}

double nnTrainedchi110::neuron0x4343ef0() {
   return input5;
}

double nnTrainedchi110::neuron0x4344230() {
   return input6;
}

double nnTrainedchi110::neuron0x4344570() {
   return input7;
}

double nnTrainedchi110::neuron0x43448b0() {
   return input8;
}

double nnTrainedchi110::neuron0x4344bf0() {
   return input9;
}

double nnTrainedchi110::input0x442d2a0() {
   double input = 0.829387;
   input += synapse0x4430bf0();
   input += synapse0x4430950();
   input += synapse0x442d550();
   input += synapse0x442d590();
   input += synapse0x442d5d0();
   input += synapse0x442d610();
   input += synapse0x442d650();
   input += synapse0x442d690();
   input += synapse0x442d6d0();
   input += synapse0x442d710();
   return input;
}

double nnTrainedchi110::neuron0x442d2a0() {
   double input = input0x442d2a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnTrainedchi110::input0x442d750() {
   double input = -0.116072;
   input += synapse0x442da90();
   input += synapse0x442dad0();
   input += synapse0x442db10();
   input += synapse0x442db50();
   input += synapse0x442db90();
   input += synapse0x442dbd0();
   input += synapse0x442dc10();
   input += synapse0x4430e70();
   input += synapse0x442a3e0();
   input += synapse0x442a420();
   return input;
}

double nnTrainedchi110::neuron0x442d750() {
   double input = input0x442d750();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnTrainedchi110::input0x442dd60() {
   double input = 0.149061;
   input += synapse0x442e0a0();
   input += synapse0x442e0e0();
   input += synapse0x442e120();
   input += synapse0x442e160();
   input += synapse0x442e1a0();
   input += synapse0x442e1e0();
   input += synapse0x442e220();
   input += synapse0x442e260();
   input += synapse0x442e2a0();
   input += synapse0x442e2e0();
   return input;
}

double nnTrainedchi110::neuron0x442dd60() {
   double input = input0x442dd60();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnTrainedchi110::input0x442e320() {
   double input = -0.401703;
   input += synapse0x442e660();
   input += synapse0x442e6a0();
   input += synapse0x442e6e0();
   input += synapse0x442dc50();
   input += synapse0x442dc90();
   input += synapse0x442dcd0();
   input += synapse0x442dd10();
   input += synapse0x442e930();
   input += synapse0x442e970();
   input += synapse0x442e9b0();
   return input;
}

double nnTrainedchi110::neuron0x442e320() {
   double input = input0x442e320();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnTrainedchi110::input0x442e9f0() {
   double input = -1.53649;
   input += synapse0x442ed30();
   input += synapse0x442ed70();
   input += synapse0x442edb0();
   input += synapse0x442edf0();
   input += synapse0x442ee30();
   input += synapse0x442ee70();
   input += synapse0x442eeb0();
   input += synapse0x442eef0();
   input += synapse0x442ef30();
   input += synapse0x442ef70();
   return input;
}

double nnTrainedchi110::neuron0x442e9f0() {
   double input = input0x442e9f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnTrainedchi110::input0x442efb0() {
   double input = -1.61075;
   input += synapse0x442f2f0();
   input += synapse0x442f330();
   input += synapse0x442f370();
   input += synapse0x442f3b0();
   input += synapse0x442f3f0();
   input += synapse0x442f430();
   input += synapse0x442f470();
   input += synapse0x442f4b0();
   input += synapse0x442f4f0();
   input += synapse0x442f530();
   return input;
}

double nnTrainedchi110::neuron0x442efb0() {
   double input = input0x442efb0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnTrainedchi110::input0x442f570() {
   double input = -1.27876;
   input += synapse0x442a230();
   input += synapse0x442a270();
   input += synapse0x442f9c0();
   input += synapse0x442fa00();
   input += synapse0x442fa40();
   input += synapse0x442cbd0();
   input += synapse0x44319b0();
   input += synapse0x4430b90();
   input += synapse0x4430990();
   input += synapse0x442ce70();
   return input;
}

double nnTrainedchi110::neuron0x442f570() {
   double input = input0x442f570();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnTrainedchi110::input0x442ceb0() {
   double input = 0.436296;
   input += synapse0x442e8d0();
   input += synapse0x442fa80();
   input += synapse0x442fac0();
   input += synapse0x442fb00();
   input += synapse0x442fb40();
   input += synapse0x442fb80();
   input += synapse0x442fbc0();
   input += synapse0x442fc00();
   input += synapse0x442fc40();
   input += synapse0x442fc80();
   return input;
}

double nnTrainedchi110::neuron0x442ceb0() {
   double input = input0x442ceb0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnTrainedchi110::input0x442fcc0() {
   double input = 0.313413;
   input += synapse0x433d6c0();
   input += synapse0x433d700();
   input += synapse0x433d740();
   input += synapse0x433d780();
   input += synapse0x433d7c0();
   input += synapse0x433d800();
   input += synapse0x433d840();
   input += synapse0x433d880();
   return input;
}

double nnTrainedchi110::neuron0x442fcc0() {
   double input = input0x442fcc0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnTrainedchi110::input0x433d8c0() {
   double input = -0.619236;
   input += synapse0x433dc00();
   input += synapse0x433dc40();
   input += synapse0x433dc80();
   input += synapse0x433dcc0();
   input += synapse0x433dd00();
   input += synapse0x433dd40();
   input += synapse0x433dd80();
   input += synapse0x433ddc0();
   return input;
}

double nnTrainedchi110::neuron0x433d8c0() {
   double input = input0x433d8c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnTrainedchi110::input0x433de00() {
   double input = 0.450194;
   input += synapse0x433e140();
   input += synapse0x433e180();
   input += synapse0x433e1c0();
   input += synapse0x433e200();
   input += synapse0x433e240();
   input += synapse0x433e280();
   input += synapse0x433e2c0();
   input += synapse0x433e300();
   return input;
}

double nnTrainedchi110::neuron0x433de00() {
   double input = input0x433de00();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnTrainedchi110::input0x433e340() {
   double input = -0.627892;
   input += synapse0x433e680();
   input += synapse0x433e6c0();
   input += synapse0x433e700();
   input += synapse0x433e740();
   input += synapse0x433e780();
   input += synapse0x433e7c0();
   input += synapse0x433e800();
   input += synapse0x433e840();
   return input;
}

double nnTrainedchi110::neuron0x433e340() {
   double input = input0x433e340();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnTrainedchi110::input0x433e880() {
   double input = -0.368563;
   input += synapse0x433ebc0();
   input += synapse0x433ec00();
   input += synapse0x433ec40();
   input += synapse0x433ec80();
   input += synapse0x433ecc0();
   input += synapse0x433ed00();
   input += synapse0x433ed40();
   input += synapse0x433ed80();
   return input;
}

double nnTrainedchi110::neuron0x433e880() {
   double input = input0x433e880();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnTrainedchi110::input0x433edc0() {
   double input = 1.41229;
   input += synapse0x433f100();
   input += synapse0x433f140();
   input += synapse0x433f180();
   input += synapse0x433f1c0();
   input += synapse0x433f200();
   return input;
}

double nnTrainedchi110::neuron0x433edc0() {
   double input = input0x433edc0();
   return (input * 1)+0;
}

double nnTrainedchi110::synapse0x4430bf0() {
   return (neuron0x4430a00()*0.668829);
}

double nnTrainedchi110::synapse0x4430950() {
   return (neuron0x44303f0()*0.373933);
}

double nnTrainedchi110::synapse0x442d550() {
   return (neuron0x4430730()*-0.111492);
}

double nnTrainedchi110::synapse0x442d590() {
   return (neuron0x4343870()*0.26901);
}

double nnTrainedchi110::synapse0x442d5d0() {
   return (neuron0x4343bb0()*1.734);
}

double nnTrainedchi110::synapse0x442d610() {
   return (neuron0x4343ef0()*-0.42776);
}

double nnTrainedchi110::synapse0x442d650() {
   return (neuron0x4344230()*0.512369);
}

double nnTrainedchi110::synapse0x442d690() {
   return (neuron0x4344570()*-0.234878);
}

double nnTrainedchi110::synapse0x442d6d0() {
   return (neuron0x43448b0()*-0.197553);
}

double nnTrainedchi110::synapse0x442d710() {
   return (neuron0x4344bf0()*0.155726);
}

double nnTrainedchi110::synapse0x442da90() {
   return (neuron0x4430a00()*-1.86353);
}

double nnTrainedchi110::synapse0x442dad0() {
   return (neuron0x44303f0()*-0.892093);
}

double nnTrainedchi110::synapse0x442db10() {
   return (neuron0x4430730()*-2.18984);
}

double nnTrainedchi110::synapse0x442db50() {
   return (neuron0x4343870()*-1.58435);
}

double nnTrainedchi110::synapse0x442db90() {
   return (neuron0x4343bb0()*-1.39256);
}

double nnTrainedchi110::synapse0x442dbd0() {
   return (neuron0x4343ef0()*-1.3337);
}

double nnTrainedchi110::synapse0x442dc10() {
   return (neuron0x4344230()*-0.874291);
}

double nnTrainedchi110::synapse0x4430e70() {
   return (neuron0x4344570()*-0.970292);
}

double nnTrainedchi110::synapse0x442a3e0() {
   return (neuron0x43448b0()*0.167471);
}

double nnTrainedchi110::synapse0x442a420() {
   return (neuron0x4344bf0()*-0.965903);
}

double nnTrainedchi110::synapse0x442e0a0() {
   return (neuron0x4430a00()*-0.814998);
}

double nnTrainedchi110::synapse0x442e0e0() {
   return (neuron0x44303f0()*-0.942357);
}

double nnTrainedchi110::synapse0x442e120() {
   return (neuron0x4430730()*-1.75334);
}

double nnTrainedchi110::synapse0x442e160() {
   return (neuron0x4343870()*-0.698859);
}

double nnTrainedchi110::synapse0x442e1a0() {
   return (neuron0x4343bb0()*0.452784);
}

double nnTrainedchi110::synapse0x442e1e0() {
   return (neuron0x4343ef0()*-1.10368);
}

double nnTrainedchi110::synapse0x442e220() {
   return (neuron0x4344230()*-0.0156543);
}

double nnTrainedchi110::synapse0x442e260() {
   return (neuron0x4344570()*0.0433313);
}

double nnTrainedchi110::synapse0x442e2a0() {
   return (neuron0x43448b0()*0.494061);
}

double nnTrainedchi110::synapse0x442e2e0() {
   return (neuron0x4344bf0()*-1.03342);
}

double nnTrainedchi110::synapse0x442e660() {
   return (neuron0x4430a00()*-0.686246);
}

double nnTrainedchi110::synapse0x442e6a0() {
   return (neuron0x44303f0()*-0.455861);
}

double nnTrainedchi110::synapse0x442e6e0() {
   return (neuron0x4430730()*-0.2953);
}

double nnTrainedchi110::synapse0x442dc50() {
   return (neuron0x4343870()*-0.987089);
}

double nnTrainedchi110::synapse0x442dc90() {
   return (neuron0x4343bb0()*0.121652);
}

double nnTrainedchi110::synapse0x442dcd0() {
   return (neuron0x4343ef0()*-0.557148);
}

double nnTrainedchi110::synapse0x442dd10() {
   return (neuron0x4344230()*-0.0636104);
}

double nnTrainedchi110::synapse0x442e930() {
   return (neuron0x4344570()*-0.405075);
}

double nnTrainedchi110::synapse0x442e970() {
   return (neuron0x43448b0()*-0.045296);
}

double nnTrainedchi110::synapse0x442e9b0() {
   return (neuron0x4344bf0()*-0.0333054);
}

double nnTrainedchi110::synapse0x442ed30() {
   return (neuron0x4430a00()*-0.559091);
}

double nnTrainedchi110::synapse0x442ed70() {
   return (neuron0x44303f0()*0.929319);
}

double nnTrainedchi110::synapse0x442edb0() {
   return (neuron0x4430730()*0.314896);
}

double nnTrainedchi110::synapse0x442edf0() {
   return (neuron0x4343870()*1.51081);
}

double nnTrainedchi110::synapse0x442ee30() {
   return (neuron0x4343bb0()*0.569082);
}

double nnTrainedchi110::synapse0x442ee70() {
   return (neuron0x4343ef0()*1.04636);
}

double nnTrainedchi110::synapse0x442eeb0() {
   return (neuron0x4344230()*-0.283929);
}

double nnTrainedchi110::synapse0x442eef0() {
   return (neuron0x4344570()*0.623191);
}

double nnTrainedchi110::synapse0x442ef30() {
   return (neuron0x43448b0()*0.403282);
}

double nnTrainedchi110::synapse0x442ef70() {
   return (neuron0x4344bf0()*1.53525);
}

double nnTrainedchi110::synapse0x442f2f0() {
   return (neuron0x4430a00()*3.50133);
}

double nnTrainedchi110::synapse0x442f330() {
   return (neuron0x44303f0()*0.849889);
}

double nnTrainedchi110::synapse0x442f370() {
   return (neuron0x4430730()*2.32109);
}

double nnTrainedchi110::synapse0x442f3b0() {
   return (neuron0x4343870()*-0.939535);
}

double nnTrainedchi110::synapse0x442f3f0() {
   return (neuron0x4343bb0()*1.46017);
}

double nnTrainedchi110::synapse0x442f430() {
   return (neuron0x4343ef0()*0.0523188);
}

double nnTrainedchi110::synapse0x442f470() {
   return (neuron0x4344230()*-0.725307);
}

double nnTrainedchi110::synapse0x442f4b0() {
   return (neuron0x4344570()*-0.613829);
}

double nnTrainedchi110::synapse0x442f4f0() {
   return (neuron0x43448b0()*-0.404628);
}

double nnTrainedchi110::synapse0x442f530() {
   return (neuron0x4344bf0()*2.61268);
}

double nnTrainedchi110::synapse0x442a230() {
   return (neuron0x4430a00()*-3.3719);
}

double nnTrainedchi110::synapse0x442a270() {
   return (neuron0x44303f0()*-0.128395);
}

double nnTrainedchi110::synapse0x442f9c0() {
   return (neuron0x4430730()*-1.32399);
}

double nnTrainedchi110::synapse0x442fa00() {
   return (neuron0x4343870()*-0.475751);
}

double nnTrainedchi110::synapse0x442fa40() {
   return (neuron0x4343bb0()*-1.97587);
}

double nnTrainedchi110::synapse0x442cbd0() {
   return (neuron0x4343ef0()*-2.22074);
}

double nnTrainedchi110::synapse0x44319b0() {
   return (neuron0x4344230()*0.295704);
}

double nnTrainedchi110::synapse0x4430b90() {
   return (neuron0x4344570()*-1.00574);
}

double nnTrainedchi110::synapse0x4430990() {
   return (neuron0x43448b0()*-0.935734);
}

double nnTrainedchi110::synapse0x442ce70() {
   return (neuron0x4344bf0()*-2.76888);
}

double nnTrainedchi110::synapse0x442e8d0() {
   return (neuron0x4430a00()*3.8059);
}

double nnTrainedchi110::synapse0x442fa80() {
   return (neuron0x44303f0()*0.79165);
}

double nnTrainedchi110::synapse0x442fac0() {
   return (neuron0x4430730()*0.863146);
}

double nnTrainedchi110::synapse0x442fb00() {
   return (neuron0x4343870()*-0.603808);
}

double nnTrainedchi110::synapse0x442fb40() {
   return (neuron0x4343bb0()*3.34478);
}

double nnTrainedchi110::synapse0x442fb80() {
   return (neuron0x4343ef0()*0.953345);
}

double nnTrainedchi110::synapse0x442fbc0() {
   return (neuron0x4344230()*-0.527689);
}

double nnTrainedchi110::synapse0x442fc00() {
   return (neuron0x4344570()*-0.866477);
}

double nnTrainedchi110::synapse0x442fc40() {
   return (neuron0x43448b0()*0.135609);
}

double nnTrainedchi110::synapse0x442fc80() {
   return (neuron0x4344bf0()*-0.286929);
}

double nnTrainedchi110::synapse0x433d6c0() {
   return (neuron0x442d2a0()*-1.18304);
}

double nnTrainedchi110::synapse0x433d700() {
   return (neuron0x442d750()*0.597163);
}

double nnTrainedchi110::synapse0x433d740() {
   return (neuron0x442dd60()*-1.77852);
}

double nnTrainedchi110::synapse0x433d780() {
   return (neuron0x442e320()*0.235911);
}

double nnTrainedchi110::synapse0x433d7c0() {
   return (neuron0x442e9f0()*0.198372);
}

double nnTrainedchi110::synapse0x433d800() {
   return (neuron0x442efb0()*-1.8283);
}

double nnTrainedchi110::synapse0x433d840() {
   return (neuron0x442f570()*2.5114);
}

double nnTrainedchi110::synapse0x433d880() {
   return (neuron0x442ceb0()*-3.02233);
}

double nnTrainedchi110::synapse0x433dc00() {
   return (neuron0x442d2a0()*0.24814);
}

double nnTrainedchi110::synapse0x433dc40() {
   return (neuron0x442d750()*0.788072);
}

double nnTrainedchi110::synapse0x433dc80() {
   return (neuron0x442dd60()*0.589677);
}

double nnTrainedchi110::synapse0x433dcc0() {
   return (neuron0x442e320()*0.573885);
}

double nnTrainedchi110::synapse0x433dd00() {
   return (neuron0x442e9f0()*-1.22978);
}

double nnTrainedchi110::synapse0x433dd40() {
   return (neuron0x442efb0()*2.25382);
}

double nnTrainedchi110::synapse0x433dd80() {
   return (neuron0x442f570()*-1.43578);
}

double nnTrainedchi110::synapse0x433ddc0() {
   return (neuron0x442ceb0()*2.01255);
}

double nnTrainedchi110::synapse0x433e140() {
   return (neuron0x442d2a0()*-0.824313);
}

double nnTrainedchi110::synapse0x433e180() {
   return (neuron0x442d750()*-0.631192);
}

double nnTrainedchi110::synapse0x433e1c0() {
   return (neuron0x442dd60()*-2.07492);
}

double nnTrainedchi110::synapse0x433e200() {
   return (neuron0x442e320()*-0.969992);
}

double nnTrainedchi110::synapse0x433e240() {
   return (neuron0x442e9f0()*1.30516);
}

double nnTrainedchi110::synapse0x433e280() {
   return (neuron0x442efb0()*-1.73121);
}

double nnTrainedchi110::synapse0x433e2c0() {
   return (neuron0x442f570()*0.680389);
}

double nnTrainedchi110::synapse0x433e300() {
   return (neuron0x442ceb0()*-2.07625);
}

double nnTrainedchi110::synapse0x433e680() {
   return (neuron0x442d2a0()*0.302325);
}

double nnTrainedchi110::synapse0x433e6c0() {
   return (neuron0x442d750()*-0.664697);
}

double nnTrainedchi110::synapse0x433e700() {
   return (neuron0x442dd60()*1.41489);
}

double nnTrainedchi110::synapse0x433e740() {
   return (neuron0x442e320()*0.485529);
}

double nnTrainedchi110::synapse0x433e780() {
   return (neuron0x442e9f0()*-1.02581);
}

double nnTrainedchi110::synapse0x433e7c0() {
   return (neuron0x442efb0()*1.21692);
}

double nnTrainedchi110::synapse0x433e800() {
   return (neuron0x442f570()*-1.11978);
}

double nnTrainedchi110::synapse0x433e840() {
   return (neuron0x442ceb0()*1.1633);
}

double nnTrainedchi110::synapse0x433ebc0() {
   return (neuron0x442d2a0()*-0.454861);
}

double nnTrainedchi110::synapse0x433ec00() {
   return (neuron0x442d750()*0.393176);
}

double nnTrainedchi110::synapse0x433ec40() {
   return (neuron0x442dd60()*-0.10809);
}

double nnTrainedchi110::synapse0x433ec80() {
   return (neuron0x442e320()*-0.116489);
}

double nnTrainedchi110::synapse0x433ecc0() {
   return (neuron0x442e9f0()*-0.266732);
}

double nnTrainedchi110::synapse0x433ed00() {
   return (neuron0x442efb0()*-0.426474);
}

double nnTrainedchi110::synapse0x433ed40() {
   return (neuron0x442f570()*0.632622);
}

double nnTrainedchi110::synapse0x433ed80() {
   return (neuron0x442ceb0()*-1.32196);
}

double nnTrainedchi110::synapse0x433f100() {
   return (neuron0x442fcc0()*1.71058);
}

double nnTrainedchi110::synapse0x433f140() {
   return (neuron0x433d8c0()*-3.34848);
}

double nnTrainedchi110::synapse0x433f180() {
   return (neuron0x433de00()*2.53342);
}

double nnTrainedchi110::synapse0x433f1c0() {
   return (neuron0x433e340()*2.29427);
}

double nnTrainedchi110::synapse0x433f200() {
   return (neuron0x433e880()*-2.09982);
}


#ifndef _BACKBONEARROW_H_
#define _BACKBONEARROW_H_

/*
 * This is the MEL commands for creating the nurbs surfaces representing the arrows and molecules used to visualize the connections between bases along the strands
 * The command was so long i put it in its own file. Originally it was distributed as a .ma-file, but as installation became complicated, bundling everything into one file was much simpler
 */

#define BACKBONE_ARROW_NAME	"BackboneArrow"

#define CREATE_BACKBONE_ARROW_COMMAND																	\
std::string(																								\
"createNode transform -n \"" BACKBONE_ARROW_NAME "\";\n"												\
"	setAttr \".visibility\" false;\n"																	\
"createNode nurbsSurface -n \"" BACKBONE_ARROW_NAME "Shape1\" -p \"" BACKBONE_ARROW_NAME "\";\n"		\
"	setAttr -k off \".v\";\n"																			\
"	setAttr \".vir\" yes;\n"																			\
"	setAttr \".vif\" yes;\n"																			\
"	setAttr \".covm[0]\"  0 1 1;\n"																		\
"	setAttr \".cdvm[0]\"  0 1 1;\n"																		\
"	setAttr \".dvu\" 0;\n"																				\
"	setAttr \".dvv\" 0;\n"																				\
"	setAttr \".cpr\" 3;\n"																				\
"	setAttr \".cps\" 1;\n"																				\
"	setAttr \".cc\" -type \"nurbsSurface\"\n"															\
"		3 3 0 2 no \n"																					\
"		13 0 0 0 1 2 3 4 5 6 7 8 8 8\n"																	\
"		13 -2 -1 0 1 2 3 4 5 6 7 8 9 10\n"																\
"		\n"																								\
"		121\n"																							\
"		-0.023480750275648433 -0.023480750275648471 -0.00033840429085513213\n"							\
"		-0.033206795494517834 3.7884983109594437e-018 -0.00033840429085513213\n"						\
"		-0.02348075027564845 0.02348075027564845 -0.00033840429085513213\n"								\
"		-9.6224985658819182e-018 0.033206795494517834 -0.00033840429085513213\n"						\
"		0.023480750275648443 0.023480750275648454 -0.00033840429085513213\n"							\
"		0.033206795494517841 1.0005855550248992e-017 -0.00033840429085513213\n"							\
"		0.02348075027564845 -0.023480750275648433 -0.00033840429085513213\n"							\
"		1.7835434637746006e-017 -0.033206795494517834 -0.00033840429085513213\n"						\
"		-0.023480750275648433 -0.023480750275648471 -0.00033840429085513213\n"							\
"		-0.033206795494517834 3.7884983109594437e-018 -0.00033840429085513213\n"						\
"		-0.02348075027564845 0.02348075027564845 -0.00033840429085513213\n"								\
"		-0.022773726121234749 -0.022773726121234787 -0.3186228005409748\n"								\
"		-0.032206912346420632 3.6744235994038392e-018 -0.3186228005409748\n"							\
"		-0.022773726121234763 0.022773726121234763 -0.3186228005409748\n"								\
"		-9.3327574446646277e-018 0.032206912346420632 -0.3186228005409748\n"							\
"		0.022773726121234759 0.02277372612123477 -0.3186228005409748\n"									\
"		0.032206912346420632 9.7045712438894531e-018 -0.3186228005409748\n"								\
"		0.022773726121234766 -0.022773726121234749 -0.3186228005409748\n"								\
"		1.7298395448396478e-017 -0.032206912346420632 -0.3186228005409748\n"							\
"		-0.022773726121234749 -0.022773726121234787 -0.3186228005409748\n"								\
"		-0.032206912346420632 3.6744235994038392e-018 -0.3186228005409748\n"							\
"		-0.022773726121234763 0.022773726121234763 -0.3186228005409748\n"								\
"		-0.022264216941972222 -0.022264216941972254 -0.32973013914736549\n"								\
"		-0.031486357554953971 3.5922169133995896e-018 -0.32973013914736549\n"							\
"		-0.022264216941972233 0.022264216941972233 -0.32973013914736549\n"								\
"		-9.1239586929551505e-018 0.031486357554953971 -0.32973013914736549\n"							\
"		0.022264216941972226 0.022264216941972236 -0.32973013914736549\n"								\
"		0.031486357554953978 9.4874540227879643e-018 -0.32973013914736549\n"							\
"		0.022264216941972236 -0.022264216941972222 -0.32973013914736549\n"								\
"		1.6911384064288672e-017 -0.031486357554953971 -0.32973013914736549\n"							\
"		-0.022264216941972222 -0.022264216941972254 -0.32973013914736549\n"								\
"		-0.031486357554953971 3.5922169133995896e-018 -0.32973013914736549\n"							\
"		-0.022264216941972233 0.022264216941972233 -0.32973013914736549\n"								\
"		-0.035110507045688646 -0.035110507045688702 -0.32916703290347155\n"								\
"		-0.049653755245809034 5.6648997616345439e-018 -0.32916703290347155\n"							\
"		-0.035110507045688667 0.035110507045688667 -0.32916703290347155\n"								\
"		-1.4388416031361077e-017 0.049653755245809034 -0.32916703290347155\n"							\
"		0.035110507045688653 0.035110507045688674 -0.32916703290347155\n"								\
"		0.049653755245809041 1.4961645504125971e-017 -0.32916703290347155\n"							\
"		0.035110507045688674 -0.035110507045688646 -0.32916703290347155\n"								\
"		2.6669128803815758e-017 -0.049653755245809034 -0.32916703290347155\n"							\
"		-0.035110507045688646 -0.035110507045688702 -0.32916703290347155\n"								\
"		-0.049653755245809034 5.6648997616345439e-018 -0.32916703290347155\n"							\
"		-0.035110507045688667 0.035110507045688667 -0.32916703290347155\n"								\
"		-0.058467307816555812 -0.058467307816555902 -0.32309066873825104\n"								\
"		-0.082685259669615749 9.4333994573881056e-018 -0.32309066873825104\n"							\
"		-0.058467307816555847 0.058467307816555847 -0.32309066873825104\n"								\
"		-2.3960119630387249e-017 0.082685259669615749 -0.32309066873825104\n"							\
"		0.058467307816555826 0.058467307816555861 -0.32309066873825104\n"								\
"		0.082685259669615763 2.4914682433768424e-017 -0.32309066873825104\n"							\
"		0.058467307816555854 -0.058467307816555812 -0.32309066873825104\n"								\
"		4.4410414265536492e-017 -0.082685259669615749 -0.32309066873825104\n"							\
"		-0.058467307816555812 -0.058467307816555902 -0.32309066873825104\n"								\
"		-0.082685259669615749 9.4333994573881056e-018 -0.32309066873825104\n"							\
"		-0.058467307816555847 0.058467307816555847 -0.32309066873825104\n"								\
"		-0.07145127093396729 -0.071451270933967401 -0.32159358153480994\n"								\
"		-0.10104735640361112 1.1528295138421223e-017 -0.32159358153480994\n"							\
"		-0.071451270933967317 0.071451270933967317 -0.32159358153480994\n"								\
"		-2.9280995880509771e-017 0.10104735640361112 -0.32159358153480994\n"							\
"		0.071451270933967304 0.071451270933967345 -0.32159358153480994\n"								\
"		0.10104735640361115 3.0447540536574177e-017 -0.32159358153480994\n"								\
"		0.071451270933967345 -0.07145127093396729 -0.32159358153480994\n"								\
"		5.4272732240940377e-017 -0.10104735640361112 -0.32159358153480994\n"							\
"		-0.07145127093396729 -0.071451270933967401 -0.32159358153480994\n"								\
"		-0.10104735640361112 1.1528295138421223e-017 -0.32159358153480994\n"							\
"		-0.071451270933967317 0.071451270933967317 -0.32159358153480994\n"								\
"		-0.0606194381967958 -0.06061943819679589 -0.3496075374748478\n"									\
"		-0.085728831641346315 9.7806346272523077e-018 -0.3496075374748478\n"							\
"		-0.060619438196795834 0.060619438196795834 -0.3496075374748478\n"								\
"		-2.484207064363605e-017 0.085728831641346315 -0.3496075374748478\n"								\
"		0.060619438196795813 0.060619438196795848 -0.3496075374748478\n"								\
"		0.085728831641346329 2.5831770067561635e-017 -0.3496075374748478\n"								\
"		0.060619438196795841 -0.0606194381967958 -0.3496075374748478\n"									\
"		4.6045122708753723e-017 -0.085728831641346315 -0.3496075374748478\n"							\
"		-0.0606194381967958 -0.06061943819679589 -0.3496075374748478\n"									\
"		-0.085728831641346315 9.7806346272523077e-018 -0.3496075374748478\n"							\
"		-0.060619438196795834 0.060619438196795834 -0.3496075374748478\n"								\
"		-0.024070712105177677 -0.024070712105177715 -0.50783239871279673\n"								\
"		-0.034041127515120534 3.8836856183692943e-018 -0.50783239871279673\n"							\
"		-0.024070712105177694 0.024070712105177694 -0.50783239871279673\n"								\
"		-9.8642671121134941e-018 0.034041127515120534 -0.50783239871279673\n"							\
"		0.024070712105177684 0.024070712105177697 -0.50783239871279673\n"								\
"		0.034041127515120541 1.0257256070979039e-017 -0.50783239871279673\n"							\
"		0.024070712105177694 -0.024070712105177677 -0.50783239871279673\n"								\
"		1.8283555993571946e-017 -0.034041127515120534 -0.50783239871279673\n"							\
"		-0.024070712105177677 -0.024070712105177715 -0.50783239871279673\n"								\
"		-0.034041127515120534 3.8836856183692943e-018 -0.50783239871279673\n"							\
"		-0.024070712105177694 0.024070712105177694 -0.50783239871279673\n"								\
"		-0.021991940710203713 -0.021991940710203748 -0.51202723213489432\n"								\
"		-0.03110130081527511 3.5482865435408736e-018 -0.51202723213489432\n"							\
"		-0.021991940710203727 0.021991940710203727 -0.51202723213489432\n"								\
"		-9.0123788831552333e-018 0.03110130081527511 -0.51202723213489432\n"							\
"		0.021991940710203717 0.021991940710203734 -0.51202723213489432\n"								\
"		0.031101300815275113 9.3714289123098217e-018 -0.51202723213489432\n"							\
"		0.021991940710203731 -0.021991940710203713 -0.51202723213489432\n"								\
"		1.6704569338263699e-017 -0.03110130081527511 -0.51202723213489432\n"							\
"		-0.021991940710203713 -0.021991940710203748 -0.51202723213489432\n"								\
"		-0.03110130081527511 3.5482865435408736e-018 -0.51202723213489432\n"							\
"		-0.021991940710203727 0.021991940710203727 -0.51202723213489432\n"								\
"		-0.020819776854422607 -0.020819776854422638 -0.52741409334880629\n"								\
"		-0.029443610793105927 3.3591639330764255e-018 -0.52741409334880629\n"							\
"		-0.020819776854422618 0.020819776854422618 -0.52741409334880629\n"								\
"		-8.5320217868604983e-018 0.029443610793105927 -0.52741409334880629\n"							\
"		0.020819776854422614 0.020819776854422625 -0.52741409334880629\n"								\
"		0.029443610793105934 8.8719345569555931e-018 -0.52741409334880629\n"							\
"		0.020819776854422625 -0.020819776854422607 -0.52741409334880629\n"								\
"		1.5814220793643574e-017 -0.029443610793105927 -0.52741409334880629\n"							\
"		-0.020819776854422607 -0.020819776854422638 -0.52741409334880629\n"								\
"		-0.029443610793105927 3.3591639330764255e-018 -0.52741409334880629\n"							\
"		-0.020819776854422618 0.020819776854422618 -0.52741409334880629\n"								\
"		-0.021499672909207644 -0.021499672909207679 -0.59164557411152097\n"								\
"		-0.03040512901478689 3.468861665258877e-018 -0.59164557411152097\n"								\
"		-0.021499672909207655 0.021499672909207655 -0.59164557411152097\n"								\
"		-8.8106457122170358e-018 0.03040512901478689 -0.59164557411152097\n"							\
"		0.021499672909207651 0.021499672909207665 -0.59164557411152097\n"								\
"		0.030405129014786893 9.1616587622514729e-018 -0.59164557411152097\n"							\
"		0.021499672909207658 -0.021499672909207644 -0.59164557411152097\n"								\
"		1.6330654106175153e-017 -0.03040512901478689 -0.59164557411152097\n"							\
"		-0.021499672909207644 -0.021499672909207679 -0.59164557411152097\n"								\
"		-0.03040512901478689 3.468861665258877e-018 -0.59164557411152097\n"								\
"		-0.021499672909207655 0.021499672909207655 -0.59164557411152097\n"								\
"		\n"																								\
"		;\n"																							\
"\n"																									\
"createNode nurbsSurface -n \"" BACKBONE_ARROW_NAME "Shape2\" -p \"" BACKBONE_ARROW_NAME "\";\n"		\
"	setAttr -k off \".v\";\n"																			\
"	setAttr \".vir\" yes;\n"																			\
"	setAttr \".vif\" yes;\n"																			\
"	setAttr \".covm[0]\"  0 1 1;\n"																		\
"	setAttr \".cdvm[0]\"  0 1 1;\n"																		\
"	setAttr \".dvu\" 2;\n"																				\
"	setAttr \".dvv\" 2;\n"																				\
"	setAttr \".cpr\" 4;\n"																				\
"	setAttr \".cps\" 16;\n"																				\
"	setAttr \".cc\" -type \"nurbsSurface\" \n"															\
"		3 3 0 0 no \n"																					\
"		6 0.3496051788229696 0.3496051788229696 0.3496051788229696 0.6503948211770304\n"				\
"		 0.6503948211770304 0.6503948211770304\n"														\
"		6 0.34960517882296971 0.34960517882296971 0.34960517882296971 0.65039482117703051\n"			\
"		 0.65039482117703051 0.65039482117703051\n"														\
"		\n"																								\
"		16\n"																							\
"		-0.029964780421561369 -0.029964780421561348 -0.00033840429085513213\n"							\
"		-0.029964780421561369 -0.0099882601405204361 -0.00033840429085513213\n"							\
"		-0.029964780421561369 0.0099882601405204743 -0.00033840429085513213\n"							\
"		-0.029964780421561369 0.029964780421561386 -0.00033840429085513213\n"							\
"		-0.0099882601405204587 -0.029964780421561348 -0.00033840429085507662\n"							\
"		-0.0099882601405204587 -0.0099882601405204361 -0.00033840429085507662\n"						\
"		-0.0099882601405204587 0.0099882601405204743 -0.00033840429085507662\n"							\
"		-0.0099882601405204587 0.029964780421561386 -0.00033840429085507662\n"							\
"		0.0099882601405204517 -0.029964780421561348 -0.00033840429085507662\n"							\
"		0.0099882601405204517 -0.0099882601405204361 -0.00033840429085507662\n"							\
"		0.0099882601405204517 0.0099882601405204743 -0.00033840429085507662\n"							\
"		0.0099882601405204517 0.029964780421561386 -0.00033840429085507662\n"							\
"		0.029964780421561366 -0.029964780421561348 -0.00033840429085507662\n"							\
"		0.029964780421561366 -0.0099882601405204361 -0.00033840429085507662\n"							\
"		0.029964780421561366 0.0099882601405204743 -0.00033840429085507662\n"							\
"		0.029964780421561366 0.029964780421561386 -0.00033840429085507662\n"							\
"		\n"																								\
"		;\n"																							\
"	setAttr \".tf[0]\" -type \"nurbsTrimface\" no 1\n"													\
"		0 1\n"																							\
"		0 \n"																							\
"		1\n"																							\
"		\n"																								\
"		3 3 1 no 3\n"																					\
"		8 -0 -0 -0 4 4 8 8 8\n"																			\
"		6\n"																							\
"		-0.029964780421561373 -5.2041704279304213e-018 -0.00033840429085513213\n"						\
"		-0.029964780421561373 0.039953040562081821 -0.00033840429085513213\n"							\
"		0.029964780421561366 0.039953040562081849 -0.00033840429085507662\n"							\
"		0.029964780421561366 -0.039953040562081807 -0.00033840429085507662\n"							\
"		-0.029964780421561373 -0.039953040562081835 -0.00033840429085513213\n"							\
"		-0.029964780421561373 -5.2041704279304213e-018 -0.00033840429085513213\n"						\
"		\n"																								\
"		0.01 1 -1\n"																					\
"		4\n"																							\
"		\n"																								\
"		3 1 0 no 2\n"																					\
"		6 -8 -8 -8 -6.0000000000000009 -6.0000000000000009 -6.0000000000000009\n"						\
"		4\n"																							\
"		0.3496051788229696 0.5\n"																		\
"		0.3496051788229696 0.39973678588197981\n"														\
"		0.42480258941148474 0.34960517882296971\n"														\
"		0.49999999999999989 0.34960517882296971\n"														\
"		\n"																								\
"		3 1 0 no 2\n"																					\
"		6 -6.0000000000000009 -6.0000000000000009 -6.0000000000000009 -4 -4 -4\n"						\
"		4\n"																							\
"		0.49999999999999989 0.34960517882296971\n"														\
"		0.57519741058851515 0.34960517882296971\n"														\
"		0.6503948211770304 0.39973678588197981\n"														\
"		0.6503948211770304 0.50000000000000011\n"														\
"		\n"																								\
"		3 1 0 no 2\n"																					\
"		6 -4 -4 -4 -2.0000000000000009 -2.0000000000000009 -2.0000000000000009\n"						\
"		4\n"																							\
"		0.6503948211770304 0.50000000000000011\n"														\
"		0.6503948211770304 0.60026321411802031\n"														\
"		0.57519741058851537 0.65039482117703051\n"														\
"		0.50000000000000011 0.65039482117703051\n"														\
"		\n"																								\
"		3 1 0 no 2\n"																					\
"		6 -2.0000000000000009 -2.0000000000000009 -2.0000000000000009 0 0 0\n"							\
"		4\n"																							\
"		0.50000000000000011 0.65039482117703051\n"														\
"		0.42480258941148485 0.65039482117703051\n"														\
"		0.3496051788229696 0.60026321411802031\n"														\
"		0.3496051788229696 0.5\n"																		\
"		\n"																								\
"		1 0.1\n"																						\
"		;\n"																							\
"\n"																									\
"createNode nurbsSurface -n \"" BACKBONE_ARROW_NAME "Shape3\" -p \"" BACKBONE_ARROW_NAME "\";\n"		\
"	setAttr -k off \".v\";\n"																			\
"	setAttr \".vir\" yes;\n"																			\
"	setAttr \".vif\" yes;\n"																			\
"	setAttr \".covm[0]\"  0 1 1;\n"																		\
"	setAttr \".cdvm[0]\"  0 1 1;\n"																		\
"	setAttr \".dvu\" 2;\n"																				\
"	setAttr \".dvv\" 2;\n"																				\
"	setAttr \".cpr\" 4;\n"																				\
"	setAttr \".cps\" 16;\n"																				\
"	setAttr \".cc\" -type \"nurbsSurface\" \n"															\
"		3 3 0 0 no \n"																					\
"		6 0.3496051788229696 0.3496051788229696 0.3496051788229696 0.65039482117703051\n"				\
"		 0.65039482117703051 0.65039482117703051\n"														\
"		6 0.34960517882296971 0.34960517882296971 0.34960517882296971 0.65039482117703051\n"			\
"		 0.65039482117703051 0.65039482117703051\n"														\
"		\n"																								\
"		16\n"																							\
"		-0.027436643646260476 -0.027436643646260462 -0.59164557411152097\n"								\
"		-0.027436643646260476 -0.0091455478820868085 -0.59164557411152097\n"							\
"		-0.027436643646260476 0.0091455478820868449 -0.59164557411152097\n"								\
"		-0.027436643646260476 0.027436643646260497 -0.59164557411152097\n"								\
"		-0.0091455478820868172 -0.027436643646260462 -0.59164557411152097\n"							\
"		-0.0091455478820868172 -0.0091455478820868085 -0.59164557411152097\n"							\
"		-0.0091455478820868172 0.0091455478820868449 -0.59164557411152097\n"							\
"		-0.0091455478820868172 0.027436643646260497 -0.59164557411152097\n"								\
"		0.0091455478820868415 -0.027436643646260462 -0.59164557411152097\n"								\
"		0.0091455478820868415 -0.0091455478820868085 -0.59164557411152097\n"							\
"		0.0091455478820868415 0.0091455478820868449 -0.59164557411152097\n"								\
"		0.0091455478820868415 0.027436643646260497 -0.59164557411152097\n"								\
"		0.027436643646260507 -0.027436643646260462 -0.59164557411152097\n"								\
"		0.027436643646260507 -0.0091455478820868085 -0.59164557411152097\n"								\
"		0.027436643646260507 0.0091455478820868449 -0.59164557411152097\n"								\
"		0.027436643646260507 0.027436643646260497 -0.59164557411152097\n"								\
"		\n"																								\
"		;\n"																							\
"	setAttr \".tf[0]\" -type \"nurbsTrimface\" no 1\n"													\
"		0 1\n"																							\
"		0 \n"																							\
"		1\n"																							\
"		\n"																								\
"		3 3 1 no 3\n"																					\
"		8 -0 -0 -0 4 4 8 8 8\n"																			\
"		6\n"																							\
"		-0.027436643646260479 -5.2041704279304213e-018 -0.59164557411152097\n"							\
"		-0.027436643646260479 0.036582191528347317 -0.59164557411152097\n"								\
"		0.027436643646260507 0.036582191528347338 -0.59164557411152097\n"								\
"		0.027436643646260507 -0.03658219152834731 -0.59164557411152097\n"								\
"		-0.027436643646260479 -0.036582191528347331 -0.59164557411152097\n"								\
"		-0.027436643646260479 -5.2041704279304213e-018 -0.59164557411152097\n"							\
"		\n"																								\
"		0.01 1 -1\n"																					\
"		4\n"																							\
"		\n"																								\
"		3 1 0 no 2\n"																					\
"		6 -8 -8 -8 -6.0000000000000009 -6.0000000000000009 -6.0000000000000009\n"						\
"		4\n"																							\
"		0.3496051788229696 0.5\n"																		\
"		0.3496051788229696 0.39973678588197981\n"														\
"		0.42480258941148474 0.34960517882296971\n"														\
"		0.49999999999999989 0.34960517882296971\n"														\
"		\n"																								\
"		3 1 0 no 2\n"																					\
"		6 -6.0000000000000009 -6.0000000000000009 -6.0000000000000009 -4 -4 -4\n"						\
"		4\n"																							\
"		0.49999999999999989 0.34960517882296971\n"														\
"		0.57519741058851515 0.34960517882296971\n"														\
"		0.65039482117703051 0.39973678588197981\n"														\
"		0.65039482117703051 0.50000000000000011\n"														\
"		\n"																								\
"		3 1 0 no 2\n"																					\
"		6 -4 -4 -4 -2.0000000000000009 -2.0000000000000009 -2.0000000000000009\n"						\
"		4\n"																							\
"		0.65039482117703051 0.50000000000000011\n"														\
"		0.65039482117703051 0.60026321411802031\n"														\
"		0.57519741058851526 0.65039482117703051\n"														\
"		0.50000000000000011 0.65039482117703051\n"														\
"		\n"																								\
"		3 1 0 no 2\n"																					\
"		6 -2.0000000000000009 -2.0000000000000009 -2.0000000000000009 0 0 0\n"							\
"		4\n"																							\
"		0.50000000000000011 0.65039482117703051\n"														\
"		0.42480258941148485 0.65039482117703051\n"														\
"		0.3496051788229696 0.60026321411802031\n"														\
"		0.3496051788229696 0.5\n"																		\
"		\n"																								\
"		1 0.1\n"																						\
"		;\n"																							\
"	createNode nurbsSurface -n \"" BACKBONE_ARROW_NAME "Shape4\" -p \"" BACKBONE_ARROW_NAME "\";\n"		\
"		setAttr -k off \".v\";\n"																		\
"		setAttr \".vir\" yes;\n"																		\
"		setAttr \".vif\" yes;\n"																		\
"		setAttr \".tw\" yes;\n"																			\
"		setAttr \".covm[0]\"  0 1 1;\n"																	\
"		setAttr \".cdvm[0]\"  0 1 1;\n"																	\
"		setAttr \".dvu\" 0;\n"																			\
"		setAttr \".dvv\" 0;\n"																			\
"		setAttr \".cpr\" 4;\n"																			\
"		setAttr \".cps\" 4;\n"																			\
"		setAttr \".nufa\" 4.5;\n"																		\
"		setAttr \".nvfa\" 4.5;\n"																		\
"	\n"																									\
"createNode makeNurbSphere -n \"" BACKBONE_ARROW_NAME "_makeNurbSphere1\";\n"							\
"	setAttr \".ax\" -type \"double3\" 0 1 0 ;\n"														\
"	setAttr \".r\" ") + DNA::SPHERE_RADIUS + (";\n"														\
"	\n"																									\
"connectAttr \"" BACKBONE_ARROW_NAME "_makeNurbSphere1.os\" \"" BACKBONE_ARROW_NAME "Shape4.cr\";\n"	\
)

#endif /* N _BACKBONEARROW_H_ */
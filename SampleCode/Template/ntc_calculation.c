/*_____ I N C L U D E S ____________________________________________________*/
#include <stdio.h>
#include "NuMicro.h"

#include <math.h>
#include "misc_config.h"
#include "ntc_calculation.h"

/*_____ D E C L A R A T I O N S ____________________________________________*/
typedef struct
{
	int ntc_temperature;	
	float ntc_voltage;
	
} NTC_T;

/*_____ D E F I N I T I O N S ______________________________________________*/


const NTC_T NTC_LookupTable_100K_3_3V[] = 
{
	/*{-40	,0.098548647 },
	{-39	,0.104921786 },
	{-38	,0.111622243 },
	{-37	,0.118675154 },
	{-36	,0.126098586 },
	{-35	,0.133912267 },
	{-34	,0.142143349 },
	{-33	,0.150822669 },
	{-32	,0.159961222 },
	{-31	,0.169596053 },
	{-30	,0.179748352 },
	{-29	,0.190443213 },
	{-28	,0.201699163 },
	{-27	,0.213550767 },
	{-26	,0.225996439 },
	{-25	,0.239061142 },
	{-24	,0.252776714 },
	{-23	,0.267141585 },
	{-22	,0.282171868 },
	{-21	,0.297887705 },
	{-20	,0.314276735 },
	{-19	,0.33135857  },
	{-18	,0.349128765 },
	{-17	,0.367597915 },
	{-16	,0.386765585 },
	{-15	,0.40662929  },
	{-14	,0.427184466 },
	{-13	,0.448430493 },
	{-12	,0.470373591 },
	{-11	,0.492993516 },
	{-10	,0.516286492 },
	{-9		,0.540257359 },
	{-8		,0.564894382 },
	{-7		,0.590181526 },
	{-6		,0.616131441 },
	{-5		,0.642711072 },
	{-4		,0.669928338 },
	{-3		,0.69776293  },
	{-2		,0.726200431 },
	{-1		,0.755235153 },
	{0		,0.784854683 },
	{1		,0.815056313 },
	{2		,0.845806848 },
	{3		,0.877099724 },
	{4		,0.908915636 },
	{5		,0.941216737 },
	{6		,0.973997226 },
	{7		,1.007264514 },
	{8		,1.040943789 },
	{9		,1.075023618 },
	{10		,1.109504757 },
	{11		,1.144323462 },
	{12		,1.179456021 },
	{13		,1.214887899 },
	{14		,1.25056844  },
	{15		,1.286499552 },
	{16		,1.322592281 },
	{17		,1.358863496 },
	{18		,1.395230847 },
	{19		,1.431670282 },
	{20		,1.46816746  },
	{21		,1.504719347 },
	{22		,1.541191855 },
	{23		,1.57758868  },
	{24		,1.613849765 },
	{25		,1.65        },
	{26		,1.685970174 },
	{27		,1.721727153 },
	{28		,1.75724464  },
	{29		,1.792474865 },
	{30		,1.827394302 },
	{31		,1.861987248 },
	{32		,1.896202997 },
	{33		,1.93003901  },
	{34		,1.963444238 },
	{35		,1.996418546 },
	{36		,2.028933826 },
	{37		,2.060967156 },
	{38		,2.092501236 },
	{39		,2.123538459 },
	{40		,2.154032937 },
	{41		,2.18399857  },
	{42		,2.213413285 },
	{43		,2.242274346 },
	{44		,2.270569294 },
	{45		,2.298290211 },
	{46		,2.325433905 },
	{47		,2.352002053 },
	{48		,2.378001326 },
	{49		,2.40340847  },
	{50		,2.428256071 },
	{51		,2.452510479 },
	{52		,2.476194764 },
	{53		,2.499318368 },
	{54		,2.521856086 },
	{55		,2.543842744 },
	{56		,2.565278566 },
	{57		,2.586166361 },
	{58		,2.60651154  },
	{59		,2.626322114 },
	{60		,2.64560869  },
	{61		,2.664384446 },
	{62		,2.682643298 },
	{63		,2.700402605 },
	{64		,2.717682229 },
	{65		,2.734459157 },
	{66		,2.750779387 },
	{67		,2.766645987 },
	{68		,2.782063279 },
	{69		,2.797036836 },
	{70		,2.811573459 },
	{71		,2.82568116  },
	{72		,2.839393574 },
	{73		,2.852697095 },
	{74		,2.865628094 },
	{75		,2.878149611 },
	{76		,2.890325293 },
	{77		,2.902119427 },
	{78		,2.913572835 },
	{79		,2.924676292 },
	{80		,2.935446855 },
	{81		,2.945902517 },
	{82		,2.956035687 },
	{83		,2.965865583 },
	{84		,2.975412275 },
	{85		,2.984642657 },
	{86		,2.993604572 },
	{87		,3.002303586 },
	{88		,3.010729144 },
	{89		,3.018901065 },
	{90		,3.02682038  },
	{91		,3.034499501 },
	{92		,3.041942861 },
	{93		,3.049160788 },
	{94		,3.056158298 },
	{95		,3.062943489 },
	{96		,3.069519025 },
	{97		,3.075896344 },
	{98		,3.082078554 },
	{99		,3.088074698 },
	{100	,3.093914364 },
	{101	,3.099522861 },
	{102	,3.105005645 },
	{103	,3.110302642 },
	{104	,3.11544126  },
	{105	,3.120419838 },
	{106	,3.125266358 },
	{107	,3.129949826 },
	{108	,3.13449848  },
	{109	,3.138911083 },
	{110	,3.143186429 },
	{111	,3.147353362 },
	{112	,3.151380878 },
	{113	,3.155298032 },
	{114	,3.159073721 },
	{115	,3.162767517 },
	{116	,3.166348433 },
	{117	,3.16981567  },
	{118	,3.173198969 },
	{119	,3.176467191 },
	{120	,3.179619602 },
	{121	,3.182716883 },
	{122	,3.185697185 },
	{123	,3.188621453 },
	{124	,3.191427632 },
	{125	,3.194176919 }, */
	
			{-40,0.479},
			{-39,0.484},
			{-38,0.489},
			{-37,0.494},
			{-36,0.5},
			{-35,0.506},
			{-34,0.513},
			{-33,0.519},
			{-32,0.526},
			{-31,0.534},
			{-30,0.542},
			{-29,0.55},
			{-28,0.559},
			{-27,0.568},
			{-26,0.578},
			{-25,0.588},
			{-24,0.599},
			{-23,0.61},
			{-22,0.622},
			{-21,0.635},
			{-20,0.648},
			{-19,0.661},
			{-18,0.675},
			{-17,0.69},
			{-16,0.705},
			{-15,0.721},
			{-14,0.737},
			{-13,0.754},
			{-12,0.771},
			{-11,0.79},
			{-10,0.808},
			{-9,0.827},
			{-8,0.847},
			{-7,0.868},
			{-6,0.889},
			{-5,0.91},
			{-4,0.932},
			{-3,0.955},
			{-2,0.978},
			{-1,1.001},
			{0,1.026},
			{1,1.05},
			{2,1.076},
			{3,1.101},
			{4,1.128},
			{5,1.154},
			{6,1.181},
			{7,1.209},
			{8,1.237},
			{9,1.266},
			{10,1.294},
			{11,1.324},
			{12,1.353},
			{13,1.383},
			{14,1.413},
			{15,1.444},
			{16,1.475},
			{17,1.505},
			{18,1.537},
			{19,1.568},
			{20,1.599},
			{21,1.631},
			{22,1.662},
			{23,1.694},
			{24,1.726},
			{25,1.757},
			{26,1.789},
			{27,1.82},
			{28,1.851},
			{29,1.882},
			{30,1.913},
			{31,1.944},
			{32,1.975},
			{33,2.005},
			{34,2.035},
			{35,2.064},
			{36,2.093},
			{37,2.122},
			{38,2.151},
			{39,2.179},
			{40,2.207},
			{41,2.234},
			{42,2.261},
			{43,2.287},
			{44,2.313},
			{45,2.339},
			{46,2.364},
			{47,2.388},
			{48,2.412},
			{49,2.436},
			{50,2.459},
			{51,2.482},
			{52,2.504},
			{53,2.525},
			{54,2.547},
			{55,2.567},
			{56,2.587},
			{57,2.607},
			{58,2.626},
			{59,2.645},
			{60,2.663},
			{61,2.681},
			{62,2.698},
			{63,2.715},
			{64,2.732},
			{65,2.748},
			{66,2.763},
			{67,2.778},
			{68,2.793},
			{69,2.807},
			{70,2.821},
			{71,2.835},
			{72,2.848},
			{73,2.861},
			{74,2.873},
			{75,2.886},
			{76,2.897},
			{77,2.909},
			{78,2.92},
			{79,2.931},
			{80,2.941},
			{81,2.951},
			{82,2.961},
			{83,2.97},
			{84,2.98},
			{85,2.989},
			{86,2.998},
			{87,3.006},
			{88,3.014},
			{89,3.022},
			{90,3.03},
			{91,3.037},
			{92,3.045},
			{93,3.052},
			{94,3.059},
			{95,3.065},
			{96,3.072},
			{97,3.078},
			{98,3.084},
			{99,3.09},
			{100,3.096},
			{101,3.101},
			{102,3.107},
			{103,3.112},
			{104,3.117},
			{105,3.122},
			{106,3.127},
			{107,3.131},
			{108,3.136},
			{109,3.14},
			{110,3.144},
			{111,3.148},
			{112,3.152},
			{113,3.156},
			{114,3.16},
			{115,3.164},
			{116,3.167},
			{117,3.171},
			{118,3.174},
			{119,3.177},
			{120,3.18},
			{121,3.183},
			{122,3.186},
			{123,3.189},
			{124,3.192},
			{125,3.195},

};

const NTC_T NTC_LookupTable_100K_5V[] = 
{
	{-40	,0.007383252 },
	{-39	,0.007876083 },
	{-38	,0.008396306 },
	{-37	,0.008946211 },
	{-36	,0.00952759  },
	{-35	,0.010142416 },
	{-34	,0.010793308 },
	{-33	,0.011483254 },
	{-32	,0.01221374  },
	{-31	,0.012988419 },
	{-30	,0.01380977  },
	{-29	,0.014680695 },
	{-28	,0.015603667 },
	{-27	,0.016582602 },
	{-26	,0.017618558 },
	{-25	,0.01871491  },
	{-24	,0.019875776 },
	{-23	,0.021102611 },
	{-22	,0.022398507 },
	{-21	,0.023767083 },
	{-20	,0.02520929  },
	{-19	,0.026729034 },
	{-18	,0.028328278 },
	{-17	,0.030010504 },
	{-16	,0.031778399 },
	{-15	,0.033634644 },
	{-14	,0.035581913 },
	{-13	,0.037623452 },
	{-12	,0.039763408 },
	{-11	,0.04200357  },
	{-10	,0.044347537 },
	{-9		,0.046800047 },
	{-8		,0.049364433 },
	{-7		,0.052043804 },
	{-6		,0.054844607 },
	{-5		,0.057768685 },
	{-4		,0.060822626 },
	{-3		,0.064010242 },
	{-2		,0.067336289 },
	{-1		,0.070806904 },
	{0		,0.074427836 },
	{1		,0.078206465 },
	{2		,0.082146769 },
	{3		,0.086256469 },
	{4		,0.090542121 },
	{5		,0.095008115 },
	{6		,0.099663635 },
	{7		,0.104520512 },
	{8		,0.109579034 },
	{9		,0.114849021 },
	{10		,0.120342977 },
	{11		,0.126063662 },
	{12		,0.132020463 },
	{13		,0.138224961 },
	{14		,0.144682903 },
	{15		,0.151410006 },
	{16		,0.158405386 },
	{17		,0.165688643 },
	{18		,0.173260179 },
	{19		,0.181132075 },
	{20		,0.18931924  },
	{21		,0.197840244 },
	{22		,0.206682742 },
	{23		,0.215866163 },
	{24		,0.22539444  },
	{25		,0.235294118 },
	{26		,0.245567004 },
	{27		,0.256224111 },
	{28		,0.267278437 },
	{29		,0.278735933 },
	{30		,0.290609675 },
	{31		,0.302915562 },
	{32		,0.315656566 },
	{33		,0.328852715 },
	{34		,0.342504852 },
	{35		,0.356633381 },
	{36		,0.371246926 },
	{37		,0.386355221 },
	{38		,0.401969651 },
	{39		,0.418111183 },
	{40		,0.434774732 },
	{41		,0.451985913 },
	{42		,0.469750054 },
	{43		,0.488082649 },
	{44		,0.506992268 },
	{45		,0.526488977 },
	{46		,0.546584983 },
	{47		,0.567295419 },
	{48		,0.588639262 },
	{49		,0.610609337 },
	{50		,0.633245383 },
	{51		,0.656526972 },
	{52		,0.680484278 },
	{53		,0.705135739 },
	{54		,0.73046019  },
	{55		,0.756501182 },
	{56		,0.783264254 },
	{57		,0.81075603  },
	{58		,0.838984828 },
	{59		,0.867961376 },
	{60		,0.897699645 },
	{61		,0.928217822 },
	{62		,0.959501059 },
	{63		,0.991571641 },
	{64		,1.024458958 },
	{65		,1.058107751 },
	{66		,1.092597651 },
	{67		,1.127925557 },
	{68		,1.164087889 },
	{69		,1.201080973 },
	{70		,1.238901507 },
	{71		,1.27754711  },
	{72		,1.317089233 },
	{73		,1.357466063 },
	{74		,1.398764425 },
	{75		,1.440835685 },
	{76		,1.48386299  },
	{77		,1.52768937  },
	{78		,1.57243006  },
	{79		,1.618013888 },
	{80		,1.66447049  },
	{81		,1.711840228 },
	{82		,1.760046935 },
	{83		,1.809136137 },
	{84		,1.859168022 },
	{85		,1.909915645 },
	{86		,1.961585615 },
	{87		,2.014166303 },
	{88		,2.067539628 },
	{89		,2.121772033 },
	{90		,2.176811515 },
	{91		,2.232682754 },
	{92		,2.289355451 },
	{93		,2.346843984 },
	{94		,2.405122912 },
	{95		,2.464192207 },
	{96		,2.524004333 },
	{97		,2.584591527 },
	{98		,2.645910965 },
	{99		,2.707978381 },
	{100	,2.771042605 },
	{101	,2.834199339 },
	{102	,2.898550725 },
	{103	,2.963328806 },
	{104	,3.028773347 },
	{105	,3.094777563 },
	{106	,3.161638783 },
	{107	,3.228844343 },
	{108	,3.296703297 },
	{109	,3.365114975 },
	{110	,3.433967663 },
	{111	,3.503649635 },
	{112	,3.573555688 },
	{113	,3.644093532 },
	{114	,3.714595264 },
	{115	,3.786086133 },
	{116	,3.857900659 },
	{117	,3.929916489 },
	{118	,4.002668446 },
	{119	,4.075394804 },
	{120	,4.147943311 },
	{121	,4.221635884 },
	{122	,4.294917681 },
	{123	,4.36919716  },
	{124	,4.442798963 },
	{125	,4.517221909 },	
	
};

const NTC_T NTC_LookupTable_10K_3_3V[] = 
{
	{-40 	,3.268034097  },
	{-39	,3.266198914  },
	{-38	,3.264277982  },
	{-37	,3.262266308  },
	{-36	,3.260156957  },
	{-35	,3.257945712  },
	{-34	,3.255627269  },
	{-33	,3.253198128  },
	{-32	,3.250646826  },
	{-31	,3.247978245  },
	{-30	,3.245178171  },
	{-29	,3.242247112  },
	{-28	,3.239176113  },
	{-27	,3.235965848  },
	{-26	,3.232606298  },
	{-25	,3.229095538  },
	{-24	,3.225427942  },
	{-23	,3.221598441  },
	{-22	,3.217602996  },
	{-21	,3.213436947  },
	{-20	,3.209094666  },
	{-19	,3.204573254  },
	{-18	,3.199864969  },
	{-17	,3.194968013  },
	{-16	,3.189875192  },
	{-15	,3.184581082  },
	{-14	,3.179083231  },
	{-13	,3.173376437  },
	{-12	,3.16745391   },
	{-11	,3.161309574  },
	{-10	,3.154941867  },
	{-9		,3.148338619  },
	{-8		,3.141502365  },
	{-7		,3.134424626  },
	{-6		,3.127098397  },
	{-5		,3.119519265  },
	{-4		,3.111681456  },
	{-3		,3.103577274  },
	{-2		,3.09520278   },
	{-1		,3.086552828  },
	{0		,3.077628032  },
	{1		,3.068412927  },
	{2		,3.05890411   },
	{3		,3.04909713   },
	{4		,3.038986     },
	{5		,3.028573779  },
	{6		,3.017840195  },
	{7		,3.006796979  },
	{8		,2.995431472  },
	{9		,2.983741435  },
	{10	 	,2.971707123  },
	{11	 	,2.959354839  },
	{12	 	,2.946662027  },
	{13	 	,2.933618297  },
	{14	 	,2.920231314  },
	{15	 	,2.906510463  },
	{16	 	,2.892441645  },
	{17	 	,2.878005115  },
	{18	 	,2.863232083  },
	{19	 	,2.848099966  },
	{20	 	,2.832644101  },
	{21	 	,2.816802108  },
	{22	 	,2.800643111  },
	{23	 	,2.784092863  },
	{24	 	,2.767226348  },
	{25	 	,2.75         },
	{26	 	,2.732433827  },
	{27	 	,2.714530294  },
	{28	 	,2.696295449  },
	{29	 	,2.677722464  },
	{30	 	,2.65883113   },
	{31	 	,2.63961037   },
	{32	 	,2.620078294  },
	{33	 	,2.600239615  },
	{34	 	,2.58009686   },
	{35	 	,2.559658097  },
	{36	 	,2.538938665  },
	{37	 	,2.517935349  },
	{38	 	,2.496660053  },
	{39	 	,2.475123731  },
	{40	 	,2.453346846  },
	{41	 	,2.431316056  },
	{42	 	,2.409059248  },
	{43	 	,2.386568404  },
	{44	 	,2.3638829    },
	{45	 	,2.34097646   },
	{46	 	,2.317900987  },
	{47	 	,2.29463807   },
	{48	 	,2.271193416  },
	{49	 	,2.247603406  },
	{50	 	,2.223872104  },
	{51	 	,2.2          },
	{52	 	,2.176021798  },
	{53	 	,2.151914346  },
	{54	 	,2.127729525  },
	{55	 	,2.103437398  },
	{56	 	,2.079089126  },
	{57	 	,2.054646489  },
	{58	 	,2.030183161  },
	{59	 	,2.005653939  },
	{60	 	,1.981134225  },
	{61	 	,1.956570591  },
	{62	 	,1.931982589  },
	{63	 	,1.907418661  },
	{64	 	,1.882869903  },
	{65	 	,1.858353902  },
	{66	 	,1.833854629  },
	{67	 	,1.80941777   },
	{68	 	,1.78502238   },
	{69	 	,1.760713203  },
	{70	 	,1.736463565  },
	{71	 	,1.712316574  },
	{72	 	,1.688239029  },
	{73	 	,1.664271729  },
	{74	 	,1.640415902  },
	{75	 	,1.616713     },
	{76	 	,1.593118163  },
	{77	 	,1.569624036  },
	{78	 	,1.546313272  },
	{79	 	,1.523131596  },
	{80	 	,1.500114538  },
	{81	 	,1.477299089  },
	{82	 	,1.454620439  },
	{83	 	,1.432110715  },
	{84	 	,1.409803248  },
	{85	 	,1.387677107  },
	{86	 	,1.365764023  },
	{87	 	,1.344096728  },
	{88	 	,1.32253116   },
	{89	 	,1.301271918  },
	{90	 	,1.280168931  },
	{91	 	,1.259309876  },
	{92	 	,1.238723883  },
	{93	 	,1.218309415  },
	{94	 	,1.19815611   },
	{95	 	,1.178222851  },
	{96	 	,1.15853342   },
	{97	 	,1.139112072  },
	{98	 	,1.119911475  },
	{99	 	,1.10095292   },
	{100	,1.081512605  },
	{101	,1.06347001   },
	{102	,1.045131534  },
	{103	,1.027272727  },
	{104	,1.008333333  },
	{105	,0.992307692  },
	{106	,0.967844523  },
	{107	,0.951245552  },
	{108	,0.934408602  },
	{109	,0.91732852   },
	{110	,0.908695652  },
	{111	,0.891240876  },
	{112	,0.873529412  },
	{113	,0.855555556  },
	{114	,0.846468401  },
	{115	,0.828089888  },
	{116	,0.809433962  },
	{117	,0.8          },
	{118	,0.780916031  },
	{119	,0.771264368  },
	{120	,0.761538462  },
	{121	,0.741860465  },
	{122	,0.731906615  },
	{123	,0.721875     },
	{124	,0.711764706  },
	{125	,0.691304348  },
	
};

/*_____ M A C R O S ________________________________________________________*/

/*_____ F U N C T I O N S __________________________________________________*/


float NTC_LookupTable_10K_3_3V_Search(uint16_t mv)	// binary search
{
	float res_temperature = 0.0f;
	int middle = 0;
	int low = 0;
	int high = SIZEOF(NTC_LookupTable_10K_3_3V) - 1;	// array size

	#if defined (ENABLE_NTC_DECIMAL)
	float temp_decimal = 0.0f;
	int denominator= 0;	// numerator / denominator = xxx
	int numerator= 0;
	#endif

	// out of boundary
	#if 1
	if (mv > 1000*NTC_LookupTable_10K_3_3V[low].ntc_voltage)	
	{
		return NTC_LookupTable_10K_3_3V[low].ntc_temperature;
	}
	else if (mv < 1000*NTC_LookupTable_10K_3_3V[high].ntc_voltage)
	{
		return NTC_LookupTable_10K_3_3V[high].ntc_temperature;
	}
	#else
	if ((mv > 1000*NTC_LookupTable_10K_3_3V[low].ntc_voltage) || 
	(mv < 1000*NTC_LookupTable_10K_3_3V[high].ntc_voltage))	
	{
		// printf("%s:%4dmv\r\n",__FUNCTION__,mv);
		return res_temperature;
	}
	#endif

	while (low <= high)
	{
		middle = (low + high) / 2 ;
		// printf("[middle] : %2d\r\n" , middle);
		if (mv < (1000*NTC_LookupTable_10K_3_3V[middle].ntc_voltage)  )	// change to mv
		{
			low = middle + 1;
			// printf("low : %2d\r\n" , low);
		}
		else if (mv > (1000*NTC_LookupTable_10K_3_3V[middle].ntc_voltage) )
		{
			high = middle - 1;
			// printf("high2 : %2d\r\n" , high);
		}
		else 
		{
			res_temperature = NTC_LookupTable_10K_3_3V[middle].ntc_temperature;
			// printf("final1 : %2d\r\n" , middle);
			break;
		}
	}

	if (low >= high) //( (low >= high) && (middle == low) ) 
	{
		// printf("final2 : %2d\r\n" , middle);

		// res_temperature = NTC_LookupTable_10K_3_3V[middle].ntc_temperature;
		if (middle >= high)
		{
			res_temperature = NTC_LookupTable_10K_3_3V[high].ntc_temperature;
		}
		else
		{
			res_temperature = NTC_LookupTable_10K_3_3V[middle].ntc_temperature;
		}
	}

	#if defined (ENABLE_NTC_DECIMAL)	// add arithmetic point
	if (middle == high)
	{
		denominator = ((int)(1000*NTC_LookupTable_10K_3_3V[middle].ntc_voltage) - (int)(1000*NTC_LookupTable_10K_3_3V[low].ntc_voltage));
		numerator = (mv - (int)(1000*NTC_LookupTable_10K_3_3V[low].ntc_voltage));
		
		temp_decimal = (float)((float) numerator / (float)denominator) ;
		// printf("\r\ntemp_decimal(1) = %2.4f (%4d,%4d)\r\n",(float) temp_decimal , numerator , denominator);
		res_temperature = (float) NTC_LookupTable_10K_3_3V[low].ntc_temperature - (float) temp_decimal;
	}
	else
	{
		denominator = ((int)(1000*NTC_LookupTable_10K_3_3V[high].ntc_voltage) - (int)(1000*NTC_LookupTable_10K_3_3V[middle].ntc_voltage)) ;
		numerator = (mv - (int)(1000*NTC_LookupTable_10K_3_3V[middle].ntc_voltage)); 

		temp_decimal = (float)((float) numerator / (float)denominator) ;
		// printf("\r\ntemp_decimal(2) = %2.4f (%4d,%4d)\r\n",(float) temp_decimal , numerator , denominator);
		res_temperature = (float) NTC_LookupTable_10K_3_3V[middle].ntc_temperature - (float) temp_decimal;
	}
	#endif

	// printf("%s:low:%3d,middle:%3d,high:%3d,temp=%4d\r\n",__FUNCTION__,low,middle,high,res_temperature);	
	// printf("%s:low:%3d(%4d,%2d),middle:%3d(%4d,%2d),high:%3d(%4d,%2d),temp=%2.4f(%4d)\r\n",
	// 			__FUNCTION__,
	// 			(int)low,(int)(1000*NTC_LookupTable_10K_3_3V[low].ntc_voltage),(int)(NTC_LookupTable_10K_3_3V[low].ntc_temperature),
	// 			(int)middle,(int)(1000*NTC_LookupTable_10K_3_3V[middle].ntc_voltage),(int)(NTC_LookupTable_10K_3_3V[middle].ntc_temperature),
	// 			(int)high,(int)(1000*NTC_LookupTable_10K_3_3V[high].ntc_voltage),(int)(NTC_LookupTable_10K_3_3V[high].ntc_temperature),
	// 			(float) res_temperature,(int)mv);
		
	return res_temperature;	
}

float NTC_LookupTable_100K_3_3V_Search(uint16_t mv)	// binary search
{
	float res_temperature = 0.0f;
	int middle = 0;
	int low = 0;
	int high = SIZEOF(NTC_LookupTable_100K_3_3V) - 1;	// array size

	#if defined (ENABLE_NTC_DECIMAL)
	float temp_decimal = 0.0f;
	int denominator= 0;	// numerator / denominator = xxx
	int numerator= 0;
	#endif

	// out of boundary
	#if 1
	if (mv < 1000*NTC_LookupTable_100K_3_3V[low].ntc_voltage)
	{
		return NTC_LookupTable_100K_3_3V[low].ntc_temperature;
	}
	else if (mv > 1000*NTC_LookupTable_100K_3_3V[high].ntc_voltage)
	{
		return NTC_LookupTable_100K_3_3V[high].ntc_temperature;
	}

	#else
	if ((mv < 1000*NTC_LookupTable_100K_3_3V[low].ntc_voltage) || 
	(mv > 1000*NTC_LookupTable_100K_3_3V[high].ntc_voltage))	
	{
		// printf("%s:%4dmv\r\n",__FUNCTION__,mv);
		return res_temperature;
	}
	#endif

	while (low <= high)
	{
		middle = (low + high) / 2 ;
		// printf("[middle] : %2d\r\n" , middle);
		if (mv > (1000*NTC_LookupTable_100K_3_3V[middle].ntc_voltage)  )	// change to mv
		{
			low = middle + 1;
			// printf("low : %2d\r\n" , low);
		}
		else if (mv < (1000*NTC_LookupTable_100K_3_3V[middle].ntc_voltage) )
		{
			high = middle - 1;
			// printf("high2 : %2d\r\n" , high);
		}
		else 
		{
			// printf("final1 : %2d\r\n" , middle);
			res_temperature = NTC_LookupTable_100K_3_3V[middle].ntc_temperature;
			break;
		}
	}

	if (middle == low)
	{		
		res_temperature = NTC_LookupTable_100K_3_3V[low].ntc_temperature;

		numerator = ((int)(1000*NTC_LookupTable_100K_3_3V[low].ntc_voltage) - mv);
		denominator = ((int)(1000*NTC_LookupTable_100K_3_3V[low].ntc_voltage) - (int)(1000*NTC_LookupTable_100K_3_3V[high].ntc_voltage));
		
		temp_decimal = (float)((float) numerator / (float)denominator) ;
		res_temperature = res_temperature - temp_decimal;
	}
	else if (middle == high)
	{
		res_temperature = NTC_LookupTable_100K_3_3V[low].ntc_temperature;

		numerator = ((int)(1000*NTC_LookupTable_100K_3_3V[low].ntc_voltage) - mv);
		denominator = ((int)(1000*NTC_LookupTable_100K_3_3V[low].ntc_voltage) - (int)(1000*NTC_LookupTable_100K_3_3V[high].ntc_voltage));
		
		temp_decimal = (float)((float) numerator / (float)denominator) ;
		res_temperature = res_temperature - temp_decimal;
	}
	else
	{
		res_temperature = NTC_LookupTable_100K_3_3V[middle].ntc_temperature;

		// printf("EXCEPTION\r\n");
		// printf("low:%d,%2.4fmv,",low,(1000*NTC_LookupTable_100K_3_3V[low].ntc_voltage));
		// printf("middle:%d,%2.4fmv,",middle,(1000*NTC_LookupTable_100K_3_3V[middle].ntc_voltage));
		// printf("high:%d,%2.4fmv,",high,(1000*NTC_LookupTable_100K_3_3V[high].ntc_voltage));
		// printf("mv:%dmv,",mv);
		// printf("\r\n");
	}

	// if (low >= high) 	//( (low >= high) && (middle == low) ) 
	// {		
	// 	// printf("final2 : %2d\r\n" , middle);

	// 	// res_temperature = NTC_LookupTable_100K_3_3V[middle].ntc_temperature;
	// 	if (middle >= high)
	// 	{
	// 		res_temperature = NTC_LookupTable_100K_3_3V[high].ntc_temperature;
	// 	}
	// 	else
	// 	{
	// 		res_temperature = NTC_LookupTable_100K_3_3V[middle].ntc_temperature;
	// 	}
	// }


	// #if defined (ENABLE_NTC_DECIMAL)	// add arithmetic point
	// if ((middle == high) ||
	// 	(middle == low) )
	// {
	// 	denominator = ((int)(1000*NTC_LookupTable_100K_3_3V[low].ntc_voltage) - (int)(1000*NTC_LookupTable_100K_3_3V[high].ntc_voltage));
	// 	numerator = ((int)(1000*NTC_LookupTable_100K_3_3V[low].ntc_voltage) - mv);
		
	// 	temp_decimal = (float)((float) numerator / (float)denominator) ;
	// 	// printf("\r\ntemp_decimal(1) = %2.4f (%4d,%4d)\r\n",(float) temp_decimal , numerator , denominator);
	// 	// printf("low:%d,%2.4fmv,",low,(1000*NTC_LookupTable_100K_3_3V[low].ntc_voltage));
	// 	// printf("middle:%d,%2.4fmv,",middle,(1000*NTC_LookupTable_100K_3_3V[middle].ntc_voltage));
	// 	// printf("high:%d,%2.4fmv,",high,(1000*NTC_LookupTable_100K_3_3V[high].ntc_voltage));
	// 	// printf("mv:%dmv,",mv);
	// 	// printf("\r\n");
	// 	res_temperature = (float) NTC_LookupTable_100K_3_3V[low].ntc_temperature - (float) temp_decimal;
	// 	tmp_temperature = res_temperature;
	// }
	// else  
	// {
	// 	res_temperature = tmp_temperature;
	// }
	// #endif

	// printf("%s:low:%3d,[middle]:%3d,high:%3d,temp=%4d\r\n",__FUNCTION__,low,middle,high,res_temperature);
	// printf("%s:low:%3d(%4d,%2d),middle:%3d(%4d,%2d),high:%3d(%4d,%2d),temp=%2.4f(%4d)\r\n",
	// 			__FUNCTION__,
	// 			(int)low,(int)(1000*NTC_LookupTable_100K_3_3V[low].ntc_voltage),(int)(NTC_LookupTable_100K_3_3V[low].ntc_temperature),
	// 			(int)middle,(int)(1000*NTC_LookupTable_100K_3_3V[middle].ntc_voltage),(int)(NTC_LookupTable_100K_3_3V[middle].ntc_temperature),
	// 			(int)high,(int)(1000*NTC_LookupTable_100K_3_3V[high].ntc_voltage),(int)(NTC_LookupTable_100K_3_3V[high].ntc_temperature),
	// 			(float) res_temperature,(int)mv);

	return res_temperature;	
}


float NTC_LookupTable_100K_5V_Search(uint16_t mv)	// binary search
{
	float res_temperature = 0.0f;
	int middle = 0;
	int low = 0;
	int high = SIZEOF(NTC_LookupTable_100K_5V) - 1;	// array size

	#if defined (ENABLE_NTC_DECIMAL)
	float temp_decimal = 0.0f;
	int denominator= 0;	// numerator / denominator = xxx
	int numerator= 0;
	#endif

	// out of boundary
	#if 1
	if (mv < 1000*NTC_LookupTable_100K_5V[low].ntc_voltage)
	{
		return NTC_LookupTable_100K_5V[low].ntc_temperature;
	}
	else if (mv > 1000*NTC_LookupTable_100K_5V[high].ntc_voltage)
	{
		return NTC_LookupTable_100K_5V[high].ntc_temperature;
	}
	#else
	if ((mv < 1000*NTC_LookupTable_100K_5V[low].ntc_voltage) || 
	(mv > 1000*NTC_LookupTable_100K_5V[high].ntc_voltage))	
	{
		// printf("%s:%4dmv\r\n",__FUNCTION__,mv);
		return res_temperature;
	}
	#endif

	while (low <= high)
	{
		middle = (low + high) / 2 ;
		if (mv > (1000*NTC_LookupTable_100K_5V[middle].ntc_voltage)  )	// change to mv
		{
			low = middle + 1;
		}
		else if (mv < (1000*NTC_LookupTable_100K_5V[middle].ntc_voltage) )
		{
			high = middle - 1;
		}
		else 
		{
			res_temperature = NTC_LookupTable_100K_5V[middle].ntc_temperature;
			break;
		}
	}
	
	if (middle == low)
	{		
		res_temperature = NTC_LookupTable_100K_5V[low].ntc_temperature;

		numerator = ((int)(1000*NTC_LookupTable_100K_5V[low].ntc_voltage) - mv);
		denominator = ((int)(1000*NTC_LookupTable_100K_5V[low].ntc_voltage) - (int)(1000*NTC_LookupTable_100K_5V[high].ntc_voltage));
		
		temp_decimal = (float)((float) numerator / (float)denominator) ;
		res_temperature = res_temperature - temp_decimal;
	}
	else if (middle == high)
	{
		res_temperature = NTC_LookupTable_100K_5V[low].ntc_temperature;

		numerator = ((int)(1000*NTC_LookupTable_100K_5V[low].ntc_voltage) - mv);
		denominator = ((int)(1000*NTC_LookupTable_100K_5V[low].ntc_voltage) - (int)(1000*NTC_LookupTable_100K_5V[high].ntc_voltage));
		
		temp_decimal = (float)((float) numerator / (float)denominator) ;
		res_temperature = res_temperature - temp_decimal;
	}
	else
	{
		res_temperature = NTC_LookupTable_100K_5V[middle].ntc_temperature;

		// printf("EXCEPTION\r\n");
		// printf("low:%d,%2.4fmv,",low,(1000*NTC_LookupTable_100K_5V[low].ntc_voltage));
		// printf("middle:%d,%2.4fmv,",middle,(1000*NTC_LookupTable_100K_5V[middle].ntc_voltage));
		// printf("high:%d,%2.4fmv,",high,(1000*NTC_LookupTable_100K_5V[high].ntc_voltage));
		// printf("mv:%dmv,",mv);
		// printf("\r\n");
	}

	// if (low >= high) //( (low >= high) && (middle == low) ) 
	// {		
	// 	// res_temperature = NTC_LookupTable_100K_5V[middle].ntc_temperature;
	// 	if (middle >= high)
	// 	{
	// 		res_temperature = NTC_LookupTable_100K_5V[high].ntc_temperature;
	// 	}
	// 	else
	// 	{
	// 		res_temperature = NTC_LookupTable_100K_5V[middle].ntc_temperature;
	// 	}
	// }

	// #if defined (ENABLE_NTC_DECIMAL)	// add arithmetic point
	// if (middle == high)
	// {
	// 	denominator = ((int)(1000*NTC_LookupTable_100K_5V[low].ntc_voltage) - (int)(1000*NTC_LookupTable_100K_5V[middle].ntc_voltage));
	// 	numerator = (mv - (int)(1000*NTC_LookupTable_100K_5V[middle].ntc_voltage));
		
	// 	temp_decimal = (float)((float) numerator / (float)denominator) ;
	// 	// printf("\r\ntemp_decimal(1) = %2.4f (%4d,%4d)\r\n",(float) temp_decimal , numerator , denominator);
	// 	res_temperature = (float) NTC_LookupTable_100K_5V[high].ntc_temperature + (float) temp_decimal;
	// }
	// else
	// {
	// 	denominator = ((int)(1000*NTC_LookupTable_100K_5V[middle].ntc_voltage) - (int)(1000*NTC_LookupTable_100K_5V[high].ntc_voltage)) ;
	// 	numerator = (mv - (int)(1000*NTC_LookupTable_100K_5V[high].ntc_voltage)); 

	// 	temp_decimal = (float)((float) numerator / (float)denominator) ;
	// 	// printf("\r\ntemp_decimal(2) = %2.4f (%4d,%4d)\r\n",(float) temp_decimal , numerator , denominator);
	// 	res_temperature = (float) NTC_LookupTable_100K_5V[high].ntc_temperature + (float) temp_decimal;
	// }
	// #endif

	// printf("%s:low:%3d,middle:%3d,high:%3d,temp=%4d\r\n",__FUNCTION__,low,middle,high,res_temperature);
	// printf("%s:low:%3d(%4d,%2d),middle:%3d(%4d,%2d),high:%3d(%4d,%2d),temp=%2.4f(%4d)\r\n",
	// 			__FUNCTION__,
	// 			(int)low,(int)(1000*NTC_LookupTable_100K_5V[low].ntc_voltage),(int)(NTC_LookupTable_100K_5V[low].ntc_temperature),
	// 			(int)middle,(int)(1000*NTC_LookupTable_100K_5V[middle].ntc_voltage),(int)(NTC_LookupTable_100K_5V[middle].ntc_temperature),
	// 			(int)high,(int)(1000*NTC_LookupTable_100K_5V[high].ntc_voltage),(int)(NTC_LookupTable_100K_5V[high].ntc_temperature),
	// 			(float) res_temperature,(int)mv);

	return res_temperature;	
}

float NTC_temperature_calculate(uint32_t AVdd_vol, float vol)
{
    float Rt=0;
    float Rp=10000;
    float T2=273.15+25;
    float Bx=3950;
    float Ka=273.15;
    // float vol=0;
    float temp = 0;
    
    Rt = (AVdd_vol-vol)*10000/vol;
    temp = 1/(1/T2+log(Rt/Rp)/Bx)-Ka+0.5;

    return temp;
}

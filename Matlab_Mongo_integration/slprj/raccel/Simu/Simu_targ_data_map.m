    function targMap = targDataMap(),

    ;%***********************
    ;% Create Parameter Map *
    ;%***********************
    
        nTotData      = 0; %add to this count as we go
        nTotSects     = 2;
        sectIdxOffset = 0;

        ;%
        ;% Define dummy sections & preallocate arrays
        ;%
        dumSection.nData = -1;
        dumSection.data  = [];

        dumData.logicalSrcIdx = -1;
        dumData.dtTransOffset = -1;

        ;%
        ;% Init/prealloc paramMap
        ;%
        paramMap.nSections           = nTotSects;
        paramMap.sectIdxOffset       = sectIdxOffset;
            paramMap.sections(nTotSects) = dumSection; %prealloc
        paramMap.nTotData            = -1;

        ;%
        ;% Auto data (rtP)
        ;%
            section.nData     = 85;
            section.data(85)  = dumData; %prealloc

                    ;% rtP.ThreePhaseProgrammableVoltageSource_HarmonicGeneration
                    section.data(1).logicalSrcIdx = 0;
                    section.data(1).dtTransOffset = 0;

                    ;% rtP.HarmonicAgeneration_Mag_Harmo
                    section.data(2).logicalSrcIdx = 1;
                    section.data(2).dtTransOffset = 1;

                    ;% rtP.HarmonicBgeneration_Mag_Harmo
                    section.data(3).logicalSrcIdx = 2;
                    section.data(3).dtTransOffset = 2;

                    ;% rtP.HarmonicAgeneration_Phase_Harmo
                    section.data(4).logicalSrcIdx = 3;
                    section.data(4).dtTransOffset = 3;

                    ;% rtP.HarmonicBgeneration_Phase_Harmo
                    section.data(5).logicalSrcIdx = 4;
                    section.data(5).dtTransOffset = 4;

                    ;% rtP.HarmonicAgeneration_Seq_Harmo
                    section.data(6).logicalSrcIdx = 5;
                    section.data(6).dtTransOffset = 5;

                    ;% rtP.HarmonicBgeneration_Seq_Harmo
                    section.data(7).logicalSrcIdx = 6;
                    section.data(7).dtTransOffset = 6;

                    ;% rtP.VariationSubSystem_Toff_Variation
                    section.data(8).logicalSrcIdx = 7;
                    section.data(8).dtTransOffset = 7;

                    ;% rtP.VariationSubSystem_Ton_Variation
                    section.data(9).logicalSrcIdx = 8;
                    section.data(9).dtTransOffset = 8;

                    ;% rtP.ThreePhaseProgrammableVoltageSource_VariationEntity
                    section.data(10).logicalSrcIdx = 9;
                    section.data(10).dtTransOffset = 9;

                    ;% rtP.VariationSubSystem_VariationFreq
                    section.data(11).logicalSrcIdx = 10;
                    section.data(11).dtTransOffset = 10;

                    ;% rtP.VariationSubSystem_VariationMag
                    section.data(12).logicalSrcIdx = 11;
                    section.data(12).dtTransOffset = 11;

                    ;% rtP.VariationSubSystem_VariationRate
                    section.data(13).logicalSrcIdx = 12;
                    section.data(13).dtTransOffset = 12;

                    ;% rtP.VariationSubSystem_VariationStep
                    section.data(14).logicalSrcIdx = 13;
                    section.data(14).dtTransOffset = 13;

                    ;% rtP.HarmonicAgeneration_n_Harmo
                    section.data(15).logicalSrcIdx = 14;
                    section.data(15).dtTransOffset = 14;

                    ;% rtP.HarmonicBgeneration_n_Harmo
                    section.data(16).logicalSrcIdx = 15;
                    section.data(16).dtTransOffset = 15;

                    ;% rtP.Out1_Y0
                    section.data(17).logicalSrcIdx = 16;
                    section.data(17).dtTransOffset = 16;

                    ;% rtP.Out2_Y0
                    section.data(18).logicalSrcIdx = 17;
                    section.data(18).dtTransOffset = 17;

                    ;% rtP.Step_Time
                    section.data(19).logicalSrcIdx = 18;
                    section.data(19).dtTransOffset = 18;

                    ;% rtP.Step_Y0
                    section.data(20).logicalSrcIdx = 19;
                    section.data(20).dtTransOffset = 19;

                    ;% rtP.Step_YFinal
                    section.data(21).logicalSrcIdx = 20;
                    section.data(21).dtTransOffset = 20;

                    ;% rtP.Step1_Time
                    section.data(22).logicalSrcIdx = 21;
                    section.data(22).dtTransOffset = 21;

                    ;% rtP.Step1_Y0
                    section.data(23).logicalSrcIdx = 22;
                    section.data(23).dtTransOffset = 22;

                    ;% rtP.Step1_YFinal
                    section.data(24).logicalSrcIdx = 23;
                    section.data(24).dtTransOffset = 23;

                    ;% rtP.Gain3_Gain
                    section.data(25).logicalSrcIdx = 24;
                    section.data(25).dtTransOffset = 24;

                    ;% rtP.valp_nom2_Value
                    section.data(26).logicalSrcIdx = 25;
                    section.data(26).dtTransOffset = 25;

                    ;% rtP.Zerosequence_Value
                    section.data(27).logicalSrcIdx = 26;
                    section.data(27).dtTransOffset = 26;

                    ;% rtP.Positivesequence_Value
                    section.data(28).logicalSrcIdx = 27;
                    section.data(28).dtTransOffset = 29;

                    ;% rtP.Negativesequence_Value
                    section.data(29).logicalSrcIdx = 28;
                    section.data(29).dtTransOffset = 32;

                    ;% rtP.Gain3_Gain_pjrvm1pj0y
                    section.data(30).logicalSrcIdx = 29;
                    section.data(30).dtTransOffset = 35;

                    ;% rtP.valp_nom2_Value_ailjqhj5iu
                    section.data(31).logicalSrcIdx = 30;
                    section.data(31).dtTransOffset = 36;

                    ;% rtP.Zerosequence_Value_b1kifksb2f
                    section.data(32).logicalSrcIdx = 31;
                    section.data(32).dtTransOffset = 37;

                    ;% rtP.Positivesequence_Value_kdc0d2zbee
                    section.data(33).logicalSrcIdx = 32;
                    section.data(33).dtTransOffset = 40;

                    ;% rtP.Negativesequence_Value_mod221u1p5
                    section.data(34).logicalSrcIdx = 33;
                    section.data(34).dtTransOffset = 43;

                    ;% rtP.Gain4_Gain
                    section.data(35).logicalSrcIdx = 34;
                    section.data(35).dtTransOffset = 46;

                    ;% rtP.timer_Y0
                    section.data(36).logicalSrcIdx = 35;
                    section.data(36).dtTransOffset = 47;

                    ;% rtP.magnitude_Y0
                    section.data(37).logicalSrcIdx = 36;
                    section.data(37).dtTransOffset = 48;

                    ;% rtP.frequency_Y0
                    section.data(38).logicalSrcIdx = 37;
                    section.data(38).dtTransOffset = 49;

                    ;% rtP.phase_Y0
                    section.data(39).logicalSrcIdx = 38;
                    section.data(39).dtTransOffset = 50;

                    ;% rtP.LookUpTable_XData
                    section.data(40).logicalSrcIdx = 39;
                    section.data(40).dtTransOffset = 51;

                    ;% rtP.LookUpTable_YData
                    section.data(41).logicalSrcIdx = 40;
                    section.data(41).dtTransOffset = 61;

                    ;% rtP.DiscreteTimeIntegrator_gainval
                    section.data(42).logicalSrcIdx = 41;
                    section.data(42).dtTransOffset = 71;

                    ;% rtP.DiscreteTimeIntegrator_IC
                    section.data(43).logicalSrcIdx = 42;
                    section.data(43).dtTransOffset = 72;

                    ;% rtP.Step1_Y0_fbkc4jckuh
                    section.data(44).logicalSrcIdx = 43;
                    section.data(44).dtTransOffset = 73;

                    ;% rtP.Step1_YFinal_m3vbyrrgui
                    section.data(45).logicalSrcIdx = 44;
                    section.data(45).dtTransOffset = 74;

                    ;% rtP.Step_Y0_igr4vpq0ox
                    section.data(46).logicalSrcIdx = 45;
                    section.data(46).dtTransOffset = 75;

                    ;% rtP.Step_YFinal_btkqknoc1j
                    section.data(47).logicalSrcIdx = 46;
                    section.data(47).dtTransOffset = 76;

                    ;% rtP.DiscreteTimeIntegrator1_gainval
                    section.data(48).logicalSrcIdx = 47;
                    section.data(48).dtTransOffset = 77;

                    ;% rtP.DiscreteTimeIntegrator1_IC
                    section.data(49).logicalSrcIdx = 48;
                    section.data(49).dtTransOffset = 78;

                    ;% rtP.UnitDelay_InitialCondition
                    section.data(50).logicalSrcIdx = 49;
                    section.data(50).dtTransOffset = 79;

                    ;% rtP.Switch2_Threshold
                    section.data(51).logicalSrcIdx = 50;
                    section.data(51).dtTransOffset = 80;

                    ;% rtP.Gain2_Gain
                    section.data(52).logicalSrcIdx = 51;
                    section.data(52).dtTransOffset = 81;

                    ;% rtP.Switch_Threshold
                    section.data(53).logicalSrcIdx = 52;
                    section.data(53).dtTransOffset = 82;

                    ;% rtP.Constant_Value
                    section.data(54).logicalSrcIdx = 53;
                    section.data(54).dtTransOffset = 83;

                    ;% rtP.Constant1_Value
                    section.data(55).logicalSrcIdx = 54;
                    section.data(55).dtTransOffset = 84;

                    ;% rtP.Constant2_Value
                    section.data(56).logicalSrcIdx = 55;
                    section.data(56).dtTransOffset = 85;

                    ;% rtP.Constant3_Value
                    section.data(57).logicalSrcIdx = 56;
                    section.data(57).dtTransOffset = 86;

                    ;% rtP.Constant4_Value
                    section.data(58).logicalSrcIdx = 57;
                    section.data(58).dtTransOffset = 87;

                    ;% rtP.Constant5_Value
                    section.data(59).logicalSrcIdx = 58;
                    section.data(59).dtTransOffset = 88;

                    ;% rtP.Constant6_Value
                    section.data(60).logicalSrcIdx = 59;
                    section.data(60).dtTransOffset = 89;

                    ;% rtP.valp_nom5_Value
                    section.data(61).logicalSrcIdx = 60;
                    section.data(61).dtTransOffset = 90;

                    ;% rtP.Constant_Value_i43oev5xkv
                    section.data(62).logicalSrcIdx = 61;
                    section.data(62).dtTransOffset = 91;

                    ;% rtP.Constant1_Value_hahhc3roxx
                    section.data(63).logicalSrcIdx = 62;
                    section.data(63).dtTransOffset = 92;

                    ;% rtP.Constant2_Value_hchuyjxq4b
                    section.data(64).logicalSrcIdx = 63;
                    section.data(64).dtTransOffset = 93;

                    ;% rtP.Constant3_Value_fcet3ganpa
                    section.data(65).logicalSrcIdx = 64;
                    section.data(65).dtTransOffset = 94;

                    ;% rtP.Constant4_Value_dtyce2ojfb
                    section.data(66).logicalSrcIdx = 65;
                    section.data(66).dtTransOffset = 95;

                    ;% rtP.Constant5_Value_hqow3frjxj
                    section.data(67).logicalSrcIdx = 66;
                    section.data(67).dtTransOffset = 96;

                    ;% rtP.Gain1_Gain
                    section.data(68).logicalSrcIdx = 67;
                    section.data(68).dtTransOffset = 97;

                    ;% rtP.Switch5_Threshold
                    section.data(69).logicalSrcIdx = 68;
                    section.data(69).dtTransOffset = 98;

                    ;% rtP.StateSpace_DS_param
                    section.data(70).logicalSrcIdx = 69;
                    section.data(70).dtTransOffset = 99;

                    ;% rtP.donotdeletethisgain_Gain
                    section.data(71).logicalSrcIdx = 70;
                    section.data(71).dtTransOffset = 117;

                    ;% rtP.donotdeletethisgain_Gain_l234soa3tf
                    section.data(72).logicalSrcIdx = 71;
                    section.data(72).dtTransOffset = 118;

                    ;% rtP.donotdeletethisgain_Gain_lkyvqrwckq
                    section.data(73).logicalSrcIdx = 72;
                    section.data(73).dtTransOffset = 119;

                    ;% rtP.Kv1_Gain
                    section.data(74).logicalSrcIdx = 73;
                    section.data(74).dtTransOffset = 120;

                    ;% rtP.donotdeletethisgain_Gain_en3nmrxgld
                    section.data(75).logicalSrcIdx = 74;
                    section.data(75).dtTransOffset = 121;

                    ;% rtP.donotdeletethisgain_Gain_hsdfpbzlqb
                    section.data(76).logicalSrcIdx = 75;
                    section.data(76).dtTransOffset = 122;

                    ;% rtP.donotdeletethisgain_Gain_by5bos33lx
                    section.data(77).logicalSrcIdx = 76;
                    section.data(77).dtTransOffset = 123;

                    ;% rtP.Kv_Gain
                    section.data(78).logicalSrcIdx = 77;
                    section.data(78).dtTransOffset = 124;

                    ;% rtP.valp_nom1_Value
                    section.data(79).logicalSrcIdx = 78;
                    section.data(79).dtTransOffset = 125;

                    ;% rtP.Gain_Gain
                    section.data(80).logicalSrcIdx = 79;
                    section.data(80).dtTransOffset = 126;

                    ;% rtP.valp_nom_Value
                    section.data(81).logicalSrcIdx = 80;
                    section.data(81).dtTransOffset = 127;

                    ;% rtP.Gain3_Gain_nkqpbuotad
                    section.data(82).logicalSrcIdx = 81;
                    section.data(82).dtTransOffset = 128;

                    ;% rtP.P1_Value
                    section.data(83).logicalSrcIdx = 82;
                    section.data(83).dtTransOffset = 129;

                    ;% rtP.SinglePhase_Value
                    section.data(84).logicalSrcIdx = 83;
                    section.data(84).dtTransOffset = 132;

                    ;% rtP.valp_nom2_Value_oppzryq301
                    section.data(85).logicalSrcIdx = 84;
                    section.data(85).dtTransOffset = 133;

            nTotData = nTotData + section.nData;
            paramMap.sections(1) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% rtP.selector_Y0
                    section.data(1).logicalSrcIdx = 85;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            paramMap.sections(2) = section;
            clear section


            ;%
            ;% Non-auto Data (parameter)
            ;%


        ;%
        ;% Add final counts to struct.
        ;%
        paramMap.nTotData = nTotData;



    ;%**************************
    ;% Create Block Output Map *
    ;%**************************
    
        nTotData      = 0; %add to this count as we go
        nTotSects     = 2;
        sectIdxOffset = 0;

        ;%
        ;% Define dummy sections & preallocate arrays
        ;%
        dumSection.nData = -1;
        dumSection.data  = [];

        dumData.logicalSrcIdx = -1;
        dumData.dtTransOffset = -1;

        ;%
        ;% Init/prealloc sigMap
        ;%
        sigMap.nSections           = nTotSects;
        sigMap.sectIdxOffset       = sectIdxOffset;
            sigMap.sections(nTotSects) = dumSection; %prealloc
        sigMap.nTotData            = -1;

        ;%
        ;% Auto data (rtB)
        ;%
            section.nData     = 23;
            section.data(23)  = dumData; %prealloc

                    ;% rtB.nrqkodwa1c
                    section.data(1).logicalSrcIdx = 0;
                    section.data(1).dtTransOffset = 0;

                    ;% rtB.c4d1oupeki
                    section.data(2).logicalSrcIdx = 1;
                    section.data(2).dtTransOffset = 3;

                    ;% rtB.fifgk54qep
                    section.data(3).logicalSrcIdx = 2;
                    section.data(3).dtTransOffset = 9;

                    ;% rtB.bhw42paivi
                    section.data(4).logicalSrcIdx = 3;
                    section.data(4).dtTransOffset = 12;

                    ;% rtB.o5wtpcthil
                    section.data(5).logicalSrcIdx = 4;
                    section.data(5).dtTransOffset = 15;

                    ;% rtB.laxgavxprk
                    section.data(6).logicalSrcIdx = 5;
                    section.data(6).dtTransOffset = 16;

                    ;% rtB.pvl5c51pnp
                    section.data(7).logicalSrcIdx = 6;
                    section.data(7).dtTransOffset = 17;

                    ;% rtB.jioahlusds
                    section.data(8).logicalSrcIdx = 7;
                    section.data(8).dtTransOffset = 18;

                    ;% rtB.afdrb3rl2a
                    section.data(9).logicalSrcIdx = 8;
                    section.data(9).dtTransOffset = 19;

                    ;% rtB.md3brhiy1m
                    section.data(10).logicalSrcIdx = 9;
                    section.data(10).dtTransOffset = 20;

                    ;% rtB.efte3d5qt1
                    section.data(11).logicalSrcIdx = 10;
                    section.data(11).dtTransOffset = 21;

                    ;% rtB.og04ntp20z
                    section.data(12).logicalSrcIdx = 11;
                    section.data(12).dtTransOffset = 22;

                    ;% rtB.jllfbb5fwm
                    section.data(13).logicalSrcIdx = 12;
                    section.data(13).dtTransOffset = 23;

                    ;% rtB.lxgpmrfcqy
                    section.data(14).logicalSrcIdx = 13;
                    section.data(14).dtTransOffset = 24;

                    ;% rtB.m5idabume1
                    section.data(15).logicalSrcIdx = 14;
                    section.data(15).dtTransOffset = 25;

                    ;% rtB.dxoaamoywj
                    section.data(16).logicalSrcIdx = 15;
                    section.data(16).dtTransOffset = 26;

                    ;% rtB.fitqev0uxw
                    section.data(17).logicalSrcIdx = 16;
                    section.data(17).dtTransOffset = 27;

                    ;% rtB.pxmxarczi5
                    section.data(18).logicalSrcIdx = 17;
                    section.data(18).dtTransOffset = 28;

                    ;% rtB.lexrgs2mhm
                    section.data(19).logicalSrcIdx = 18;
                    section.data(19).dtTransOffset = 31;

                    ;% rtB.jk4n3tfbqk
                    section.data(20).logicalSrcIdx = 19;
                    section.data(20).dtTransOffset = 34;

                    ;% rtB.nvw1lcncob
                    section.data(21).logicalSrcIdx = 20;
                    section.data(21).dtTransOffset = 35;

                    ;% rtB.dnsebcby4u
                    section.data(22).logicalSrcIdx = 21;
                    section.data(22).dtTransOffset = 38;

                    ;% rtB.n5qwj2eq4f
                    section.data(23).logicalSrcIdx = 22;
                    section.data(23).dtTransOffset = 39;

            nTotData = nTotData + section.nData;
            sigMap.sections(1) = section;
            clear section

            section.nData     = 6;
            section.data(6)  = dumData; %prealloc

                    ;% rtB.i4r4dicir4
                    section.data(1).logicalSrcIdx = 23;
                    section.data(1).dtTransOffset = 0;

                    ;% rtB.gel5csqx2x
                    section.data(2).logicalSrcIdx = 24;
                    section.data(2).dtTransOffset = 1;

                    ;% rtB.dvvada2wq0
                    section.data(3).logicalSrcIdx = 25;
                    section.data(3).dtTransOffset = 2;

                    ;% rtB.crivgmds1d
                    section.data(4).logicalSrcIdx = 26;
                    section.data(4).dtTransOffset = 3;

                    ;% rtB.muroutufee
                    section.data(5).logicalSrcIdx = 27;
                    section.data(5).dtTransOffset = 4;

                    ;% rtB.cnblyrn4lv
                    section.data(6).logicalSrcIdx = 28;
                    section.data(6).dtTransOffset = 5;

            nTotData = nTotData + section.nData;
            sigMap.sections(2) = section;
            clear section


            ;%
            ;% Non-auto Data (signal)
            ;%


        ;%
        ;% Add final counts to struct.
        ;%
        sigMap.nTotData = nTotData;



    ;%*******************
    ;% Create DWork Map *
    ;%*******************
    
        nTotData      = 0; %add to this count as we go
        nTotSects     = 6;
        sectIdxOffset = 2;

        ;%
        ;% Define dummy sections & preallocate arrays
        ;%
        dumSection.nData = -1;
        dumSection.data  = [];

        dumData.logicalSrcIdx = -1;
        dumData.dtTransOffset = -1;

        ;%
        ;% Init/prealloc dworkMap
        ;%
        dworkMap.nSections           = nTotSects;
        dworkMap.sectIdxOffset       = sectIdxOffset;
            dworkMap.sections(nTotSects) = dumSection; %prealloc
        dworkMap.nTotData            = -1;

        ;%
        ;% Auto data (rtDW)
        ;%
            section.nData     = 3;
            section.data(3)  = dumData; %prealloc

                    ;% rtDW.isrz0mkxtu
                    section.data(1).logicalSrcIdx = 0;
                    section.data(1).dtTransOffset = 0;

                    ;% rtDW.aez3rrjtvq
                    section.data(2).logicalSrcIdx = 1;
                    section.data(2).dtTransOffset = 1;

                    ;% rtDW.dvny5bvldg
                    section.data(3).logicalSrcIdx = 2;
                    section.data(3).dtTransOffset = 2;

            nTotData = nTotData + section.nData;
            dworkMap.sections(1) = section;
            clear section

            section.nData     = 4;
            section.data(4)  = dumData; %prealloc

                    ;% rtDW.cvatluqld2.AS
                    section.data(1).logicalSrcIdx = 3;
                    section.data(1).dtTransOffset = 0;

                    ;% rtDW.ozvx3jkzq1.LoggedData
                    section.data(2).logicalSrcIdx = 4;
                    section.data(2).dtTransOffset = 1;

                    ;% rtDW.crfgssgjo3.AQHandles
                    section.data(3).logicalSrcIdx = 5;
                    section.data(3).dtTransOffset = 3;

                    ;% rtDW.ist3mwdui0.AQHandles
                    section.data(4).logicalSrcIdx = 6;
                    section.data(4).dtTransOffset = 4;

            nTotData = nTotData + section.nData;
            dworkMap.sections(2) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% rtDW.nm03o3xjle
                    section.data(1).logicalSrcIdx = 7;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            dworkMap.sections(3) = section;
            clear section

            section.nData     = 2;
            section.data(2)  = dumData; %prealloc

                    ;% rtDW.ouvnxj0ufc
                    section.data(1).logicalSrcIdx = 8;
                    section.data(1).dtTransOffset = 0;

                    ;% rtDW.lhmj03s2xn
                    section.data(2).logicalSrcIdx = 9;
                    section.data(2).dtTransOffset = 1;

            nTotData = nTotData + section.nData;
            dworkMap.sections(4) = section;
            clear section

            section.nData     = 2;
            section.data(2)  = dumData; %prealloc

                    ;% rtDW.cj2gryf03t
                    section.data(1).logicalSrcIdx = 10;
                    section.data(1).dtTransOffset = 0;

                    ;% rtDW.mkikeoofxp
                    section.data(2).logicalSrcIdx = 11;
                    section.data(2).dtTransOffset = 1;

            nTotData = nTotData + section.nData;
            dworkMap.sections(5) = section;
            clear section

            section.nData     = 2;
            section.data(2)  = dumData; %prealloc

                    ;% rtDW.lug5zdhh5r
                    section.data(1).logicalSrcIdx = 12;
                    section.data(1).dtTransOffset = 0;

                    ;% rtDW.ee1zw1h20t
                    section.data(2).logicalSrcIdx = 13;
                    section.data(2).dtTransOffset = 1;

            nTotData = nTotData + section.nData;
            dworkMap.sections(6) = section;
            clear section


            ;%
            ;% Non-auto Data (dwork)
            ;%


        ;%
        ;% Add final counts to struct.
        ;%
        dworkMap.nTotData = nTotData;



    ;%
    ;% Add individual maps to base struct.
    ;%

    targMap.paramMap  = paramMap;
    targMap.signalMap = sigMap;
    targMap.dworkMap  = dworkMap;

    ;%
    ;% Add checksums to base struct.
    ;%


    targMap.checksum0 = 502880823;
    targMap.checksum1 = 3015393227;
    targMap.checksum2 = 859318136;
    targMap.checksum3 = 3029643202;


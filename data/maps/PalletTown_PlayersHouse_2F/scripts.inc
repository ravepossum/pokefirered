PalletTown_PlayersHouse_2F_MapScripts:: @ 8168CA3
    map_script 3, PalletTown_PlayersHouse_2F_MapScript1_168CAE
    map_script 4, PalletTown_PlayersHouse_2F_MapScript2_168CBE
    .byte 0

PalletTown_PlayersHouse_2F_MapScript1_168CAE:: @ 8168CAE
    compare_var_to_value VAR_0x4056, 0
    call_if 1, EventScript_168CBA
    end

EventScript_168CBA:: @ 8168CBA
    setrespawn 1
    return

PalletTown_PlayersHouse_2F_MapScript2_168CBE:: @ 8168CBE
    map_script_2 VAR_0x4056, 0, EventScript_168CC8
    .2byte 0

EventScript_168CC8:: @ 8168CC8
    turnobject 255, 2
    setvar VAR_0x4056, 1
    end

PalletTown_PlayersHouse_2F_EventScript_168CD2:: @ 8168CD2
    loadword 0, gUnknown_818D50B
    callstd 3
    end

PalletTown_PlayersHouse_2F_EventScript_168CDB:: @ 8168CDB
    loadword 0, gUnknown_818D53B
    callstd 3
    end

gUnknown_8168CE4:: @ 8168CE4
PalletTown_PlayersHouse_2F_EventScript_168CE4:: @ 8168CE4
    special sub_8110AB4
    compare_var_to_value VAR_RESULT, 2
    goto_if 1, EventScript_1A7AE0
    lockall
    setvar VAR_0x8004, 32
    special sub_812B220
    setvar VAR_0x8004, 1
    special sub_80CA86C
    playse SE_PC_ON
    loadword 0, gUnknown_81A5420
    callstd 4
    special sub_80EB6AC
    waitstate
    special sub_812B35C
    releaseall
    end

gUnknown_8168D17:: @ 8168D17
    setvar VAR_0x8004, 1
    playse SE_PC_OFF
    special sub_80CA9A8
    special sub_812B35C
    releaseall
    end
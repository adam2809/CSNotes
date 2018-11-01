B main

menmow  DEFB 	" men went to mow\n",0
men     DEFB  " men,"
dog     DEFB  " man and his dog, Spot\n"
wenttomow     DEFB  "Went to mow a meadow\n"


        ALIGN
main    MOV R0, #4
        SWI 4
        ADR R0, menmow
        SWI 3
        ADR R0, wenttomow
        SWI 3
        MOV R1, #0; Setting R0 to 0 for comparisons
        MOV R2, #4; Setting a counter in register R2
prtmen  MOV R0, R2
        SWI 4
        SUB R2, R2, #1
        ADR R0, men
        SWI 3
        CMP R2, R1
        BNE prtmen

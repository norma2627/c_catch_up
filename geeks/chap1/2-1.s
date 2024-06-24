                                 *************************************************************************
                                 *                               FUNCTION                                *
                                 *************************************************************************
                                 undefined main()
               undefined            AL:1             <RETURN>
               undefined4           Stack[-0xc]:4    local_c                                        XREF[3]:       00101141(R), 
                                                                                                                   0010115a(W), 
                                                                                                                   00101168(R)  
               undefined4           Stack[-0x10]:4   local_10                                       XREF[2]:       00101161(W), 
                                                                                                                   00101181(R)  
                                 main                                                    XREF[4]:       Entry Point(*), _start:00101064(*), 
                                                                                                         00102080, 00102118(*)  
           00101139 55                PUSH         RBP
           0010113a 48 89 e5          MOV          RBP,RSP
           0010113d 48 83 ec 10       SUB          RSP,0x10
           00101141 8b 45 fc          MOV          EAX,dword ptr [RBP + local_c]
           00101144 89 c6             MOV          ESI,EAX
           00101146 48 8d 05 bb       LEA          RAX,[s_defied_var:_%d_00102008]                          = "defied_var: %d\n"
           0010114d 48 89 c7          MOV          RDI=>s_defied_var:_%d_00102008,RAX                       = "defied_var: %d\n"
           00101150 b8 00 00 00       MOV          EAX,0x0
           00101155 e8 d6 fe ff       CALL         <EXTERNAL>::printf                                       int printf(char * __format, ...)
           0010115a c7 45 fc 0c       MOV          dword ptr [RBP + local_c],0xc
           00101161 c7 45 f8 19       MOV          dword ptr [RBP + local_10],0x19
           00101168 8b 45 fc          MOV          EAX,dword ptr [RBP + local_c]
           0010116b 89 c6             MOV          ESI,EAX
           0010116d 48 8d 05 a4       LEA          RAX,[s_Value_of_defied_var_after_initia_00102018]        = "Value of defied_var after initializ
           00101174 48 89 c7          MOV          RDI=>s_Value_of_defied_var_after_initia_00102018,RAX     = "Value of defied_var after initializ
           00101177 b8 00 00 00       MOV          EAX,0x0
           0010117c e8 af fe ff       CALL         <EXTERNAL>::printf                                       int printf(char * __format, ...)
           00101181 8b 45 f8          MOV          EAX,dword ptr [RBP + local_10]
           00101184 89 c6             MOV          ESI,EAX
           00101186 48 8d 05 b9       LEA          RAX,[s_Value_of_ini_var:_%d_00102046]                    = "Value of ini_var: %d"
           0010118d 48 89 c7          MOV          RDI=>s_Value_of_ini_var:_%d_00102046,RAX                 = "Value of ini_var: %d"
           00101190 b8 00 00 00       MOV          EAX,0x0
           00101195 e8 96 fe ff       CALL         <EXTERNAL>::printf                                       int printf(char * __format, ...)
           0010119a b8 00 00 00       MOV          EAX,0x0
           0010119f c9                LEAVE
           001011a0 c3                RET

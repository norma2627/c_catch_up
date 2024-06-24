                                 *************************************************************************
                                 *                            THUNK FUNCTION                             *
                                 *************************************************************************
                                 thunk int printf(char * __format, ...)
                                     Thunked-Function: <EXTERNAL>::printf
               int                  EAX:4            <RETURN>
               char *               RDI:8            __format
                                 <EXTERNAL>::printf                                      XREF[1]:       function:0010115c(c)  
           00101030 ff 25 ca 2f       JMP          qword ptr [DAT_00104000]                                 int printf(char * __format, ...)
                                                                                                            -> printf
                                 -- Flow Override: CALL_RETURN (COMPUTED_CALL_TERMINATOR)
